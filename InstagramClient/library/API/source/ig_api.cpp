#include "ig_api.h"

namespace ig
{
	namespace API
	{
		API::API(
			log_Func_Callback,
			const std::string& _device,
			const std::string& _base_path,
			bool _is_logged_in,
			const std::string& _username,
			const std::string& _password
		)
		{
			if (_device.empty())
			{
				device = ig::settings::DEFAULT_DEVICE;
				device_settings = ig::settings::DEVICES.at(ig::settings::DEFAULT_DEVICE);
			}
			else
			{
				device = _device;
				device_settings = ig::settings::DEVICES.at(_device);
			}
			user_agent = generate_user_agent();
			base_path = _base_path;
			is_logged_in = _is_logged_in;
			std::filesystem::path* conf_PATH = new std::filesystem::path("./config/");
			if (!std::filesystem::exists(*conf_PATH))
			{
				std::filesystem::create_directories(*conf_PATH);
			}
			*conf_PATH /= "instabot.log";
			if (!std::filesystem::exists(*conf_PATH))
			{
				FILE_OUT.open(*conf_PATH);
			}
			FILE_OUT.close();
			uuid = ig::settings::uuid::generate_uuid_v4();
			delete conf_PATH;
		}
		std::string API::generate_user_agent()
		{
			user_agent = ig::settings::USER_AGENT_BASE;
			user_agent.replace(user_agent.find("instagram_version"), sizeof("instagram_version") - 1, device_settings.at("instagram_version"));
			user_agent.replace(user_agent.find("android_version"), sizeof("android_version") - 1, device_settings.at("android_version"));
			user_agent.replace(user_agent.find("android_release"), sizeof("android_release") - 1, device_settings.at("android_release"));
			user_agent.replace(user_agent.find("dpi"), sizeof("dpi") - 1, device_settings.at("dpi"));
			user_agent.replace(user_agent.find("resolution"), sizeof("resolution") - 1, device_settings.at("resolution"));
			user_agent.replace(user_agent.find("manufacturer"), sizeof("manufacturer") - 1, device_settings.at("manufacturer"));
			user_agent.replace(user_agent.find("device"), sizeof("device") - 1, device_settings.at("device"));
			user_agent.replace(user_agent.find("model"), sizeof("model") - 1, device_settings.at("model"));
			user_agent.replace(user_agent.find("cpu"), sizeof("cpu") - 1, device_settings.at("cpu"));
			return user_agent;
		}
		void API::set_user(const std::string& _username, const std::string& _password)
		{
			username = _username;
			password = _password;
		}
		std::string API::get_proxy()
		{
			return proxy;
		}
		void API::set_proxy(const std::string& _proxy)
		{
			proxy = _proxy;
		}
		std::string API::get_proxy(const std::vector<std::string>& _proxy_list)
		{
			return _proxy_list[std::rand() % _proxy_list.size()];
		}
		bool API::login(const std::string& _username, const std::string& _password, bool _force, const std::string& _proxy, bool _use_cookie, const std::string& _cookie_fname, bool _is_threaded)
		{
			proxy = _proxy;
			logger.Log(ig::settings::INFO, "Setup the proxy.");
			if (_use_cookie)
			{
				return check_cookie(_username, _password, _proxy);
			}
			if ((!_use_cookie) && ((!is_logged_in) || (_force)))
			{
				if (_password == None)
				{
					usr_pass = Login.get_credentials(_username);
					set_user(std::get<0>(usr_pass), std::get<1>(usr_pass));
				}
				device_id = generate_devive_id(get_seed(_username, _password));
				proxy = setup_proxy();
				logger.Log(ig::settings::INFO, "your proxy " + proxy);
				//proxy = "http://rocket2_rdsdr:31AxpylE@163.172.161.94:37564"
				//proxy = None
				ig_username = _username;
				FILE_OUT.open(ig_username + "check_blocked.txt");
				while (FILE_OUT.is_open())
				{
					FILE_OUT.write("0", 1);
				}
				cookie_fname.clear();
				cookie_fname.append(base_path);
				cookie_fname.append(_cookie_fname).append(_username).append("_cookie.txt");
				session = requests.Session();
				set_proxy();
				std::string* url = new std::string();
				*url = "si/fetch_headers/?challenge_type=signup&guid=";
				url->append(ig::settings::uuid::generate_uuid_v4());
				if (send_request(*url, login() == true))
				{
					std::string* data = new std::string();
					data->append("phone_id").append(":").append(ig::settings::uuid::generate_uuid_v4()).append(",");
					data->append("_csrftoken").append(":").append(token).append(",");
					data->append("username").append(":").append(username).append(",");
					data->append("guid").append(":").append(uuid).append(",");
					data->append("device_id").append(":").append(device_id).append(",");
					data->append("password").append(":").append(password).append(",");
					data->append("login_attempt_count").append(":").append("0").append(",");
					if (send_request("accounts/login/", *data, true))
					{
						use_cookie = true;
						save_successful_login(use_cookie, cookie_fname);
						return true;
					}
					else if (last_json.get("error_type", "") == "checkpoint_challenge_required")
					{
						logger.Log(ig::settings::WARN, "Checkpoint challange required...");
						FILE_OUT.open("checkpoint.txt");
						if (FILE_OUT.is_open())
						{
							std::string* temp_str = new std::string("True");
							FILE_OUT.write(temp_str->c_str(), temp_str->length());
							FILE_OUT.close();
							delete temp_str;
						}
						std::vector<int>* blocks = new std::vector<int>();
						FILE_IN.open(ig_username + "check_blocked.txt");
						if(FILE_IN.is_open())
						{
							std::string* temp_str = new std::string();
							while (std::getline(FILE_IN, *temp_str))
							{
								blocks->push_back(std::stoi(*temp_str));
							}
							delete temp_str;
						}
						for (auto it = blocks->begin(); it != blocks->end(); ++it)
						{
							blocks->at(*it) = blocks->at(*it) + 1;
						}
						FILE_OUT.open(ig_username + "check_blocked.txt", std::ios::app);
						if (FILE_OUT.is_open())
						{
							for (auto it = blocks->begin(); it != blocks->end(); ++it)
							{
								FILE_OUT.write((const char*)blocks->at(*it), 1);
								FILE_OUT.write("\n", 1);
							}
						}
						delete blocks;
						logger.Log(ig::settings::INFO, "Checkpoint challenge required...");
						bool _solved = solve_challenge();
						if (_solved)
						{
							use_cookie = true;
							save_successful_login(use_cookie, cookie_fname);
							return true;
						}
						else
						{
							save_failed_login();
							return false;
						}
					}
					else
					{
						save_failed_password();
						return false;
					}
					delete data;
				}
				delete url;
			}
		}
		bool check_cookie(const std::string& _username, const std::string& _password, const std::string& _proxy)
		{
			if (_password == None)
			{
				usr_pass = Login.get_credentials(_username);
				set_user(std::get<0>(usr_pass), std::get<1>(usr_pass));
				cookie_fname.append(base_path).append(_username).append("_cookie.txt");
				try
				{
					load_cookie(cookie_fname);
					is_logged_in = true;
					proxy = _proxy;
					session = request.Session();
					set_proxy();
					if (!get_self_users_following())
					{
						is_logged_in = false;
						return login(_username, _password, _use_cookie = false);
					}
					logger.Log(ig::settings::INFO, "Logged-in successfully as " + _username + " using the cookie!");
					return true;
				}
				catch (const std::exception& e)
				{
					std::cout << e.what() << std::endl;
					std::cout << "The cookie is not found, but don't worry `instabot` will create it for you using your login details." << std::endl;
					return login(_username, _password, _use_cookie = false);
				}
			}
		}

	} //namespace API
} //namespace ig
