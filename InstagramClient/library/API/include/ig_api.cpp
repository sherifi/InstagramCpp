#include "ig_api.h"

namespace ig
{
	namespace API
	{
		template<typename T>
		API<T>::API()
		{
		}

		template<>
		API<const char*>::API()
		{
		}

		template<>
		API<std::string&&>::API()
		{
		}

		template <typename T>
		API<T>::API(
			log_Func_Callback,
			T _device,
			T _base_path,
			bool _is_logged_in,
			T _username,
			T _password
		);

		template <>
		API<std::string&&>::API(
			log_Func_Callback,
			std::string&& _device,
			std::string&& _base_path,
			bool _is_logged_in,
			std::string&& _username,
			std::string&& _password
		)
		{
			if (_device.empty())
			{
				device = ig::settings::DEFAULT_DEVICE<std::string&&>;
				device_settings = ig::settings::DEVICES<std::string&&>.at(ig::settings::DEFAULT_DEVICE<std::string&&>);
			}
			else
			{
				device = _device;
				device_settings = ig::settings::DEVICES<std::string&&>.at(_device);
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
			uuid = utility.generate_uuid_v4();
			delete conf_PATH;
		}

		template <typename T>
		T API<T>::generate_user_agent()
		{

		}

		template <>
		const char* API<const char*>::generate_user_agent()
		{
			user_agent = ig::settings::USER_AGENT_BASE<const char*>;
			utility.replace_word(user_agent, "instagram_version", device_settings["instagram_version"]);
			utility.replace_word(user_agent, "android_version", device_settings["android_version"]);
			utility.replace_word(user_agent, "android_release", device_settings["android_release"]);
			utility.replace_word(user_agent, "dpi", device_settings["dpi"]);
			utility.replace_word(user_agent, "resolution", device_settings["resolution"]);
			utility.replace_word(user_agent, "manufacturer", device_settings["manufacturer"]);
			utility.replace_word(user_agent, "device", device_settings["device"]);
			utility.replace_word(user_agent, "model", device_settings["model"]);
			utility.replace_word(user_agent, "cpu", device_settings["cpu"]);
			return user_agent;
		}

		template <>
		std::string&& API<std::string&&>::generate_user_agent()
		{
			user_agent = ig::settings::USER_AGENT_BASE<std::string&&>;
			user_agent.replace(user_agent.find("instagram_version"), sizeof("instagram_version") - 1, device_settings["instagram_version"]);
			user_agent.replace(user_agent.find("android_version"), sizeof("android_version") - 1, device_settings["android_version"]);
			user_agent.replace(user_agent.find("android_release"), sizeof("android_release") - 1, device_settings["android_release"]);
			user_agent.replace(user_agent.find("dpi"), sizeof("dpi") - 1, device_settings["dpi"]);
			user_agent.replace(user_agent.find("resolution"), sizeof("resolution") - 1, device_settings["resolution"]);
			user_agent.replace(user_agent.find("manufacturer"), sizeof("manufacturer") - 1, device_settings["manufacturer"]);
			user_agent.replace(user_agent.find("device"), sizeof("device") - 1, device_settings["device"]);
			user_agent.replace(user_agent.find("model"), sizeof("model") - 1, device_settings["model"]);
			user_agent.replace(user_agent.find("cpu"), sizeof("cpu") - 1, device_settings["cpu"]);
			return std::move(user_agent);
		}

		template <typename T>
		void API<T>::set_user(T _username, T _password)
		{

		}

		template <>
		void API<const char*>::set_user(const char* _username, const char* _password)
		{
			username = _username;
			password = _password;
		}

		template <>
		void API<std::string&&>::set_user(std::string&& _username, std::string&& _password)
		{
			username = _username;
			password = _password;
		}

		template <typename T>
		T API<T>::get_proxy()
		{

		}

		template <>
		const char* API<const char*>::get_proxy()
		{
			return proxy;
		}

		template <>
		std::string&& API<std::string&&>::get_proxy()
		{
			return std::move(proxy);
		}

		template <typename T>
		void API<T>::set_proxy(T _proxy)
		{

		}

		template <>
		void API<const char*>::set_proxy(const char* _proxy)
		{
			proxy = _proxy;
		}

		template <>
		void API<std::string&&>::set_proxy(std::string&& _proxy)
		{
			proxy = _proxy;
		}

		template <typename T>
		T API<T>::get_proxy(const std::vector<T>& _proxy_list)
		{

		}

		template <>
		const char* API<const char*>::get_proxy(const std::vector<const char*>& _proxy_list)
		{
			return _proxy_list[std::rand() % _proxy_list.size()];
		}

		template <>
		std::string&& API<std::string&&>::get_proxy(const std::vector<std::string&&>& _proxy_list)
		{
			return std::move(_proxy_list[std::rand() % _proxy_list.size()]);
		}

		template <typename T>
		bool API<T>::login(T _username, T _password, bool _force, T _proxy, bool _use_cookie, T _cookie_fname, bool _is_threaded)
		{

		}

		template <>
		bool API<const char*>::login(const char* _username, const char* _password, bool _force, const char* _proxy, bool _use_cookie, const char* _cookie_fname, bool _is_threaded)
		{
			proxy = _proxy;
			logger.Log(ig::settings::INFO, "Setup the proxy.");
			if (_use_cookie)
			{
				return check_cookie(_username, _password, _proxy);
			}
			if ((!_use_cookie) && ((!is_logged_in) || (_force)))
			{
				if (_password == NULL_str)
				{
					usr_pass = Login.get_credentials(_username);
					set_user(std::get<0>(usr_pass), std::get<1>(usr_pass));
				}
				device_id = utility.generate_device_id(utility.get_seed(_username, _password));
				proxy = setup_proxy();
				logger.Log(ig::settings::INFO, strcat((char*)"your proxy ", proxy));
				//proxy = "http://rocket2_rdsdr:31AxpylE@163.172.161.94:37564"
				//proxy = NULL_str
				ig_username = _username;
				//FILE
				_FILE = fopen(strcat((char*)ig_username, "check_blocked.txt"), "w+");
				fwrite("0", sizeof(char), 1, _FILE);
				//READ
				fpos_t start = ftell(_FILE);
				fpos_t end = fseek(_FILE, 0, SEEK_END);
				auto _FILEsize = end - start;
				//char* _BUFF;
				//fread(_BUFF, sizeof(char), sizeof(char) * _FILEsize, _FILE);
				fclose(_FILE);
				cookie_fname = "";
				strcat((char*)cookie_fname, base_path);
				strcat((char*)cookie_fname, _cookie_fname);
				strcat((char*)cookie_fname, _username);
				strcat((char*)cookie_fname, "_cookie.txt");
				session = requests.Session();
				setup_proxy();
				const char* URL = "si/fetch_headers/?challenge_type=signup&guid=";
				strcat((char*)URL, utility.generate_uuid_v4());
				if (send_request(URL, _login = true))
				{

					const char* data = "";
					strcat(strcat(strcat((char*)data, "phone_id:"), utility.generate_uuid_v4()), ",");
					strcat(strcat(strcat((char*)data, "_csrftoken:"), token), ",");
					strcat(strcat(strcat((char*)data, "username:"), username), ",");
					strcat(strcat(strcat((char*)data, "guid:"), uuid), ",");
					strcat(strcat(strcat((char*)data, "device_id:"), device_id), ",");
					strcat(strcat(strcat((char*)data, "password:"), password), ",");
					strcat(strcat(strcat((char*)data, "login_attempt_count:"), "0"), ",");
					URL = ig::settings::ENDPOINTS::login;
					if (send_request(URL, *data, true))
					{
						use_cookie = true;
						save_successful_login(use_cookie, cookie_fname);
						return true;
					}
					else if (last_json.get("error_type", "") == "checkpoint_challenge_required")
					{
						logger.Log(ig::settings::WARN, "Checkpoint challange required...");
						_FILE = fopen("checkpoint.txt", "r");
						if (_FILE)
						{
							const char* _temp_str = "True";
							fwrite(_temp_str, sizeof(char), strlen(_temp_str), _FILE);
							fclose(_FILE);
						}
						unsigned int _BLOCK_size = 64;
						unsigned int _BLOCK_int_size = 0;
						int* _blocks = (int*)malloc(sizeof(int) * _BLOCK_size);
						_FILE = fopen(strcat((char*)ig_username, "check_blocked.txt"), "w+");
						if (_FILE)
						{
							char* _BUFF = (char*)malloc(sizeof(char) * 1024);
							fseek(_FILE, 0, SEEK_END);
							size_t _FILEsize = ftell(_FILE);
							fseek(_FILE, 0, SEEK_SET);
							fread(_BUFF, sizeof(char), _FILEsize, _FILE);
							char* _BUFF_temp = (char*)malloc(sizeof(char) * 64);
							while (*_BUFF != '\0')
							{
								while (*_BUFF != '\n')
								{
									*_BUFF_temp++ = *_BUFF++;
								}
								*_BUFF_temp++ = '\0';
								int count = atoi(_BUFF_temp);
								count++;
								_blocks[_BLOCK_int_size] = count;
								_BLOCK_int_size++;
								if (_BLOCK_int_size == _BLOCK_size)
								{
									_blocks = (int*)realloc(_blocks, _BLOCK_size + 5);
								}
								_BUFF++;
							}
							free(_BUFF_temp);
							free(_BUFF);
						}
						int _count = 0;
						while (_count <= _BLOCK_int_size + 1)
						{
							fwrite((char*)_blocks[_count], sizeof(char), 1, _FILE);
							fwrite("\n", sizeof(char), 1, _FILE);
						}
						free(_blocks);
						fclose(_FILE);

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
				}
			}
		}

		template <>
		bool API<std::string&&>::login(std::string&& _username, std::string&& _password, bool _force, std::string&& _proxy, bool _use_cookie, std::string&& _cookie_fname, bool _is_threaded)
		{
			proxy = _proxy;
			logger.Log(ig::settings::INFO, "Setup the proxy.");
			if (_use_cookie)
			{
				return check_cookie(std::move(_username), std::move(_password), std::move(_proxy));
			}
			if ((!_use_cookie) && ((!is_logged_in) || (_force)))
			{
				if (_password == NULL_str)
				{
					usr_pass = Login.get_credentials(std::move(_username));
					set_user(std::move(std::get<0>(usr_pass)), std::move(std::get<1>(usr_pass)));
				}
				device_id = utility.generate_device_id(utility.get_seed(std::move(_username), std::move(_password)));
				proxy = setup_proxy();
				logger.Log(ig::settings::INFO, "your proxy " + proxy);
				//proxy = "http://rocket2_rdsdr:31AxpylE@163.172.161.94:37564"
				//proxy = NULL_str
				ig_username = _username;
				FILE_OUT.open(ig_username + "check_blocked.txt");
				if (FILE_OUT.is_open())
				{
					FILE_OUT.write("0", 1);
				}
				FILE_OUT.close();
				cookie_fname.clear();
				cookie_fname.append(base_path);
				cookie_fname.append(_cookie_fname).append(_username).append("_cookie.txt");
				session = requests.Session();
				setup_proxy();
				std::string* url = new std::string();
				*url = "si/fetch_headers/?challenge_type=signup&guid=";
				url->append(utility.generate_uuid_v4());
				if (send_request(std::move(*url), _login = true))
				{
					std::string* data = new std::string();
					data->append("phone_id").append(":").append(utility.generate_uuid_v4()).append(",");
					data->append("_csrftoken").append(":").append(token).append(",");
					data->append("username").append(":").append(username).append(",");
					data->append("guid").append(":").append(uuid).append(",");
					data->append("device_id").append(":").append(device_id).append(",");
					data->append("password").append(":").append(password).append(",");
					data->append("login_attempt_count").append(":").append("0").append(",");
					URL = NULL_str;
					URL = ig::settings::ENDPOINTS::login;
					if (send_request(std::move(URL), *data, true))
					{
						use_cookie = true;
						save_successful_login(use_cookie, std::move(cookie_fname));
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
						if (FILE_IN.is_open())
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
							save_successful_login(use_cookie, std::move(cookie_fname));
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

		template <typename T>
		bool API<T>::check_cookie(T _username, T _password, T _proxy)
		{
		}

		template <>
		bool API<const char*>::check_cookie(const char* _username, const char* _password, const char* _proxy)
		{
			if (_password == NULL_str)
			{
				usr_pass = Login.get_credentials(_username);
				set_user(std::get<0>(usr_pass), std::get<1>(usr_pass));
				cookie_fname = "";
				strcat(strcat(strcat((char*)cookie_fname, base_path), _username), "_cookie.txt");
				try
				{
					load_cookie(cookie_fname);
					is_logged_in = true;
					proxy = _proxy;
					session = request.Session();
					setup_proxy();
					if (!get_self_users_following())
					{
						is_logged_in = false;
						return login(_username, _password, use_cookie = false);
					}
					logger.Log(ig::settings::INFO, strcat(strcat((char*)"Logged-in successfully as ", _username), " using the cookie!"));
					return true;
				}
				catch (const std::exception& e)
				{
					std::cout << e.what() << std::endl;
					std::cout << "The cookie is not found, but don't worry `instabot` will create it for you using your login details." << std::endl;
					return login(_username, _password, use_cookie = false);
				}
			}
		}

		template <>
		bool API<std::string&&>::check_cookie(std::string&& _username, std::string&& _password, std::string&& _proxy)
		{
			if (_password == NULL_str)
			{
				usr_pass = Login.get_credentials(std::move(_username));
				set_user(std::move(std::get<0>(usr_pass)), std::move(std::get<1>(usr_pass)));
				cookie_fname.append(base_path).append(_username).append("_cookie.txt");
				try
				{
					load_cookie(std::move(cookie_fname));
					is_logged_in = true;
					proxy = _proxy;
					session = request.Session();
					setup_proxy();
					if (!get_self_users_following())
					{
						is_logged_in = false;
						return login(std::move(_username), std::move(_password), use_cookie = false);
					}
					logger.Log(ig::settings::INFO, "Logged-in successfully as " + _username + " using the cookie!");
					return true;
				}
				catch (const std::exception& e)
				{
					std::cout << e.what() << std::endl;
					std::cout << "The cookie is not found, but don't worry `instabot` will create it for you using your login details." << std::endl;
					return login(std::move(_username), std::move(_password), use_cookie = false);
				}
			}
		}

		template <typename T>
		bool API<T>::load_cookie(T _cookie_fname)
		{
		}

		template <>
		bool API<const char*>::load_cookie(const char* _cookie_fname)
		{
			try
			{
				_FILE = fopen(_cookie_fname, "r");
				if (_FILE)
				{
					session = requests.Session();
					session.cookies = requests.utils.cookiejar_from_dict(json.load(FILE_IN));
				}
				fclose(_FILE);
				cookie_username = cookie_dict["ds_user"];
				assert(cookie_username == username);
			}
			catch (const FileNotFoundError& fnfe)
			{
				throw(strcat(strcat((char*)"Cookie file ", _cookie_fname), " not found."));
			}
			catch (const TypeError& te)
			{
				std::filesystem::remove(_cookie_fname);
				throw(strcat(strcat((char*)"An error occured opening the cookie ", _cookie_fname), " it will be removed an recreated."));
			}
			catch (const EOFError& eofe)
			{
				std::filesystem::remove(_cookie_fname);
				throw(strcat(strcat((char*)"An error occured opening the cookie ", _cookie_fname), " it will be removed an recreated."));
			}
			catch (const AssertionError& ae)
			{
				throw(strcat(strcat(strcat((char*)"The loaded cookie was for ", cookie_username), " instead of "), username));
			}
			catch (const std::exception&)
			{

			}
		}

		template <>
		bool API<std::string&&>::load_cookie(std::string&& _cookie_fname)
		{
			try
			{
				FILE_IN.open(_cookie_fname);
				if (FILE_IN.is_open())
				{
					session = requests.Session();
					session.cookies = requests.utils.cookiejar_from_dict(json.load(FILE_IN));
				}
				cookie_username = cookie_dict["ds_user"];
				assert(cookie_username == username);
			}
			catch (const FileNotFoundError& fnfe)
			{
				throw("Cookie file " + _cookie_fname + " not found.");
			}
			catch (const TypeError& te)
			{
				std::filesystem::remove(_cookie_fname);
				throw("An error occured opening the cookie " + _cookie_fname + " it will be removed an recreated.");
			}
			catch (const EOFError& eofe)
			{
				std::filesystem::remove(_cookie_fname);
				throw("An error occured opening the cookie " + _cookie_fname + " it will be removed an recreated.");
			}
			catch (const AssertionError& ae)
			{
				throw("The loaded cookie was for " + cookie_username + " instead of " + username);
			}
			catch (const std::exception&)
			{

			}
		}

		template <typename T>
		bool API<T>::save_cookie(T _fname)
		{
		}

		template <>
		bool API<const char*>::save_cookie(const char* _fname)
		{
			_FILE = fopen(_fname, "r");
			if (_FILE)
			{
				json.dump(requests.utils.dict_from_cookiejar(session.cookies), FILE_OUT);
			}
			fclose(_FILE);
		}

		template <>
		bool API<std::string&&>::save_cookie(std::string&& _fname)
		{
			FILE_OUT.open(_fname);
			if (FILE_OUT.is_open())
			{
				json.dump(requests.utils.dict_from_cookiejar(session.cookies), FILE_OUT);
			}
		}

		template <typename T>
		bool API<T>::save_successful_login(bool _use_cookie, T _cookie_fname)
		{

		}

		template <>
		bool API<const char*>::save_successful_login(bool _use_cookie, const char* _cookie_fname)
		{
			is_logged_in = true;
			logger.Log(ig::settings::INFO, strcat(strcat((char*)"Logged-in successfully as ", username), " !"));
			if (_use_cookie)
			{
				save_cookie(_cookie_fname);
				logger.Log(ig::settings::INFO, "Saved cookie!");
			}
			return true;
		}

		template <>
		bool API<std::string&&>::save_successful_login(bool _use_cookie, std::string&& _cookie_fname)
		{
			is_logged_in = true;
			logger.Log(ig::settings::INFO, "Logged-in successfully as " + username + " !");
			if (_use_cookie)
			{
				save_cookie(std::move(_cookie_fname));
				logger.Log(ig::settings::INFO, "Saved cookie!");
			}
			return true;
		}

		template <typename T>
		bool API<T>::save_failed_password()
		{

		}

		template <>
		bool API<const char*>::save_failed_password()
		{
			std::cout << "Username or password is incorrect." << std::endl;
			logger.Log(ig::settings::INFO, "Username or password is incorrect.");
			_FILE = fopen("check_password.txt", "r");
			if (_FILE)
			{
				const char* _str_temp = "True";
				fwrite(_str_temp, sizeof(char), strlen(_str_temp), _FILE);
				fclose(_FILE);
				Login.delete_credentials();
			}
		}

		template <>
		bool API<std::string&&>::save_failed_password()
		{
			std::cout << "Username or password is incorrect." << std::endl;
			logger.Log(ig::settings::INFO, "Username or password is incorrect.");
			FILE_OUT.open("check_password.txt");
			if (FILE_OUT.is_open())
			{
				std::string* str_temp = new std::string("True");
				FILE_OUT.write(str_temp->c_str(), str_temp->length());
				FILE_OUT.close();
				delete str_temp;
				Login.delete_credentials();
			}
		}

		template <typename T>
		bool API<T>::save_failed_login()
		{

		}

		template <>
		bool API<const char*>::save_failed_login()
		{
			std::cout << "Username or password is incorrect." << std::endl;
			logger.Log(ig::settings::INFO, "Username or password is incorrect.");
			Login.delete_credentials();
		}

		template <>
		bool API<std::string&&>::save_failed_login()
		{
			std::cout << "Username or password is incorrect." << std::endl;
			logger.Log(ig::settings::INFO, "Username or password is incorrect.");
			Login.delete_credentials();
		}

		template <typename T>
		bool API<T>::solve_challenge()
		{

		}

		template <>
		bool API<const char*>::solve_challenge()
		{
			challenge_url = last_json['challenge']['api_path'][1:];
			try
			{
				send_request(challenge_url, NULL_str, login = true, with_signature = false);
			}
			catch (const std::exception& e)
			{
				logger.Log(ig::settings::INFO, e.what());
				return false;
			}
			const char** _choices = (const char**)malloc(sizeof(char) * 64 * 64);
			_choices = get_challenge_choices();
			auto x = *_choices;
			while (*_choices)
			{
				std::cout << *_choices++ << std::endl;
			}
			free(_choices);
			const char* code = "1";
			const char* data = json.dumps({ 'choice': code });
			try
			{
				send_request(challenge_url, data, login = true);
			}
			catch (const std::exception& e)
			{
				logger.Log(ig::settings::ERROR, e.what());
				return false;
			}
			std::cout << "A code has been sent to the method selected, please check." << std::endl;
			std::cout << "Insert code: " << std::endl;
			std::cin >> (char*)code;
			data = json.dumps({ 'security_code': code });
			try
			{
				send_request(challenge_url, data, login = true);
			}
			catch (const std::exception& e)
			{
				logger.Log(ig::settings::ERROR, e.what());
				return false;
			}
			bool worked = (("logged_in_user", last_json) && (last_json.get("action", "") == "close") && (last_json.get("status", "") == "ok"));
			if (worked)
			{
				return true;
			}
			logger.Log(ig::settings::ERROR, "Not possible to log in. Reset and try again");
			return false;
		}

		template <>
		bool API<std::string&&>::solve_challenge()
		{
			challenge_url = last_json['challenge']['api_path'][1:];
			try
			{
				send_request(std::move(challenge_url), NULL_str, login = true, with_signature = false);
			}
			catch (const std::exception& e)
			{
				logger.Log(ig::settings::INFO, e.what());
				return false;
			}
			std::vector<std::string>* choices = new std::vector<std::string>(get_challenge_choices());
			for (auto choice : *choices)
			{
				std::cout << choice << std::endl;
			}
			delete choices;
			std::string* code = new std::string("1");
			std::string* data = new std::string(json.dumps({ 'choice': code }));
			try
			{
				send_request(std::move(challenge_url), *data, login = true);
			}
			catch (const std::exception& e)
			{
				logger.Log(ig::settings::ERROR, e.what());
				return false;
			}
			std::cout << "A code has been sent to the method selected, please check." << std::endl;
			std::cout << "Insert code: " << std::endl;
			std::cin >> *code;
			*data = json.dumps({ 'security_code': code });
			try
			{
				send_request(std::move(challenge_url), data, login = true);
			}
			catch (const std::exception& e)
			{
				logger.Log(ig::settings::ERROR, e.what());
				return false;
			}
			delete data;
			delete code;
			bool worked = (("logged_in_user", last_json) && (last_json.get("action", "") == "close") && (last_json.get("status", "") == "ok"));
			if (worked)
			{
				return true;
			}
			logger.Log(ig::settings::ERROR, "Not possible to log in. Reset and try again");
			return false;
		}

		template <typename T>
		T* API<T>::get_challenge_choices()
		{

		}

		template <>
		const char** API<const char*>::get_challenge_choices()
		{
			const char** _choices = (const char**)malloc(sizeof(char) * 64);
			unsigned int _index = 0;
			if (last_json.get("step_name", "") == "select_verify_method")
			{
				_choices[_index++] = "Checkpoint challenge received";
				if (last_json["step_data"] == "phone_number")
				{
					_FILE = fopen("challenge_out.txt", "w");
					if (_FILE)
					{
						fwrite("0", sizeof(char), 1, _FILE);
					}
					fclose(_FILE);
					_choices[_index++] = "0 - Phone";
				}
				if (last_json["step_data"] == "email")
				{
					_FILE = fopen("challenge_out.txt", "w");
					if (_FILE)
					{
						fwrite("1", sizeof(char), 1, _FILE);
					}
					fclose(_FILE);
					_choices[_index++] = "1 - Email";
				}
			}
			else if (last_json.get("step_name", "") == "delta_login_review")
			{
				_choices[_index++] = "Login attempt challenge received";
				_choices[_index++] = "0 - It was me";
				_choices[_index++] = "0 - It wasn\'t me";
			}
			else if (_choices[_index] == '\0')
			{
				_choices[_index++] = strcat(last_json.get("step_name", "Unknown"), " challenge received");
				_choices[_index++] = "0 - Default";
			}
			return _choices;
		}

		/*
		template <>
		std::string&& API<std::string&&>::get_challenge_choices()
		{
			std::vector<std::string>* choices = new std::vector<std::string>(get_challenge_choices());
			if (last_json.get("step_name", "") == "select_verify_method")
			{
				choices->push_back("Checkpoint challenge received");
				if (last_json["step_data"] == "phone_number")
				{
					FILE_OUT.open("challenge_out.txt");
					if (FILE_OUT.is_open())
					{
						FILE_OUT.write("0", 1);
					}
					FILE_OUT.close();
					choices->push_back("0 - Phone");
				}
				if (last_json["step_data"] == "email")
				{
					FILE_OUT.open("challenge_out.txt");
					if (FILE_OUT.is_open())
					{
						FILE_OUT.write("1", 1);
					}
					FILE_OUT.close();
					choices->push_back("1 - Email");
				}
			}
			if (last_json.get("step_name", "") == "delta_login_review")
			{
				choices->push_back("Login attempt challenge received");
				choices->push_back("0 - It was me");
				choices->push_back("0 - It wasn\'t me");
			}
			if (choices->empty())
			{
				choices->push_back(last_json.get("step_name", "Unknown") + " challenge received");
				choices->push_back("0 - Default");
			}
			delete choices;
		}
		*/

		template <typename T>
		bool API<T>::logout()
		{

		}

		template <>
		bool API<const char*>::logout()
		{
			if (!is_logged_in)
			{
				return true;
			}
			data = json.dumps({});
			URL = NULL_str;
			URL = ig::settings::ENDPOINTS::logout;
			is_logged_in = !send_request(URL, data, with_signature = false);
			return (!is_logged_in);
		}

		template <>
		bool API<std::string&&>::logout()
		{
			if (!is_logged_in)
			{
				return true;
			}
			data = json.dumps({});
			URL = NULL_str;
			URL = ig::settings::ENDPOINTS::logout;
			is_logged_in = !send_request(std::move(URL), std::move(data), with_signature = false);
			return (!is_logged_in);
		}

		template <typename T>
		T API<T>::setup_proxy()
		{

		}

		template <>
		const char* API<const char*>::setup_proxy()
		{
			if (proxy != NULL_str)
			{
				auto parsed = urllib.parse.urlparse(proxy);
				const char* schema;
				if (!parsed.shema)
				{
					schema = "http://";
				}
				else
				{
					auto schema = "";
				}
				session.proxies["http"] = strcat((char*)schema, proxy);
				session.proxies["https"] = strcat((char*)schema, proxy);
			}
		}

		template <>
		std::string&& API<std::string&&>::setup_proxy()
		{
			if (proxy != NULL_str)
			{
				auto parsed = urllib.parse.urlparse(proxy);
				std::string schema;
				if (!parsed.shema)
				{
					schema = "http://";
				}
				else
				{
					auto schema = "";
				}
				session.proxies["http"] = schema + proxy;
				session.proxies["https"] = schema + proxy;
			}
		}

		template <typename T>
		bool API<T>::send_request(T _endpoint, T _post, bool _login, bool _with_signature, T _headers)
		{

		}

		template <>
		bool API<const char*>::send_request(const char* _endpoint, const char* _post, bool _login, bool _with_signature, const char* _headers)
		{
			if (!is_logged_in && !_login)
			{
				const char* msg = "Not logged in!";
				logger.Log(ig::settings::FATAL, msg);
				throw(msg);
			}
			session.headers.update(ig::settings::REQUEST_HEADERS<char*>);
			session.headers.update({ "User-Agent", user_agent });
			if (_headers != NULL_str)
			{
				session.headers.update(_headers);
			}
			try
			{
				total_requests += 1;
				if (_post != NULL_str)
				{
					if (_with_signature)
					{
						//Only `send_direct_item` doesn't need a signature
						post = utility.generate_signature(_post);
					}
					response = session.post(strcat(ig::settings::API_URL<char*>, _endpoint), data = _post);
				}
				else
				{
					response = session.get(strcat(ig::settings::API_URL<char*>,_endpoint));
				}
			}
			catch (const std::exception& e)
			{
				logger.Log(ig::settings::WARN, e.what());
				return false;
			}
			if (response.status_code == 200)
			{
				last_response = response;
				try
				{
					last_json = json.loads(response.text);
					return true;
				}
				catch (const JSONDecodeError& jde)
				{
					return false;
				}
			}
			else
			{
				if (response.status_code != 404 && reponse.status_code != "404")
				{
					if (response.status_code == 403)
					{
						logger.Log(ig::settings::INFO, "Your cookie is blocked: Going to relogin!");
						return false;
					}
					logger.Log(ig::settings::ERROR, strcat(strcat((char*)"Request returns ", response.status_code), " error!"));
				}
				try
				{
					response_data = json.loads(response.text);
					if (response_data.get("message") == "feedback_required")
					{
						if (response_data.get("feedback_title") == "Action Blocked")
						{
							logger.Log(ig::settings::ERROR, "This action was blocked. Going to sleep 60 seconds and relogin!");
							_sleep(60000);
							logout();
							return login(username, password, proxy);
						}
						logger.Log(ig::settings::ERROR, strcat((char*)"ATTENTION!: `feedback_required`", response_data.get("feedback_message")));
						return "feedback_required";
					}
				}
				catch (const std::exception&)
				{
					_sleep(20000);
					logger.Log(ig::settings::ERROR, "Error checking for `feedback_required`, response text is not JSON");
					return false;
				}
				if (response.status_code == 429)
				{
					int sleep_minutes = 5;
					const char* c = (const char*)sleep_minutes;
					logger.Log(ig::settings::WARN, strcat(strcat((char*)"That means 'too many requests'. I'll go to sleep for ", c), " minutes."));
					_sleep(sleep_minutes * 10000);
				}
				else if (response.status_code == 400)
				{
					response_data = json.loads(response.text);
					//PERFORM Interactive Two-Factor authentication
					if (response_data.get("two_factor_required"))
					{
						logger.Log(ig::settings::INFO, "Two-factor authentication required");
						std::cout << "Enter 2FA verification code: " << std::endl;
						int two_factor_code;
						std::cin >> two_factor_code;
						int two_factor_id = response_data["two_factor_info"]["two_factor_identifier"];
						data = {
								"username" : username,
								"verification_code" : two_factor_code,
								"two_factor_identifier" : two_factor_id,
								"password" : self.password,
								"device_id" : self.device_id,
								"ig_sig_key_version" : 4
						};
						login = session.post(strcat(ig::settings::API_URL<char*>,"accounts/two_factor_login/"), data, allow_redirects = true);
						if (login.status_code == 200)
						{
							resp_json = json.loads(login.text);
							if (resp_json["status"] != "ok")
							{
								if (resp_json["message"])
								{
									logger.Log(ig::settings::ERROR, strcat((char*)"Login error: ", resp_json["message"]));
								}
								else
								{
									logger.Log(ig::settings::ERROR, strcat(strcat(strcat((char*)"Login error: \"", resp_json["status"]), "\" status and message ."), login.text));
								}
								return false;
							}
							return true;
						}
						else
						{
							logger.Log(ig::settings::ERROR, strcat(strcat(strcat(strcat((char*)"Two-factor authentication request returns ", login.status_code), " error with message "), login.text), " !"));
							return false;
						}
					}
					//End of Interactive Two-Factor Authentication
					else
					{
						const char* TEMP_str = strcat((char*)"Instagram's error message: ", response_data.get("message"));
						logger.Log(ig::settings::INFO, TEMP_str);
						if (response_data["error_type"])
						{
							TEMP_str = strcat(strcat((char*)"", "Error type: "), response_data["error_type"]);
						}
						logger.Log(ig::settings::INFO, TEMP_str);
					}
				}
				//For debuging
				try
				{
					last_response = response;
					last_json = json.loads(response.text);
				}
				catch (const std::exception&)
				{
				}
				return false;
			}
		}

		template <>
		bool API<std::string&&>::send_request(std::string&& _endpoint, std::string&& _post, bool _login, bool _with_signature, std::string&& _headers)
		{
			if (!is_logged_in && !_login)
			{
				std::string* msg = new std::string("Not logged in!");
				logger.Log(ig::settings::FATAL, msg->c_str());
				throw(*msg);
			}
			session.headers.update(ig::settings::REQUEST_HEADERS<std::string&&>);
			session.headers.update({ "User-Agent", user_agent });
			if (_headers != NULL_str)
			{
				session.headers.update(_headers);
			}
			try
			{
				total_requests += 1;
				if (_post != NULL_str)
				{
					if (_with_signature)
					{
						//Only `send_direct_item` doesn't need a signature
						post = utility.generate_signature(std::move(_post));
					}
					response = session.post(ig::settings::API_URL< std::string &&> + _endpoint, data = _post);
				}
				else
				{
					response = session.get(ig::settings::API_URL< std::string &&> + _endpoint);
				}
			}
			catch (const std::exception& e)
			{
				logger.Log(ig::settings::WARN, e.what());
				return false;
			}
			if (response.status_code == 200)
			{
				last_response = response;
				try
				{
					last_json = json.loads(response.text);
					return true;
				}
				catch (const JSONDecodeError& jde)
				{
					return false;
				}
			}
			else
			{
				if (response.status_code != 404 && reponse.status_code != "404")
				{
					if (response.status_code == 403)
					{
						logger.Log(ig::settings::INFO, "Your cookie is blocked: Going to relogin!");
						return false;
					}
					logger.Log(ig::settings::ERROR, "Request returns " + response.status_code + " error!");
				}
				try
				{
					response_data = json.loads(response.text);
					if (response_data.get("message") == "feedback_required")
					{
						if (response_data.get("feedback_title") == "Action Blocked")
						{
							logger.Log(ig::settings::ERROR, "This action was blocked. Going to sleep 60 seconds and relogin!");
							_sleep(60000);
							logout();
							return login(username, password, proxy);
						}
						logger.Log(ig::settings::ERROR, "ATTENTION!: `feedback_required`" + response_data.get("feedback_message"));
						return "feedback_required";
					}
				}
				catch (const std::exception&)
				{
					_sleep(20000);
					logger.Log(ig::settings::ERROR, "Error checking for `feedback_required`, response text is not JSON");
					return false;
				}
				if (response.status_code == 429)
				{
					int sleep_minutes = 5;
					logger.Log(ig::settings::WARN, "That means 'too many requests'. I'll go to sleep for " + std::to_string(sleep_minutes) + " minutes.");
					_sleep(sleep_minutes * 10000);
				}
				else if (response.status_code == 400)
				{
					response_data = json.loads(response.text);
					//PERFORM Interactive Two-Factor authentication
					if (response_data.get("two_factor_required"))
					{
						logger.Log(ig::settings::INFO, "Two-factor authentication required");
						std::cout << "Enter 2FA verification code: " << std::endl;
						int two_factor_code;
						std::cin >> two_factor_code;
						int two_factor_id = response_data["two_factor_info"]["two_factor_identifier"];
						data = {
								"username":username,
								"verification_code" : two_factor_code,
								"two_factor_identifier" : two_factor_id,
								"password" : self.password,
								"device_id" : self.device_id,
								"ig_sig_key_version" : 4
						};
						login = session.post(ig::settings::API_URL<std::string &&> + "accounts/two_factor_login/", data, allow_redirects = true);
						if (login.status_code == 200)
						{
							resp_json = json.loads(login.text);
							if (resp_json["status"] != "ok")
							{
								if (resp_json["message"])
								{
									logger.Log(ig::settings::ERROR, "Login error: " + resp_json["message"]);
								}
								else
								{
									logger.Log(ig::settings::ERROR, "Login error: \"" + resp_json["status"] + "\" status and message ." + login.text);
								}
								return false;
							}
							return true;
						}
						else
						{
							logger.Log(ig::settings::ERROR, "Two-factor authentication request returns " + login.status_code + " error with message " + login.text + " !");
							return false;
						}
					}
					//End of Interactive Two-Factor Authentication
					else
					{
						std::string* TEMP_str = new std::string("Instagram's error message: " + response_data.get("message"));
						logger.Log(ig::settings::INFO, TEMP_str->c_str());
						if (response_data["error_type"])
						{
							TEMP_str = new std::string("Error type: " + response_data["error_type"]);
						}
						logger.Log(ig::settings::INFO, TEMP_str->c_str());
						delete TEMP_str;
					}
				}
				//For debuging
				try
				{
					last_response = response;
					last_json = json.loads(response.text);
				}
				catch (const std::exception&)
				{
				}
				return false;
			}
		}

		template <typename T>
		std::map<T, T> API<T>::json_data(const std::map<T, T>& _data)
		{

		}

		template <>
		std::map<const char*, const char*> API<const char*>::json_data(const std::map<const char*, const char*>& _data)
		{
			TEMP_MAP_PTR->clear();
			TEMP_MAP_PTR = new std::map<const char*, const char*>(_data);
			if (_data.empty())
			{
				*TEMP_MAP_PTR = NULL_map;
			}
			*TEMP_MAP_PTR = utility.default_data();
			return json.dummps(*TEMP_MAP_PTR);
		}

		template <>
		std::map<std::string&&, std::string&&> API<std::string&&>::json_data(const std::map<std::string&&, std::string&&>& _data)
		{
			TEMP_MAP_PTR->clear();
			TEMP_MAP_PTR = new std::map<std::string&&, std::string&&>(_data);
			if (_data.empty())
			{
				*TEMP_MAP_PTR = NULL_map;
			}
			*TEMP_MAP_PTR = utility.default_data();
			return json.dummps(*TEMP_MAP_PTR);
		}

		template <typename T>
		bool API<T>::sync_features()
		{

		}

		template <>
		bool API<const char*>::sync_features()
		{
			DATA = NULL_map;
			DATA = json_data({ {"id", user_id}, {"experiments", ig::settings::EXPERIMENTS<const char*>[0]} });
			URL = NULL_str;
			URL = ig::settings::ENDPOINTS::sync_features;
			return send_request(URL, DATA);
		}

		template <>
		bool API<std::string&&>::sync_features()
		{
			DATA = NULL_map;
			DATA = json_data({ {"id", user_id}, {"experiments", ig::settings::EXPERIMENTS[0]} });
			URL = NULL_str;
			URL = ig::settings::ENDPOINTS::sync_features;
			return send_request(std::move(URL), DATA);
		}

		template <typename T>
		bool API<T>::auto_complete_user_list()
		{

		}

		template <>
		bool API<const char*>::auto_complete_user_list()
		{
			URL = NULL_str;
			URL = ig::settings::ENDPOINTS::auto_complete_user_list;
			return send_request(URL);
		}

		template <>
		bool API<std::string&&>::auto_complete_user_list()
		{
			URL = NULL_str;
			URL = ig::settings::ENDPOINTS::auto_complete_user_list;
			return send_request(std::move(URL));
		}

		template <typename T>
		bool API<T>::get_timeline_feed()
		{

		}

		template <>
		bool API<const char*>::get_timeline_feed()
		{
			//RETURN 8 medias from timeline feed of logged user.
			DATA = NULL_map;
			DATA = json_data({ { "is_prefetch", "0"}, {"is_pull_to_refresh", "0"} });
			URL = NULL_str;
			URL = ig::settings::ENDPOINTS::get_timeline_feed;
			TEMP_MAP_PTR->clear();
			return send_request(URL, DATA, false, false);
		}

		template <>
		bool API<std::string&&>::get_timeline_feed()
		{
			//RETURN 8 medias from timeline feed of logged user.
			DATA = NULL_map;
			DATA = json_data({ { "is_prefetch", "0"}, {"is_pull_to_refresh", "0"} });
			URL = NULL_str;
			URL = ig::settings::ENDPOINTS::get_timeline_feed;
			TEMP_MAP_PTR->clear();
			return send_request(std::move(URL), DATA, false, false);
		}

		template <typename T>
		bool API<T>::get_megaphone_log()
		{

		}

		template <>
		bool API<const char*>::get_megaphone_log()
		{
			URL = NULL_str;
			URL = ig::settings::ENDPOINTS::get_megaphone_log;
			return send_request(URL);
		}

		template <>
		bool API<std::string&&>::get_megaphone_log()
		{
			URL = NULL_str;
			URL = ig::settings::ENDPOINTS::get_megaphone_log;
			return send_request(std::move(URL));
		}

		template <typename T>
		bool API<T>::expose()
		{

		}

		template <>
		bool API<const char*>::expose()
		{
			DATA = NULL_map;
			DATA = json_data({ {"id", user_id}, {"experiments", ig::settings::EXPERIMENTS<const char*>[0]} });
			URL = NULL_str;
			URL = ig::settings::ENDPOINTS::expose;
			return send_request(URL);
		}

		template <>
		bool API<std::string&&>::expose()
		{
			DATA = NULL_map;
			DATA = json_data({ {"id", user_id}, {"experiments", ig::settings::EXPERIMENTS<const char*>[0]} });
			URL = NULL_str;
			URL = ig::settings::ENDPOINTS::expose;
			return send_request(std::move(URL));
		}

		/*
		Upload photo to Instagram
			@param photo         Path to photo file(String)
			@param caption       Media description(String)
			@param upload_id     Unique upload_id(String).When NULL_str, then generate automatically
			@param from_video    A flag that signals whether the photo is loaded from the video or by itsel(Boolean, DEPRECATED: not used)
			@param force_resize  Force photo resize(Boolean)
			@param options       Object with difference options, e.g.configure_timeout, rename(Dict)
			Designed to reduce the number of function arguments!
			This is the simplest request object.
			@return Boolean
		*/
		template <typename T>
		void API<T>::upload_photo(T _photo, T _caption, T _upload_id, bool _from_video, bool _force_resize, const std::map<T, T>& _options)
		{

		}

		template <>
		void API<const char*>::upload_photo(const char* _photo, const char* _caption, const char* _upload_id, bool _from_video, bool _force_resize, const std::map<const char*, const char*>& _options)
		{
			PHOTO_ptr = new ig::API::PHOTO::photo<const char*>();
			PHOTO_ptr->upload_photo(_photo, _caption, _upload_id, _from_video, _force_resize, _options);
			PHOTO_ptr = nullptr;
		}

		template <>
		void API<std::string&&>::upload_photo(std::string&& _photo, std::string&& _caption, std::string&& _upload_id, bool _from_video, bool _force_resize, const std::map<std::string&&, std::string&&>& _options)
		{
			PHOTO_ptr = new ig::API::PHOTO::photo<std::string&&>();
			PHOTO_ptr->upload_photo(std::move(_photo), std::move(_caption), std::move(_upload_id), std::move(_from_video), std::move(_force_resize), std::move(_options));
			PHOTO_ptr = nullptr;
		}

		template <typename T>
		void API<T>::download_photo(T _media_id, T _filename, bool _media, T _folder)
		{

		}

		template <>
		void API<const char*>::download_photo(const char* _media_id, const char* _filename, bool _media, const char* _folder)
		{
			PHOTO_ptr = new ig::API::PHOTO::photo<const char*>();
			PHOTO_ptr->download_photo(_media_id, _filename, _media, _folder);
			PHOTO_ptr = nullptr;
		}

		template <>
		void API<std::string&&>::download_photo(std::string&& _media_id, std::string&& _filename, bool _media, std::string&& _folder)
		{
			PHOTO_ptr = new ig::API::PHOTO::photo<std::string&&>();
			PHOTO_ptr->download_photo(std::move(_media_id), std::move(_filename), std::move(_media), std::move(_folder));
			PHOTO_ptr = nullptr;
		}

		template <typename T>
		void API<T>::configure_photo(T _upload_id, T _photo, T _caption)
		{

		}

		template <>
		void API<const char*>::configure_photo(const char* _upload_id, const char* _photo, const char* _caption)
		{
			PHOTO_ptr = new ig::API::PHOTO::photo<const char*>();
			PHOTO_ptr->configure_photo(_upload_id, _photo, _caption);
			PHOTO_ptr = nullptr;
		}

		template <>
		void API<std::string&&>::configure_photo(std::string&& _upload_id, std::string&& _photo, std::string&& _caption)
		{
			PHOTO_ptr = new ig::API::PHOTO::photo<std::string&&>();
			PHOTO_ptr->configure_photo(std::move(_upload_id), std::move(_photo), std::move(_caption));
			PHOTO_ptr = nullptr;
		}

		template <typename T>
		void API<T>::download_story(T _filename, T _story_url, T _username)
		{

		}

		template <>
		void API<const char*>::download_story(const char* _filename, const char* _story_url, const char* _username)
		{
			STORY_ptr = new ig::API::STORY::story<const char*>();
			STORY_ptr->download_story(_filename, _story_url, _username);
			STORY_ptr = nullptr;
		}

		template <>
		void API<std::string&&>::download_story(std::string&& _filename, std::string&& _story_url, std::string&& _username)
		{
			STORY_ptr = new ig::API::STORY::story<std::string&&>();
			STORY_ptr->download_story(std::move(_filename), std::move(_story_url), std::move(_username));
			STORY_ptr = nullptr;
		}

		template <typename T>
		void API<T>::upload_story_photo(T _photo, T _upload_id)
		{

		}

		template <>
		void API<const char*>::upload_story_photo(const char* _photo, const char* _upload_id)
		{
			STORY_ptr = new ig::API::STORY::story<const char*>();
			STORY_ptr->upload_story_photo(_photo, _upload_id);
			STORY_ptr = nullptr;
		}

		template <>
		void API<std::string&&>::upload_story_photo(std::string&& _photo, std::string&& _upload_id)
		{
			STORY_ptr = new ig::API::STORY::story<std::string&&>();
			STORY_ptr->upload_story_photo(std::move(_photo), std::move(_upload_id));
			STORY_ptr = nullptr;
		}

		template <typename T>
		void API<T>::configure_story(T _photo, T _upload_id)
		{

		}

		template <>
		void API<const char*>::configure_story(const char* _photo, const char* _upload_id)
		{
			STORY_ptr = new ig::API::STORY::story<const char*>();
			STORY_ptr->configure_story(_photo, _upload_id);
			STORY_ptr = nullptr;
		}

		template <>
		void API<std::string&&>::configure_story(std::string&& _photo, std::string&& _upload_id)
		{
			STORY_ptr = new ig::API::STORY::story<std::string&&>();
			STORY_ptr->configure_story(std::move(_photo), std::move(_upload_id));
			STORY_ptr = nullptr;
		}

		/*
		Upload video to Instagram
			@param video      Path to video file(String)
			@param caption    Media description(String)
			@param upload_id  Unique upload_id(String).When NULL_str, then generate automatically
			@param thumbnail  Path to thumbnail for video(String).When NULL_str, then thumbnail is generate automatically
			@param options    Object with difference options, e.g.configure_timeout, rename_thumbnail, rename(Dict)
			Designed to reduce the number of function arguments!
			This is the simplest request object.
			@return           Object with state of uploading to Instagram(or False)
		*/

		template <typename T>
		void API<T>::upload_video(T _video, T _caption, T _upload_id, T _thumbnail, const std::map<T, T>& _options)
		{

		}

		template <>
		void API<const char*>::upload_video(const char* _video, const char* _caption, const char* _upload_id, const char* _thumbnail, const std::map<const char*, const char*>& _options)
		{
			VIDEO_ptr = new ig::API::VIDEO::video<const char*>();
			VIDEO_ptr->upload_video(_video, _caption, _upload_id, _thumbnail, _options);
			VIDEO_ptr = nullptr;
		}

		template <>
		void API<std::string&&>::upload_video(std::string&& _video, std::string&& _caption, std::string&& _upload_id, std::string&& _thumbnail, const std::map<std::string&&, std::string&&>& _options)
		{
			VIDEO_ptr = new ig::API::VIDEO::video<std::string&&>();
			VIDEO_ptr->upload_video(std::move(_video), std::move(_caption), std::move(_upload_id), std::move(_thumbnail), std::move(_options));
			VIDEO_ptr = nullptr;
		}

		template <typename T>
		void API<T>::download_video(T _media_id, T _filename, bool _media, T _folder)
		{

		}

		template <>
		void API<const char*>::download_video(const char* _media_id, const char* _filename, bool _media, const char* _folder)
		{
			VIDEO_ptr = new ig::API::VIDEO::video<const char*>();
			VIDEO_ptr->download_video(_media_id, _filename, _media, _folder);
			VIDEO_ptr = nullptr;
		}

		template <>
		void API<std::string&&>::download_video(std::string&& _media_id, std::string&& _filename, bool _media, std::string&& _folder)
		{
			VIDEO_ptr = new ig::API::VIDEO::video<std::string&&>();
			VIDEO_ptr->download_video(std::move(_media_id), std::move(_filename), std::move(_media), std::move(_folder));
			VIDEO_ptr = nullptr;
		}

		/*
		Post Configure Video (send caption, thumbnail and more else to Instagram)
			@param upload_id  Unique upload_id(String).Received from "upload_video"
			@param video      Path to video file(String)
			@param thumbnail  Path to thumbnail for video(String).When NULL_str, then thumbnail is generate automatically
			@param width      Width in px(Integer)
			@param height     Height in px(Integer)
			@param duration   Duration in seconds(Integer)
			@param caption    Media description(String)
			@param options    Object with difference options, e.g.configure_timeout, rename_thumbnail, rename(Dict)
			Designed to reduce the number of function arguments!
			This is the simplest request object.
		*/
		template <typename T>
		void API<T>::configure_video(T _upload_id, T _video, T _thumbnail, T _width, T _height, T _duration, T _caption, const std::map<T, T>& _options)
		{

		}

		template <>
		void API<const char*>::configure_video(const char* _upload_id, const char* _video, const char* _thumbnail, const char* _width, const char* _height, const char* _duration, const char* _caption, const std::map<const char*, const char*>& _options)
		{
			VIDEO_ptr = new ig::API::VIDEO::video<const char*>();
			VIDEO_ptr->configure_video(_upload_id, _video, _thumbnail, _width, _height, _duration, _caption, _options);
			VIDEO_ptr = nullptr;
		}

		template <>
		void API<std::string&&>::configure_video(std::string&& _upload_id, std::string&& _video, std::string&& _thumbnail, std::string&& _width, std::string&& _height, std::string&& _duration, std::string&& _caption, const std::map<std::string&&, std::string&&>& _options)
		{
			VIDEO_ptr = new ig::API::VIDEO::video<std::string&&>();
			VIDEO_ptr->configure_video(std::move(_upload_id), std::move(_video), std::move(_thumbnail), std::move(_width), std::move(_height), std::move(_duration), std::move(_caption), std::move(_options));
			VIDEO_ptr = nullptr;
		}

		template <typename T>
		bool API<T>::edit_media(T _media_id, T _captionText)
		{

		}

		template <>
		bool API<const char*>::edit_media(const char* _media_id, const char* _captionText)
		{
			DATA = NULL_map;
			DATA = json_data({ {"caption_text", _captionText} });
			URL = NULL_str;
			*TEMP_STR_PTR = NULL_str;
			*TEMP_STR_PTR = "{media_id}";
			URL = ig::settings::ENDPOINTS::edit_media;
			Utility.replace_word(URL, *TEMP_STR_PTR, _media_id);
			return send_request(URL, DATA);
		}

		template <>
		bool API<std::string&&>::edit_media(std::string&& _media_id, std::string&& _captionText)
		{
			DATA = NULL_map;
			DATA = json_data({ {"caption_text", _captionText} });
			URL = NULL_str;
			TEMP_STR_PTR->clear();
			*TEMP_STR_PTR = "{media_id}";
			URL = ig::settings::ENDPOINTS::edit_media;
			URL.replace(URL.find(*TEMP_STR_PTR), TEMP_STR_PTR->length(), _media_id);
			return send_request(std::move(URL), DATA);
		}

		template <typename T>
		bool API<T>::remove_self_tag(T _media_id)
		{

		}

		template <>
		bool API<const char*>::remove_self_tag(const char* _media_id)
		{
			DATA = NULL_map;
			DATA = json_data();
			URL = NULL_str;
			*TEMP_STR_PTR = NULL_str;
			*TEMP_STR_PTR = "{media_id}";
			URL = ig::settings::ENDPOINTS::remove_self_tag;
			Utility.replace_word(URL, *TEMP_STR_PTR, _media_id);
			return send_request(URL, DATA);
		}

		template <>
		bool API<std::string&&>::remove_self_tag(std::string&& _media_id)
		{
			DATA = NULL_map;
			DATA = json_data();
			URL = NULL_str;
			TEMP_STR_PTR->clear();
			*TEMP_STR_PTR = "{media_id}";
			URL = ig::settings::ENDPOINTS::remove_self_tag;
			URL.replace(URL.find(*TEMP_STR_PTR), TEMP_STR_PTR->length(), _media_id);
			return send_request(std::move(URL), DATA);
		}

		template <typename T>
		bool API<T>::media_info(T _media_id)
		{

		}

		template <>
		bool API<const char*>::media_info(const char* _media_id)
		{
			URL = NULL_str;
			*TEMP_STR_PTR = NULL_str;
			*TEMP_STR_PTR = "{media_id}";
			URL = ig::settings::ENDPOINTS::media_info;
			Utility.replace_word(URL, *TEMP_STR_PTR, _media_id);
			return send_request(URL);
		}

		template <>
		bool API<std::string&&>::media_info(std::string&& _media_id)
		{
			URL = NULL_str;
			TEMP_STR_PTR->clear();
			*TEMP_STR_PTR = "{media_id}";
			URL = ig::settings::ENDPOINTS::media_info;
			URL.replace(URL.find(*TEMP_STR_PTR), TEMP_STR_PTR->length(), _media_id);
			return send_request(std::move(URL));
		}

		template <typename T>
		bool API<T>::archive_media(const std::map<T, T>& _media, bool _undo)
		{

		}

		template <>
		bool API<const char*>::archive_media(const std::map<const char*, const char*>& _media, bool _undo)
		{
			DATA = NULL_map;
			DATA = json_data({ {"media_id", _media.at("id")} });
			URL = NULL_str;
			*TEMP_STR_PTR = NULL_str;
			*TEMP_STR_PTR = "{media_id}";
			URL = ig::settings::ENDPOINTS::archive_media;
			Utility.replace_word(URL, *TEMP_STR_PTR, _media.at("id"));
			*TEMP_STR_PTR = "{action}";
			const char* _action;
			if (!_undo)
			{
				_action = "only_me";
			}
			else
			{
				_action = "undo_only_me";
			}
			Utility.replace_word(URL, *TEMP_STR_PTR, _action);
			*TEMP_STR_PTR = "{media_type}";
			Utility.replace_word(URL, *TEMP_STR_PTR, _media.at("media_type"));
			return send_request(URL, DATA);
		}

		template <>
		bool API<std::string&&>::archive_media(const std::map<std::string&&, std::string&&>& _media, bool _undo)
		{
			DATA = NULL_map;
			DATA = json_data({ {"media_id", _media.at("id")} });
			URL = NULL_str;
			TEMP_STR_PTR->clear();
			*TEMP_STR_PTR = "{media_id}";
			URL = ig::settings::ENDPOINTS::archive_media;
			URL.replace(URL.find(*TEMP_STR_PTR), TEMP_STR_PTR->length(), _media.at("id"));
			*TEMP_STR_PTR = "{action}";
			std::string* action = new std::string();
			if(!_undo)
			{
				*action = "only_me";
			}
			else
			{
				*action = "undo_only_me";
			}
			URL.replace(URL.find(*TEMP_STR_PTR), TEMP_STR_PTR->length(), *action);
			delete action;
			*TEMP_STR_PTR = "{media_type}";
			URL.replace(URL.find(*TEMP_STR_PTR), TEMP_STR_PTR->length(), _media.at("media_type"));
			return send_request(std::move(URL), DATA);
		}

		template <typename T>
		bool API<T>::delete_media(const std::map<T, T>& _media)
		{

		}

		template <>
		bool API<const char*>::delete_media(const std::map<const char*, const char*>& _media)
		{
			DATA = NULL_map;
			DATA = json_data({ {"media_id", _media.at("id")} });
			URL = NULL_str;
			*TEMP_STR_PTR = NULL_str;
			*TEMP_STR_PTR = "{media_id}";
			URL = ig::settings::ENDPOINTS::delete_media;
			Utility.replace_word(URL, *TEMP_STR_PTR, _media.at("id"));
			return send_request(URL, DATA);
		}

		template <>
		bool API<std::string&&>::delete_media(const std::map<std::string&&, std::string&&>& _media)
		{
			DATA = NULL_map;
			DATA = json_data({ {"media_id", _media.at("id")} });
			URL = NULL_str;
			TEMP_STR_PTR->clear();
			*TEMP_STR_PTR = "{media_id}";
			URL = ig::settings::ENDPOINTS::delete_media;
			URL.replace(URL.find(*TEMP_STR_PTR), TEMP_STR_PTR->length(), _media.at("id"));
			return send_request(*URL, *DATA);
		}

		template <typename T>
		bool API<T>::change_password(T _new_password)
		{

		}

		template <>
		bool API<const char*>::change_password(const char* _new_password)
		{
			DATA = NULL_map;
			DATA = json_data({ {"old_password", password}, {"old_password1", _new_password}, {"old_password2", _new_password} });
			URL = NULL_str;
			URL = ig::settings::ENDPOINTS::change_password;
			return send_request(URL, DATA);
		}

		template <>
		bool API<std::string&&>::change_password(std::string&& _new_password)
		{
			DATA = NULL_map;
			DATA = json_data({ {"old_password", password}, {"old_password1", _new_password}, {"old_password2", _new_password} });
			URL = NULL_str;
			URL = ig::settings::ENDPOINTS::change_password;
			return send_request(std::move(URL), DATA);
		}

		template <typename T>
		bool API<T>::explore()
		{

		}

		template <>
		bool API<const char*>::explore()
		{
			URL = NULL_str;
			URL = ig::settings::ENDPOINTS::explore;
			return send_request(URL);
		}

		template <>
		bool API<std::string&&>::explore()
		{
			URL = NULL_str;
			URL = ig::settings::ENDPOINTS::explore;
			return send_request(std::move(URL));
		}

		template <typename T>
		bool API<T>::comment(T _media_id, T _comment_text)
		{

		}

		template <>
		bool API<const char*>::comment(const char* _media_id, const char* _comment_text)
		{
			DATA = NULL_map;
			DATA = json_data({ {"comment_text", _comment_text} });
			URL = NULL_str;
			*TEMP_STR_PTR = NULL_str;
			*TEMP_STR_PTR = "{media_id}";
			URL = ig::settings::ENDPOINTS::comment;
			Utility.replace_word(URL, *TEMP_STR_PTR, _media_id);
			return send_request(URL, DATA);
		}

		template <>
		bool API<std::string&&>::comment(std::string&& _media_id, std::string&& _comment_text)
		{
			DATA = NULL_map;
			DATA = json_data({ {"comment_text", _comment_text} });
			URL = NULL_str;
			TEMP_STR_PTR->clear();
			*TEMP_STR_PTR = "{media_id}";
			URL = ig::settings::ENDPOINTS::comment;
			URL.replace(URL.find(*TEMP_STR_PTR), TEMP_STR_PTR->length(), _media_id);
			return send_request(std::move(URL), DATA);
		}

		template <typename T>
		bool API<T>::reply_to_comment(T _media_id, T _comment_text, T _parent_comment_id)
		{

		}

		template <>
		bool API<const char*>::reply_to_comment(const char* _media_id, const char* _comment_text, const char* _parent_comment_id)
		{
			DATA = NULL_map;
			DATA = json_data({ {"comment_text", _comment_text}, {"replied_to_comment_id", _parent_comment_id} });
			URL = NULL_str;
			*TEMP_STR_PTR = NULL_str;
			*TEMP_STR_PTR = "{media_id}";
			URL = ig::settings::ENDPOINTS::reply_to_comment;
			Utility.replace_word(URL, *TEMP_STR_PTR, _media_id);
			return send_request(URL, DATA);
		}

		template <>
		bool API<std::string&&>::reply_to_comment(std::string&& _media_id, std::string&& _comment_text, std::string&& _parent_comment_id)
		{
			DATA = NULL_map;
			DATA = json_data({ {"comment_text", _comment_text}, {"replied_to_comment_id", _parent_comment_id} });
			URL = NULL_str;
			TEMP_STR_PTR->clear();
			*TEMP_STR_PTR = "{media_id}";
			URL = ig::settings::ENDPOINTS::reply_to_comment;
			URL.replace(URL.find(*TEMP_STR_PTR), TEMP_STR_PTR->length(), _media_id);
			return send_request(std::move(URL), DATA);
		}

		template <typename T>
		bool API<T>::delete_comment(T _media_id, T _comment_id)
		{

		}

		template <>
		bool API<const char*>::delete_comment(const char* _media_id, const char* _comment_id)
		{
			DATA = NULL_map;
			DATA = json_data();
			URL = NULL_str;
			*TEMP_STR_PTR = NULL_str;
			*TEMP_STR_PTR = "{media_id}";
			URL = ig::settings::ENDPOINTS::delete_comment;
			Utility.replace_word(URL, *TEMP_STR_PTR, _media_id);
			*TEMP_STR_PTR = "{comment_id}";
			Utility.replace_word(URL, *TEMP_STR_PTR, _comment_id);
			return send_request(URL, DATA);
		}

		template <>
		bool API<std::string&&>::delete_comment(std::string&& _media_id, std::string&& _comment_id)
		{
			DATA = NULL_map;
			DATA = json_data();
			URL = NULL_str;
			TEMP_STR_PTR->clear();
			*TEMP_STR_PTR = "{media_id}";
			URL = ig::settings::ENDPOINTS::delete_comment;
			URL.replace(URL.find(*TEMP_STR_PTR), TEMP_STR_PTR->length(), _media_id);
			*TEMP_STR_PTR = "{comment_id}";
			URL.replace(URL.find(*TEMP_STR_PTR), TEMP_STR_PTR->length(), _comment_id);
			return send_request(std::move(URL), DATA);
		}

		template <typename T>
		bool API<T>::get_username_info(T _user_id)
		{

		}

		template <>
		bool API<const char*>::get_username_info(const char* _user_id)
		{
			DATA = NULL_map;
			DATA = json_data();
			URL = NULL_str;
			*TEMP_STR_PTR = NULL_str;
			*TEMP_STR_PTR = "{user_id}";
			URL = ig::settings::ENDPOINTS::get_username_info;
			Utility.replace_word(URL, *TEMP_STR_PTR, _user_id);
			return send_request(std::move(URL), DATA);
		}

		template <>
		bool API<std::string&&>::get_username_info(std::string&& _user_id)
		{
			DATA = NULL_map;
			DATA = json_data();
			URL = NULL_str;
			TEMP_STR_PTR->clear();
			*TEMP_STR_PTR = "{user_id}";
			URL = ig::settings::ENDPOINTS::get_username_info;
			URL.replace(URL.find(*TEMP_STR_PTR), TEMP_STR_PTR->length(), _user_id);
			return send_request(std::move(URL), DATA);
		}

		template <typename T>
		bool API<T>::get_self_username_info()
		{

		}

		template <>
		bool API<const char*>::get_self_username_info()
		{
			get_username_info(user_id);
		}

		template <>
		bool API<std::string&&>::get_self_username_info()
		{
			get_username_info(std::move(user_id));
		}

		template <typename T>
		bool API<T>::get_recent_activity()
		{

		}

		template <>
		bool API<const char*>::get_recent_activity()
		{
			DATA = NULL_map;
			DATA = json_data();
			URL = NULL_str;
			URL = ig::settings::ENDPOINTS::get_recent_activity;
			return send_request(URL, DATA);
		}

		template <>
		bool API<std::string&&>::get_recent_activity()
		{
			DATA = NULL_map;
			DATA = json_data();
			URL = NULL_str;
			URL = ig::settings::ENDPOINTS::get_recent_activity;
			return send_request(std::move(URL), DATA);
		}

		template <typename T>
		bool API<T>::get_following_recent_activity()
		{

		}

		template <>
		bool API<const char*>::get_following_recent_activity()
		{
			DATA = NULL_map;
			DATA = json_data();
			URL = NULL_str;
			URL = ig::settings::ENDPOINTS::get_following_recent_activity;
			return send_request(URL, DATA);
		}

		template <>
		bool API<std::string&&>::get_following_recent_activity()
		{
			DATA = NULL_map;
			DATA = json_data();
			URL = NULL_str;
			URL = ig::settings::ENDPOINTS::get_following_recent_activity;
			return send_request(std::move(URL), DATA);
		}

		template <typename T>
		bool API<T>::getv2Inbox()
		{

		}

		template <>
		bool API<const char*>::getv2Inbox()
		{
			DATA = NULL_map;
			DATA = json_data();
			URL = NULL_str;
			URL = ig::settings::ENDPOINTS::getv2Inbox;
			return send_request(URL, DATA);
		}

		template <>
		bool API<std::string&&>::getv2Inbox()
		{
			DATA = NULL_map;
			DATA = json_data();
			URL = NULL_str;
			URL = ig::settings::ENDPOINTS::getv2Inbox;
			return send_request(std::move(URL), DATA);
		}

		template <typename T>
		bool API<T>::get_user_tags(T _user_id)
		{

		}

		template <>
		bool API<const char*>::get_user_tags(const char* _user_id)
		{
			DATA = NULL_map;
			DATA = json_data();
			URL = NULL_str;
			*TEMP_STR_PTR = NULL_str;
			*TEMP_STR_PTR = "{user_id}";
			URL = ig::settings::ENDPOINTS::get_user_tags;
			Utility.replace_word(URL, *TEMP_STR_PTR, _user_id);
			*TEMP_STR_PTR = "{rank_token}";
			Utility.replace_word(URL, *TEMP_STR_PTR, rank_token);
			return send_request(URL, DATA);
		}

		template <>
		bool API<std::string&&>::get_user_tags(std::string&& _user_id)
		{
			DATA = NULL_map;
			DATA = json_data();
			URL = NULL_str;
			TEMP_STR_PTR->clear();
			*TEMP_STR_PTR = "{user_id}";
			URL = ig::settings::ENDPOINTS::get_user_tags;
			URL.replace(URL.find(*TEMP_STR_PTR), TEMP_STR_PTR->length(), _user_id);
			*TEMP_STR_PTR = "{rank_token}";
			URL.replace(URL.find(*TEMP_STR_PTR), TEMP_STR_PTR->length(), rank_token);
			return send_request(std::move(URL), DATA);
		}

		template <typename T>
		bool API<T>::tag_feed(T _tag)
		{

		}

		template <>
		bool API<const char*>::tag_feed(const char* _tag)
		{
			DATA = NULL_map;
			DATA = json_data();
			URL = NULL_str;
			*TEMP_STR_PTR = NULL_str;
			*TEMP_STR_PTR = "{tag}";
			URL = ig::settings::ENDPOINTS::tag_feed;
			Utility.replace_word(URL, *TEMP_STR_PTR, _tag);
			*TEMP_STR_PTR = "{rank_token}";
			Utility.replace_word(URL, *TEMP_STR_PTR, rank_token);
			return send_request(URL, DATA);
		}

		template <>
		bool API<std::string&&>::tag_feed(std::string&& _tag)
		{
			DATA = NULL_map;
			DATA = json_data();
			URL = NULL_str;
			TEMP_STR_PTR->clear();
			*TEMP_STR_PTR = "{tag}";
			URL = ig::settings::ENDPOINTS::tag_feed;
			URL.replace(URL.find(*TEMP_STR_PTR), TEMP_STR_PTR->length(), _tag);
			*TEMP_STR_PTR = "{rank_token}";
			URL.replace(URL.find(*TEMP_STR_PTR), TEMP_STR_PTR->length(), rank_token);
			return send_request(std::move(URL), DATA);
		}

		template <typename T>
		bool API<T>::get_comment_likers(T _comment_id)
		{

		}

		template <>
		bool API<const char*>::get_comment_likers(const char* _comment_id)
		{
			DATA = NULL_map;
			DATA = json_data();
			URL = NULL_str;
			*TEMP_STR_PTR = NULL_str;
			*TEMP_STR_PTR = "{comment_id}";
			URL = ig::settings::ENDPOINTS::get_comment_likers;
			Utility.replace_word(URL, *TEMP_STR_PTR, _comment_id);
			return send_request(URL, DATA);
		}

		template <>
		bool API<std::string&&>::get_comment_likers(std::string&& _comment_id)
		{
			DATA = NULL_map;
			DATA = json_data();
			URL = NULL_str;
			TEMP_STR_PTR->clear();
			*TEMP_STR_PTR = "{comment_id}";
			URL = ig::settings::ENDPOINTS::get_comment_likers;
			URL.replace(URL.find(*TEMP_STR_PTR), TEMP_STR_PTR->length(), _comment_id);
			return send_request(std::move(URL), DATA);
		}

		template <typename T>
		bool API<T>::get_media_likers(T _media_id)
		{

		}

		template <>
		bool API<const char*>::get_media_likers(const char* _media_id)
		{
			DATA = NULL_map;
			DATA = json_data();
			URL = NULL_str;
			*TEMP_STR_PTR = NULL_str;
			*TEMP_STR_PTR = "{media_id}";
			URL = ig::settings::ENDPOINTS::get_comment_likers;
			Utility.replace_word(URL, *TEMP_STR_PTR, _media_id);
			return send_request(URL, DATA);
		}

		template <>
		bool API<std::string&&>::get_media_likers(std::string&& _media_id)
		{
			DATA = NULL_map;
			DATA = json_data();
			URL = NULL_str;
			TEMP_STR_PTR->clear();
			*TEMP_STR_PTR = "{media_id}";
			URL = ig::settings::ENDPOINTS::get_comment_likers;
			URL.replace(URL.find(*TEMP_STR_PTR), TEMP_STR_PTR->length(), _media_id);
			return send_request(std::move(URL), DATA);
		}

		template <typename T>
		bool API<T>::get_geo_media(T _user_id)
		{

		}

		template <>
		bool API<const char*>::get_geo_media(const char* _user_id)
		{
			DATA = NULL_map;
			DATA = json_data();
			URL = NULL_str;
			*TEMP_STR_PTR = NULL_str;
			*TEMP_STR_PTR = "{user_id}";
			URL = ig::settings::ENDPOINTS::get_geo_media;
			Utility.replace_word(URL, *TEMP_STR_PTR, _user_id);
			return send_request(URL, DATA);
		}

		template <>
		bool API<std::string&&>::get_geo_media(std::string&& _user_id)
		{
			DATA = NULL_map;
			DATA = json_data();
			URL = NULL_str;
			TEMP_STR_PTR->clear();
			*TEMP_STR_PTR = "{user_id}";
			URL = ig::settings::ENDPOINTS::get_geo_media;
			URL.replace(URL.find(*TEMP_STR_PTR), TEMP_STR_PTR->length(), _user_id);
			return send_request(std::move(URL), DATA);
		}

		template <typename T>
		bool API<T>::get_self_geo_media()
		{

		}

		template <>
		bool API<const char*>::get_self_geo_media()
		{
			get_geo_media(user_id);
		}

		template <>
		bool API<std::string&&>::get_self_geo_media()
		{
			get_geo_media(std::move(user_id));
		}

		template <typename T>
		bool API<T>::sync_from_adress_book(T _contacts)
		{

		}

		template <>
		bool API<const char*>::sync_from_adress_book(const char* _contacts)
		{
			DATA = NULL_map;
			DATA = json_data({ {"contacts", json.dumps(_contacts)} });
			URL = NULL_str;
			URL = ig::settings::ENDPOINTS::sync_from_adress_book;
			return send_request(URL, DATA);
		}

		template <>
		bool API<std::string&&>::sync_from_adress_book(std::string&& _contacts)
		{
			DATA = NULL_map;
			DATA = json_data({ {"contacts", json.dumps(_contacts)} });
			URL = NULL_str;
			URL = ig::settings::ENDPOINTS::sync_from_adress_book;
			return send_request(std::move(URL), DATA);
		}

		template <typename T>
		bool API<T>::get_timeline()
		{

		}

		template <>
		bool API<const char*>::get_timeline()
		{
			URL = NULL_str;
			*TEMP_STR_PTR = "{rank_token}";
			URL = ig::settings::ENDPOINTS::get_timeline;
			Utility.replace_word(URL, *TEMP_STR_PTR, rank_token);
			return send_request(URL, DATA);
		}

		template <>
		bool API<std::string&&>::get_timeline()
		{
			URL = NULL_str;
			*TEMP_STR_PTR = "{rank_token}";
			URL = ig::settings::ENDPOINTS::get_timeline;
			URL.replace(URL.find(*TEMP_STR_PTR), TEMP_STR_PTR->length(), rank_token);
			return send_request(std::move(URL), DATA);
		}

		template <typename T>
		bool API<T>::get_user_feed(T _user_id, T _max_id, T _min_timestamp)
		{

		}

		template <>
		bool API<const char*>::get_user_feed(const char* _user_id, const char* _max_id, const char* _min_timestamp)
		{
			DATA = NULL_map;
			DATA = json_data();
			URL = NULL_str;
			*TEMP_STR_PTR = NULL_str;
			*TEMP_STR_PTR = "{user_id}";
			URL = ig::settings::ENDPOINTS::get_user_feed;
			Utility.replace_word(URL, *TEMP_STR_PTR, _user_id);
			*TEMP_STR_PTR = "{max_id}";
			Utility.replace_word(URL, *TEMP_STR_PTR, _max_id);
			*TEMP_STR_PTR = "{min_timestamp}";
			Utility.replace_word(URL, *TEMP_STR_PTR, _min_timestamp);
			*TEMP_STR_PTR = "{rank_token}";
			Utility.replace_word(URL, *TEMP_STR_PTR, rank_token);
			return send_request(URL, DATA);
		}

		template <>
		bool API<std::string&&>::get_user_feed(std::string&& _user_id, std::string&& _max_id, std::string&& _min_timestamp)
		{
			DATA = NULL_map;
			DATA = json_data();
			URL = NULL_str;
			TEMP_STR_PTR->clear();
			*TEMP_STR_PTR = "{user_id}";
			URL = ig::settings::ENDPOINTS::get_user_feed;
			URL.replace(URL.find(*TEMP_STR_PTR), TEMP_STR_PTR->length(), _user_id);
			*TEMP_STR_PTR = "{max_id}";
			URL.replace(URL.find(*TEMP_STR_PTR), TEMP_STR_PTR->length(), _max_id);
			*TEMP_STR_PTR = "{min_timestamp}";
			URL.replace(URL.find(*TEMP_STR_PTR), TEMP_STR_PTR->length(), _min_timestamp);
			*TEMP_STR_PTR = "{rank_token}";
			URL.replace(URL.find(*TEMP_STR_PTR), TEMP_STR_PTR->length(), rank_token);
			return send_request(std::move(URL), DATA);
		}

		template <typename T>
		bool API<T>::get_self_user_feed(T _max_id, T _min_timestamp)
		{

		}

		template <>
		bool API<const char*>::get_self_user_feed(const char* _max_id, const char* _min_timestamp)
		{
			get_user_feed(user_id, _max_id, _min_timestamp);
		}

		template <>
		bool API<std::string&&>::get_self_user_feed(std::string&& _max_id, std::string&& _min_timestamp)
		{
			get_user_feed(std::move(user_id), std::move(_max_id), std::move(_min_timestamp));
		}

		template <typename T>
		bool API<T>::get_hashtag_feed(T _hashtag, T _max_id)
		{

		}

		template <>
		bool API<const char*>::get_hashtag_feed(const char* _hashtag, const char* _max_id)
		{
			DATA = NULL_map;
			DATA = json_data();
			URL = NULL_str;
			*TEMP_STR_PTR = NULL_str;
			*TEMP_STR_PTR = "{hashtag}";
			URL = ig::settings::ENDPOINTS::get_hashtag_feed;
			Utility.replace_word(URL, *TEMP_STR_PTR, _hashtag);
			*TEMP_STR_PTR = "{max_id}";
			Utility.replace_word(URL, *TEMP_STR_PTR, _max_id);
			*TEMP_STR_PTR = "{rank_token}";
			Utility.replace_word(URL, *TEMP_STR_PTR, rank_token);
			return send_request(URL, DATA);
		}

		template <>
		bool API<std::string&&>::get_hashtag_feed(std::string&& _hashtag, std::string&& _max_id)
		{
			DATA = NULL_map;
			DATA = json_data();
			URL = NULL_str;
			TEMP_STR_PTR->clear();
			*TEMP_STR_PTR = "{hashtag}";
			URL = ig::settings::ENDPOINTS::get_hashtag_feed;
			URL.replace(URL.find(*TEMP_STR_PTR), TEMP_STR_PTR->length(), _hashtag);
			*TEMP_STR_PTR = "{max_id}";
			URL.replace(URL.find(*TEMP_STR_PTR), TEMP_STR_PTR->length(), _max_id);
			*TEMP_STR_PTR = "{rank_token}";
			URL.replace(URL.find(*TEMP_STR_PTR), TEMP_STR_PTR->length(), rank_token);
			return send_request(std::move(URL), DATA);
		}

		template <typename T>
		bool API<T>::get_location_feed(T _location_id, T _max_id)
		{

		}

		template <>
		bool API<const char*>::get_location_feed(const char* _location_id, const char* _max_id)
		{
			DATA = NULL_map;
			DATA = json_data();
			URL = NULL_str;
			*TEMP_STR_PTR = NULL_str;
			*TEMP_STR_PTR = "{location_id}";
			URL = ig::settings::ENDPOINTS::get_location_feed;
			Utility.replace_word(URL, *TEMP_STR_PTR, _location_id);
			*TEMP_STR_PTR = "{max_id}";
			Utility.replace_word(URL, *TEMP_STR_PTR, _max_id);
			*TEMP_STR_PTR = "{rank_token}";
			Utility.replace_word(URL, *TEMP_STR_PTR, rank_token);
			return send_request(URL, DATA);
		}

		template <>
		bool API<std::string&&>::get_location_feed(std::string&& _location_id, std::string&& _max_id)
		{
			DATA = NULL_map;
			DATA = json_data();
			URL = NULL_str;
			TEMP_STR_PTR->clear();
			*TEMP_STR_PTR = "{location_id}";
			URL = ig::settings::ENDPOINTS::get_location_feed;
			URL.replace(URL.find(*TEMP_STR_PTR), TEMP_STR_PTR->length(), _location_id);
			*TEMP_STR_PTR = "{max_id}";
			URL.replace(URL.find(*TEMP_STR_PTR), TEMP_STR_PTR->length(), _max_id);
			*TEMP_STR_PTR = "{rank_token}";
			URL.replace(URL.find(*TEMP_STR_PTR), TEMP_STR_PTR->length(), rank_token);
			return send_request(std::move(URL), DATA);
		}

		template <typename T>
		bool API<T>::get_popular_feed()
		{

		}

		template <>
		bool API<const char*>::get_popular_feed()
		{
			DATA = NULL_map;
			DATA = json_data();
			URL = NULL_str;
			*TEMP_STR_PTR = NULL_str;
			URL = ig::settings::ENDPOINTS::get_popular_feed;
			*TEMP_STR_PTR = "{rank_token}";
			Utility.replace_word(URL, *TEMP_STR_PTR, rank_token);
			return send_request(URL, DATA);
		}

		template <>
		bool API<std::string&&>::get_popular_feed()
		{
			DATA = NULL_map;
			DATA = json_data();
			URL = NULL_str;
			TEMP_STR_PTR->clear();
			URL = ig::settings::ENDPOINTS::get_popular_feed;
			*TEMP_STR_PTR = "{rank_token}";
			URL.replace(URL.find(*TEMP_STR_PTR), TEMP_STR_PTR->length(), rank_token);
			return send_request(std::move(URL), DATA);
		}

		template <typename T>
		bool API<T>::get_user_followings(T _user_id, T _max_id)
		{

		}

		template <>
		bool API<const char*>::get_user_followings(const char* _user_id, const char* _max_id)
		{
			DATA = NULL_map;
			*DATA = json_data();
			URL = NULL_str;
			*TEMP_STR_PTR = NULL_str;
			*TEMP_STR_PTR = "{user_id}";
			*URL = ig::settings::ENDPOINTS::get_user_followings;
			Utility.replace_word(URL, *TEMP_STR_PTR, _user_id);
			*TEMP_STR_PTR = "{max_id}";
			Utility.replace_word(URL, *TEMP_STR_PTR, _max_id);
			*TEMP_STR_PTR = "{sig_key}";
			Utility.replace_word(URL, *TEMP_STR_PTR, ig::settings::SIG_KEY_VERSION<const char*>);
			*TEMP_STR_PTR = "{rank_token}";
			Utility.replace_word(URL, *TEMP_STR_PTR, rank_token);
			return send_request(URL, DATA);
		}

		template <>
		bool API<std::string&&>::get_user_followings(std::string&& _user_id, std::string&& _max_id)
		{
			DATA = NULL_map;
			DATA = json_data();
			URL = NULL_str;
			TEMP_STR_PTR->clear();
			*TEMP_STR_PTR = "{user_id}";
			URL = ig::settings::ENDPOINTS::get_user_followings;
			URL.replace(URL.find(*TEMP_STR_PTR), TEMP_STR_PTR->length(), _user_id);
			*TEMP_STR_PTR = "{max_id}";
			URL.replace(URL.find(*TEMP_STR_PTR), TEMP_STR_PTR->length(), _max_id);
			*TEMP_STR_PTR = "{sig_key}";
			URL.replace(URL.find(*TEMP_STR_PTR), TEMP_STR_PTR->length(), ig::settings::SIG_KEY_VERSION<std::string&&>);
			*TEMP_STR_PTR = "{rank_token}";
			URL.replace(URL.find(*TEMP_STR_PTR), TEMP_STR_PTR->length(), rank_token);
			return send_request(std::move(URL), DATA);
		}

		template <typename T>
		bool API<T>::get_self_users_following()
		{

		}

		template <>
		bool API<const char*>::get_self_users_following()
		{
			get_user_followings(user_id);
		}

		template <>
		bool API<std::string&&>::get_self_users_following()
		{
			get_user_followings(std::move(user_id));
		}

		template <typename T>
		bool API<T>::get_user_followers(T _user_id, T _max_id)
		{

		}

		template <>
		bool API <const char*> ::get_user_followers(const char* _user_id, const char* _max_id)
		{
			DATA = NULL_map;
			DATA = json_data();
			URL = NULL_str;
			*TEMP_STR_PTR = NULL_str;
			*TEMP_STR_PTR = "{user_id}";
			URL = ig::settings::ENDPOINTS::get_user_followers;
			Utility.replace_word(URL, *TEMP_STR_PTR, _user_id);
			*TEMP_STR_PTR = "{rank_token}";
			Utility.replace_word(URL, *TEMP_STR_PTR, rank_token);
			if (_max_id != NULL_str)
			{
				strcat(URL, "&max_id={max_id}")
			}
			*TEMP_STR_PTR = "{max_id}";
			Utility.replace_word(URL, *TEMP_STR_PTR, _max_id);
			return send_request(URL, DATA);
		}

		template <>
		bool API <std::string&&> ::get_user_followers(std::string&& _user_id, std::string&& _max_id)
		{
			DATA = NULL_map;
			DATA = json_data();
			URL = NULL_str;
			TEMP_STR_PTR->clear();
			*TEMP_STR_PTR = "{user_id}";
			URL = ig::settings::ENDPOINTS::get_user_followers;
			URL.replace(URL.find(*TEMP_STR_PTR), TEMP_STR_PTR->length(), _user_id);
			*TEMP_STR_PTR = "{rank_token}";
			URL.replace(URL.find(*TEMP_STR_PTR), TEMP_STR_PTR->length(), rank_token);
			if (_max_id != NULL_str)
			{
				URL.append("&max_id={max_id}");
			}
			*TEMP_STR_PTR = "{max_id}";
			URL.replace(URL.find(*TEMP_STR_PTR), TEMP_STR_PTR->length(), _max_id);
			return send_request(std::move(URL), DATA);
		}

		template <typename T>
		bool API<T>::get_self_user_followers()
		{

		}

		template <>
		bool API<const char*>::get_self_user_followers()
		{
			get_user_followers(user_id);
		}

		template <>
		bool API<std::string&&>::get_self_user_followers()
		{
			get_user_followers(std::move(user_id));
		}

		template <typename T>
		bool API<T>::like_comment(T _comment_id)
		{

		}

		template <>
		bool API<const char*>::like_comment(const char* _comment_id)
		{
			DATA = NULL_map;
			DATA = json_data();
			URL = NULL_str;
			*TEMP_STR_PTR = NULL_str;
			*TEMP_STR_PTR = "{comment_id}";
			URL = ig::settings::ENDPOINTS::like_comment;
			Utility.replace_word(URL, *TEMP_STR_PTR, _comment_id);
			return send_request(URL, DATA);
		}

		template <>
		bool API<std::string&&>::like_comment(std::string&& _comment_id)
		{
			DATA = NULL_map;
			DATA = json_data();
			URL = NULL_str;
			TEMP_STR_PTR->clear();
			*TEMP_STR_PTR = "{comment_id}";
			URL = ig::settings::ENDPOINTS::like_comment;
			URL.replace(URL.find(*TEMP_STR_PTR), TEMP_STR_PTR->length(), _comment_id);
			return send_request(std::move(URL), DATA);
		}

		template <typename T>
		bool API<T>::unlike_comment(T _comment_id)
		{

		}

		template <>
		bool API<const char*>::unlike_comment(const char* _comment_id)
		{
			DATA = NULL_map;
			DATA = json_data();
			URL = NULL_str;
			*TEMP_STR_PTR = NULL_str;
			*TEMP_STR_PTR = "{comment_id}";
			URL = ig::settings::ENDPOINTS::unlike_comment;
			Utility.replace_word(URL, *TEMP_STR_PTR, _comment_id);
			return send_request(URL, DATA);
		}

		template <>
		bool API<std::string&&>::unlike_comment(std::string&& _comment_id)
		{
			DATA = NULL_map;
			DATA = json_data();
			URL = NULL_str;
			TEMP_STR_PTR->clear();
			*TEMP_STR_PTR = "{comment_id}";
			URL = ig::settings::ENDPOINTS::unlike_comment;
			URL.replace(URL.find(*TEMP_STR_PTR), TEMP_STR_PTR->length(), _comment_id);
			return send_request(std::move(URL), DATA);
		}

		template <typename T>
		bool API<T>::like(T _media_id)
		{

		}

		template <>
		bool API<const char*>::like(const char* _media_id)
		{
			DATA = NULL_map;
			DATA = json_data({ {"media_id", _media_id} });
			URL = NULL_str;
			*TEMP_STR_PTR = NULL_str;
			*TEMP_STR_PTR = "{media_id}";
			URL = ig::settings::ENDPOINTS::like;
			Utility.replace_word(URL, *TEMP_STR_PTR, _media_id);
			return send_request(URL, DATA);
		}

		template <>
		bool API<std::string&&>::like(std::string&& _media_id)
		{
			DATA = NULL_map;
			DATA = json_data({ {"media_id", _media_id} });
			URL = NULL_str;
			TEMP_STR_PTR->clear();
			*TEMP_STR_PTR = "{media_id}";
			URL = ig::settings::ENDPOINTS::like;
			URL.replace(URL.find(*TEMP_STR_PTR), TEMP_STR_PTR->length(), _media_id);
			return send_request(std::move(URL), DATA);
		}

		template <typename T>
		bool API<T>::unlike(T _media_id)
		{

		}

		template <>
		bool API<const char*>::unlike(const char* _media_id)
		{
			DATA = NULL_map;
			DATA = json_data({ {"media_id", _media_id} });
			URL = NULL_str;
			*TEMP_STR_PTR = NULL_str;
			*TEMP_STR_PTR = "{media_id}";
			URL = ig::settings::ENDPOINTS::unlike;
			Utility.replace_word(URL, *TEMP_STR_PTR, _media_id);
			return send_request(URL, DATA);
		}

		template <>
		bool API<std::string&&>::unlike(std::string&& _media_id)
		{
			DATA = NULL_map;
			DATA = json_data({ {"media_id", _media_id} });
			URL = NULL_str;
			TEMP_STR_PTR->clear();
			*TEMP_STR_PTR = "{media_id}";
			URL = ig::settings::ENDPOINTS::unlike;
			URL.replace(URL.find(*TEMP_STR_PTR), TEMP_STR_PTR->length(), _media_id);
			return send_request(std::move(URL), DATA);
		}

		template <typename T>
		bool API<T>::get_media_comments(T _media_id, T _max_id)
		{

		}

		template <>
		bool API<const char*>::get_media_comments(const char* _media_id, const char* _max_id)
		{
			DATA = NULL_map;
			DATA = json_data();
			URL = NULL_str;
			*TEMP_STR_PTR = NULL_str;
			*TEMP_STR_PTR = "{media_id}";
			URL = ig::settings::ENDPOINTS::get_media_comments;
			Utility.replace_word(URL, *TEMP_STR_PTR, _media_id);
			if (_max_id != NULL_str)
			{
				strcat((char*)URL, "?max_id={max_id}");
			}
			*TEMP_STR_PTR = "{max_id}";
			Utility.replace_word(URL, *TEMP_STR_PTR, _max_id);
			return send_request(URL, DATA);
		}

		template <>
		bool API<std::string&&>::get_media_comments(std::string&& _media_id, std::string&& _max_id)
		{
			DATA = NULL_map;
			DATA = json_data();
			URL = NULL_str;
			TEMP_STR_PTR->clear();
			*TEMP_STR_PTR = "{media_id}";
			URL = ig::settings::ENDPOINTS::get_media_comments;
			URL.replace(URL.find(*TEMP_STR_PTR), TEMP_STR_PTR->length(), _media_id);
			if (_max_id != NULL_str)
			{
				URL.append("?max_id={max_id}");
			}
			*TEMP_STR_PTR = "{max_id}";
			URL.replace(URL.find(*TEMP_STR_PTR), TEMP_STR_PTR->length(), _max_id);
			return send_request(std::move(URL), DATA);
		}

		template <typename T>
		bool API<T>::get_direct_share()
		{

		}

		template <>
		bool API<const char*>::get_direct_share()
		{
			DATA = NULL_map;
			DATA = json_data();
			URL = NULL_str;
			URL = ig::settings::ENDPOINTS::get_direct_share;
			return send_request(URL, DATA);
		}

		template <>
		bool API<std::string&&>::get_direct_share()
		{
			DATA = NULL_map;
			DATA = json_data();
			URL = NULL_str;
			URL = ig::settings::ENDPOINTS::get_direct_share;
			return send_request(std::move(URL), DATA);
		}

		template <typename T>
		bool API<T>::follow(T _user_id)
		{

		}

		template <>
		bool API<const char*>::follow(const char* _user_id)
		{
			DATA = NULL_map;
			DATA = json_data({ {"user_id", _user_id} });
			URL = NULL_str;
			*TEMP_STR_PTR = NULL_str;
			*TEMP_STR_PTR = "{user_id}";
			URL = ig::settings::ENDPOINTS::follow;
			Utility.replace_word(URL, *TEMP_STR_PTR, _user_id);
			return send_request(URL, DATA);
		}

		template <>
		bool API<std::string&&>::follow(std::string&& _user_id)
		{
			DATA = NULL_map;
			DATA = json_data({ {"user_id", _user_id} });
			URL = NULL_str;
			TEMP_STR_PTR->clear();
			*TEMP_STR_PTR = "{user_id}";
			URL = ig::settings::ENDPOINTS::follow;
			URL.replace(URL.find(*TEMP_STR_PTR), TEMP_STR_PTR->length(), _user_id);
			return send_request(std::move(URL), DATA);
		}

		template <typename T>
		bool API<T>::unfollow(T _user_id)
		{

		}

		template <>
		bool API<const char*>::unfollow(const char* _user_id)
		{
			DATA = NULL_map;
			DATA = json_data({ {"user_id", _user_id} });
			URL = NULL_str;
			*TEMP_STR_PTR = NULL_str;
			*TEMP_STR_PTR = "{user_id}";
			URL = ig::settings::ENDPOINTS::unfollow;
			Utility.replace_word(URL, *TEMP_STR_PTR, _user_id);
			return send_request(URL, DATA);
		}

		template <>
		bool API<std::string&&>::unfollow(std::string&& _user_id)
		{
			DATA = NULL_map;
			DATA = json_data({ {"user_id", _user_id} });
			URL = NULL_str;
			TEMP_STR_PTR->clear();
			*TEMP_STR_PTR = "{user_id}";
			URL = ig::settings::ENDPOINTS::unfollow;
			URL.replace(URL.find(*TEMP_STR_PTR), TEMP_STR_PTR->length(), _user_id);
			return send_request(std::move(URL), DATA);
		}

		template <typename T>
		bool API<T>::block(T _user_id)
		{

		}

		template <>
		bool API<const char*>::block(const char* _user_id)
		{
			DATA = NULL_map;
			DATA = json_data({ {"user_id", _user_id} });
			URL = NULL_str;
			*TEMP_STR_PTR = NULL_str;
			*TEMP_STR_PTR = "{user_id}";
			URL = ig::settings::ENDPOINTS::block;
			Utility.replace_word(URL, *TEMP_STR_PTR, _user_id);
			return send_request(URL, DATA);
		}

		template <>
		bool API<std::string&&>::block(std::string&& _user_id)
		{
			DATA = NULL_map;
			DATA = json_data({ {"user_id", _user_id} });
			URL = NULL_str;
			TEMP_STR_PTR->clear();
			*TEMP_STR_PTR = "{user_id}";
			URL = ig::settings::ENDPOINTS::block;
			URL.replace(URL.find(*TEMP_STR_PTR), TEMP_STR_PTR->length(), _user_id);
			return send_request(std::move(URL), DATA);
		}

		template <typename T>
		bool API<T>::unblock(T _user_id)
		{

		}

		template <>
		bool API<const char*>::unblock(const char* _user_id)
		{
			DATA = NULL_map;
			DATA = json_data({ {"user_id", _user_id} });
			URL = NULL_str;
			*TEMP_STR_PTR = NULL_str;
			*TEMP_STR_PTR = "{user_id}";
			URL = ig::settings::ENDPOINTS::unblock;
			Utility.replace_word(URL, *TEMP_STR_PTR, _user_id);
			return send_request(URL, DATA);
		}

		template <>
		bool API<std::string&&>::unblock(std::string&& _user_id)
		{
			DATA = NULL_map;
			DATA = json_data({ {"user_id", _user_id} });
			URL = NULL_str;
			TEMP_STR_PTR->clear();
			*TEMP_STR_PTR = "{user_id}";
			URL = ig::settings::ENDPOINTS::unblock;
			URL.replace(URL.find(*TEMP_STR_PTR), TEMP_STR_PTR->length(), _user_id);
			return send_request(std::move(URL), DATA);
		}

		template <typename T>
		bool API<T>::user_friendship(T _user_id)
		{

		}

		template <>
		bool API<const char*>::user_friendship(const char* _user_id)
		{
			DATA = NULL_map;
			DATA = json_data({ {"user_id", _user_id} });
			URL = NULL_str;
			*TEMP_STR_PTR = NULL_str;
			*TEMP_STR_PTR = "{user_id}";
			URL = ig::settings::ENDPOINTS::user_friendship;
			Utility.replace_word(URL, *TEMP_STR_PTR, _user_id);
			return send_request(URL, DATA);
		}

		template <>
		bool API<std::string&&>::user_friendship(std::string&& _user_id)
		{
			DATA = NULL_map;
			DATA = json_data({ {"user_id", _user_id} });
			URL = NULL_str;
			TEMP_STR_PTR->clear();
			*TEMP_STR_PTR = "{user_id}";
			URL = ig::settings::ENDPOINTS::user_friendship;
			URL.replace(URL.find(*TEMP_STR_PTR), TEMP_STR_PTR->length(), _user_id);
			return send_request(std::move(URL), DATA);
		}

		template <typename T>
		bool API<T>::send_direct_item(T _item_type, const std::vector<T>& _users, const std::map<T, T>& _options)
		{

		}

		/*
		* EXPERIMENT
		template <>
		bool API<const char*>::send_direct_item(const char* _item_type, const std::vector<const char*>& _users, const std::map<const char*, const char*>& _options)
		{
			DATA = NULL_map;
			DATA = json_data({ {"client_context", Utility.generate_uuid_v4()}, {"action", "send_item"} });
			std::pair<const char*, const char*> _headers[HEADERS_COUNT];
			std::pair<const char*, const char* [RECIPIENTS_COUNT]> _recipients;
			_recipients = _prepare_recipients(_users, _options.at("thread"), false);
			if (std::tuple_size<decltype(_recipients)>::value <= 0)
			{
				return false;
			}
		}
		*/
			
		template <>
		bool API<const char*>::send_direct_item(const char* _item_type, const std::vector<const char*>&_users, const std::map<const char*, const char*>&_options)
		{
			DATA = NULL_map;
			DATA = json_data({ {"client_context", Utility.generate_uuid_v4()}, {"action", "send_item"} });
			std::map<const char*, const char*>* _headers = new std::map<const char*, const char*>;
			std::map<const char*, const char*>* _recipients = new std::map<const char*, const char*>;
			*_recipients = _prepare_recipients(_users, _options.at("thread"), false);
			if (_recipients->empty())
			{
				return false;
			}
			DATA.at("recipient_users") = _recipients->at("users");
			if (_recipients->at("thread"))
			{
				DATA.at("thread_ids") = _recipients->at("thread");
			}
			DATA = default_data();
			*TEMP_STR_PTR = NULL_str;
			*TEMP_STR_PTR = "{}";
			URL = ig::settings::ENDPOINTS::send_direct_item;
			Utility.replace_word(URL, *TEMP_STR_PTR, _item_type);
			const char* _text = options.get("text", "");
			if (_item_type == "link")
			{
				DATA.at("link_text") = _text;
				DATA.at("link_urls") = json.dumps(_options.at("ursl"));
			}
			else if (_item_type == "text")
			{
				DATA.at("text") = _text;
			}
			else if (_item_type == "media_share")
			{
				DATA.at("text") = _text;
				DATA.at("media_type") = options.get("media_type", "photo");
				DATA.at("media_id") = options.get("media_id", "");
			}
			else if (_item_type == "hashtag")
			{
				DATA.at("text") = _text;
				DATA.at("hashtag") = options.get("hashtag", "");
			}
			else if (_item_type == "profile")
			{
				DATA.at("text") = _text;
				DATA.at("profile_user_id") = options.get("profile_user_id", "");
			}
			else if (_item_type == "photo")
			{
				URL = "direct_v2/threads/broadcast/upload_photo/";
				const char* _filepath;
				_filepath = _options.at("filepath");
				const char* _upload_id;
				auto _x = time(NULL);
				_upload_id = (const char*)(_x * 1000);
				if (std::filesystem::exists(_filepath))
				{
					_FILE = fopen(_filepath, "rb");
					if (_FILE)
					{
						const char* _TEMP_buff;
						auto _photo = fread((char*)_TEMP_buff, sizeof(char), 4096, _FILE);
						DATA.at("photo") = strcat(strcat(strcat(strcat(strcat((char*)"direct_temp_photo_", _upload_id), ".jpg"), _photo), "application/octet-stream"), "{Content-Transfer-Encoding": "binary}");
					}
					auto m = MultipartEncoder(*DATA, boundary = uuid);
					DATA = (char*)m;
					_headers->update({ "Content-type", m.content_type });
				}
			}
			return send_request(URL, DATA, with_signature = false, headers = _headers);
			delete _recipients;
			delete _headers;
		}

		template <>
		bool API<std::string&&>::send_direct_item(std::string&& _item_type, const std::vector<std::string&&>& _users, const std::map<std::string&&, std::string&&>& _options)
		{
			DATA = NULL_map;
			DATA = json_data({ {"client_context", Utility.generate_uuid_v4()}, {"action", "send_item"} });
			std::map<std::string, std::string>* _headers = new std::map<std::string, std::string>();
			std::map<std::string, std::vector<std::string>>* _recipients = new std::map<std::string, std::vector<std::string>>;
			*_recipients = _prepare_recipients(_users, _options.at("thread"), false);
			if (_recipients->empty())
			{
				return false;
			}
			DATA.at("recipient_users") = _recipients->at("users");
			if (_recipients->at("thread"))
			{
				DATA.at("thread_ids") = _recipients->at("thread");
			}
			DATA = default_data();
			*TEMP_STR_PTR = NULL_str;
			*TEMP_STR_PTR = "{}";
			URL = ig::settings::ENDPOINTS::send_direct_item;
			URL.replace(URL.find(*TEMP_STR_PTR), TEMP_STR_PTR->length(), _item_type);
			std::string* _text = options.get("text", "");
			if (_item_type == "link")
			{
				DATA.at("link_text") = *_text;
				DATA.at("link_urls") = json.dumps(_options.at("ursl"));
			}
			else if (_item_type == "text")
			{
				DATA.at("text") = *_text;
			}
			else if (_item_type == "media_share")
			{
				DATA.at("text") = *_text;
				DATA.at("media_type") = options.get("media_type", "photo");
				DATA.at("media_id") = options.get("media_id", "");
			}
			else if (_item_type == "hashtag")
			{
				DATA.at("text") = *_text;
				DATA.at("hashtag") = options.get("hashtag", "");
			}
			else if (_item_type == "profile")
			{
				DATA.at("text") = *_text;
				DATA.at("profile_user_id") = options.get("profile_user_id", "");
			}
			else if (_item_type == "photo")
			{
				URL = "direct_v2/threads/broadcast/upload_photo/";
				std::string* _filepath = new std::string();
				*_filepath = _options.at("filepath");
				std::string* _upload_id = new std::string();
				auto _x = time(NULL);
				*_upload_id = std::to_string(_x * 1000);
				if (std::filesystem::exists(*_filepath))
				{
					FILE_IN.open(*_filepath, std::ios::binary);
					if (FILE_IN.is_open())
					{
						char _TEMP_buff[4096];
						auto _photo = FILE_IN.read(_TEMP_buff, 4096);
						DATA.at("photo") = ("direct_temp_photo_" + *_upload_id + ".jpg", _photo, "application/octet-stream", { "Content-Transfer-Encoding": "binary" });
					}
					auto _m = MultipartEncoder(*DATA, boundary = uuid);
					DATA = std::to_string(_m);
					_headers.update({ "Content-type", _m.content_type });
				}
			}
			return send_request(std::move(URL), DATA, with_signature = false, headers = _headers);
			delete _recipients;
			delete _headers;
		}

		/*
		template<typename T>
		bool API<T>::send_direct_item(T _item_type, T _users[], std::pair<T, T> _options[])
		{
			return false;
		}

		template<>
		bool API<const char*>::send_direct_item(const char* _item_type, const char* _users[], std::pair<const char*, const char*> _options[])
		{

		}

		template<>
		bool API<std::string&&>::send_direct_item(std::string&& _item_type, std::string&& _users[], std::pair<std::string&&, std::string&&> _options[])
		{

		}
		*/

		template<typename T>
		bool API<T>::get_total_liked_media(T _max_id)
		{
			return false;
		}

		template<>
		bool API<const char*>::get_total_liked_media(const char* _max_id)
		{
			DATA = NULL_map;
			DATA = json_data({ {"user_id", user_id} });
			URL = NULL_str;
			*TEMP_STR_PTR = NULL_str;
			*TEMP_STR_PTR = "{user_id}";
			URL = ig::settings::ENDPOINTS::get_total_liked_media;
			Utility.replace_word(URL, *TEMP_STR_PTR, _max_id);
			return send_request(URL, DATA);
		}

		template<typename T>
		bool API<T>::get_total_followers_or_followings(T _user_id, T _amount, T _which, bool _filter_private, bool _filter_business, bool _filter_verified, bool _usernames, T _to_file, bool _overwrite)
		{
			return false;
		}

		template<>
		bool API<const char*>::get_total_followers_or_followings(const char* _user_id, const char* _amount, const char* _which, bool _filter_private, bool _filter_business, bool _filter_verified, bool _usernames, const char* _to_file, bool _overwrite)
		{
			if (_which == "followers")
			{
				const char* _key = "follower_count";
				const char* _get = get_user_followers(_user_id, max_id);
			}
			else if (_which == "followings")
			{
				const char* _key = "following_count";
				const char* _get = get_user_followings(_user_id, max_id);
			}
			int _sleep_track = 0;
			//const char* _results = (char*)malloc(sizeof(char) * RESULT_COUNT);
			const char* _results[RESULT_COUNT];
			unsigned int _results_start_index = 0;
			const char* _next_max_id;
			get_username_info(_user_id);
			std::map<const char*, const char*>* _username_info = json_data();
			if (_username_info->at("user"))
			{
				const char* _total;
				_total = _amount || _total = _username_info["user"][_key];
				if (atoi(_total) > 200000)
				{
					printf("Consider temporarily saving the result of this big operation. This will take a while.\n");
				}
			}
			else
			{
				return false;
			}
			if (_filter_business)
			{
				printf("--> You are going to filter business accounts. This will take time! <--\n");
			}
			if (_to_file != NULL_str)
			{
				if (_FILE = fopen(_to_file, "r"))
				{
					if (!_overwrite)
					{
						printf("File `%s` already exists.Not overwriting.\n", _to_file);
						return false;
					}
					else
					{
						printf("Overwriting file `%s`\n", _to_file);
					}
				}
			}
			const char* _desc;
			sprintf((char*)_desc, "Getting %s of &s", _which, _user_id);
			while (true)
			{
				get(_user_id, _next_max_id);
				const char* _last_json;
				_last_json = last_json();
				try
				{
					if (_to_file != NULL_str)
					{
						_FILE = fopen(_to_file, "a+");
						for (auto _item : last_json["users"])
						{
							if (_filter_private && _item["is_private"])
							{
								continue;
							}
							if (_filter_business)
							{
								_sleep(2 * rand());
								get_username_info(_item["pk"]);
								auto _item_info = last_json();
								if (_item_info["user"]["is_business"])
								{
									continue;
								}
							}
							if (_filter_verified && _item["is_verified"])
							{
								continue;
							}
							if (_to_file != NULL_str)
							{
								if (_usernames)
								{
									fwrite(strcat((char*)_item["username"], "\n"));
								}
								else
								{
									fwrite(strcat((char*)_item["pk"], "\n"));
								}
							}
							_results[_results_start_index++] = _item;
							_sleep_track++;
							if (_sleep_track >= 20000)
							{
								/*
								std::random_device rd;
								std::mt19937 gen(rd);
								std::uniform_int_distribution<> dist(120, 180);
								unsigned int _sleep_time = dist(gen);
								*/
								unsigned int _sleep_time = 120 + (rand() % 180 - 120 + 1);
								const char* _msg;
								sprintf((char*)_msg, "\nWaiting %0.2f min. due to too many requests.", _sleep_time / 60);
								_sleep(_sleep_time);
								_sleep_track = 0;
							}
						}
					}
					if (!_last_json["users"] || _results_start_index >= atoi(_total))
					{
						const char* _results_OUT[RESULT_COUNT];
						unsigned int _index = 0;
						while (_index != atoi(_total))
						{
							_results_OUT[_index++] = _results[_index++];
						}
						return _results_OUT;
					}
				}
				catch (const std::exception& e)
				{
					printf("ERROR: %s\n", e.what());
					const char* _results_OUT[RESULT_COUNT];
					unsigned int _index = 0;
					while (_index != atoi(_total))
					{
						_results_OUT[_index++] = _results[_index++];
					}
					return _results_OUT;
				}
				if (last_json["big_list"] == false)
				{
					const char* _results_OUT[RESULT_COUNT];
					unsigned int _index = 0;
					while (_index != atoi(_total))
					{
						_results_OUT[_index++] = _results[_index++];
					}
					return _results_OUT;
				}
				_next_max_id = last_json.get("next_max_id", "");
			}
			delete _username_info;
		}

		template<typename T>
		bool API<T>::get_total_followers(T _user_id, T _amount)
		{
			return false;
		}

		template<>
		bool API<const char*>::get_total_followers(const char* _user_id, const char* _amount)
		{
			return get_total_followers_or_followings(_user_id, _amount, "followers");
		}

		template<typename T>
		bool API<T>::get_total_followings(T _user_id, T _amount)
		{
			return false;
		}

		template<>
		bool API<const char*>::get_total_followings(const char* _user_id, const char* _amount)
		{
			return get_total_followers_or_followings(_user_id, _amount, "followings");
		}

		template<typename T>
		bool API<T>::get_total_user_feed(T _user_id, T _min_timestamp)
		{
			return false;
		}

		template<>
		bool API<const char*>::get_total_user_feed(const char* _user_id, const char* _min_timestamp)
		{
			char _ch = std::numeric_limits<float>::max();
			return get_last_user_feed(_user_id, (const char*)_ch, _min_timestamp);
		}

		template<typename T>
		bool API<T>::get_last_user_feed(T _user_id, T _amount, T _min_timestamp)
		{
			return false;
		}

		template<>
		bool API<const char*>::get_last_user_feed(const char* _user_id, const char* _amount, const char* _min_timestamp)
		{
			std::vector<const char*> _user_feed;
			const char* _next_max_id;
			while (true)
			{
				if (_user_feed.size() >= atoi(_amount))
				{
					//one request returns max 13 items
					return _user_feed;
				}
				get_user_feed(_user_id, _next_max_id, _min_timestamp);
				const char* _last_json;
				_last_json = last_json();
				if (!_last_json["items"])
				{
					return _user_feed;
				}
				_user_feed += _last_json["items"];
				if (!_last_json["more_available"])
				{
					return _user_feed;
				}
				_next_max_id = _last_json["next_max_id"];
			}
		}

		template<typename T>
		bool API<T>::get_total_hashtag_feed(T _hashtag_str, T _amount)
		{
			return false;
		}

		template<>
		bool API<const char*>::get_total_hashtag_feed(const char* _hashtag_str, const char* _amount)
		{
			std::vector<const char*> _hashtag_feed;
			const char* _next_max_id;
			while (true)
			{
				get_hashtag_feed(_hashtag_str, _next_max_id);
				const char* _last_json;
				_last_json = last_json();
				if (!_last_json["items"])
				{
					const char* _results_OUT[RESULT_COUNT];
					unsigned int _index = 0;
					while (_index != atoi(_amount))
					{
						_results_OUT[_index++] = _hashtag_feed[_index++];
					}
					return _results_OUT;
				}
				auto _items = _last_json["items"];
				try
				{
					for (auto _item : _items)
					{
						_hashtag_feed.push_back(_item);
						if (!_items || _hashtag_feed.size() >= atoi(_amount))
						{
							const char* _results_OUT[RESULT_COUNT];
							unsigned int _index = 0;
							while (_index != atoi(_amount))
							{
								_results_OUT[_index++] = _hashtag_feed[_index++];
							}
							return _results_OUT;
						}
					}
				}
				catch (const std::exception&)
				{
					const char* _results_OUT[RESULT_COUNT];
					unsigned int _index = 0;
					while (_index != atoi(_amount))
					{
						_results_OUT[_index++] = _hashtag_feed[_index++];
					}
					return _results_OUT;
				}
				_next_max_id = _last_json["next_max_id"];
			}
		}

		template<typename T>
		bool API<T>::get_total_self_followers()
		{
			return false;
		}

		template<>
		bool API<const char*>::get_total_self_user_feed(const char* _min_timestamp)
		{
			return get_total_user_feed(user_id, _min_timestamp);
		}

		template<typename T>
		bool API<T>::get_total_self_user_feed(T _min_timestamp)
		{
			return false;
		}

		template<>
		bool API<const char*>::get_total_self_user_feed(const char* _min_timestamp)
		{
			return get_total_followers(user_id);
		}

		template<typename T>
		bool API<T>::get_total_self_followings()
		{
			return false;
		}

		template<>
		bool API<const char*>::get_total_self_followings()
		{
			return get_total_followerings(user_id);
		}

		template<typename T>
		bool API<T>::get_total_liked_media(T _scan_rate)
		{
			return false;
		}

		template<>
		bool API<const char*>::get_total_liked_media(const char* _scan_rate)
		{
			const char* _next_id = "";
			std::vector<const char*> _liked_items;
			for (unsigned int _i = 0; _i <= atoi(_scan_rate); ++_i)
			{
				get_liked_media(_next_id);
				const char* _last_json;
				_last_json = last_json();
				_next_id = _last_json["next_max_id"];
				_liked_items.push_back(_last_json["items"]);
			}
			return _liked_items;
		}

		template<typename T>
		bool API<T>::remove_profile_picture()
		{
			return false;
		}

		template<>
		bool API<const char*>::remove_profile_picture()
		{
			DATA = NULL_map;
			DATA = json_data();
			URL = NULL_str;
			URL = ig::settings::ENDPOINTS::remove_profile_picture;
			return send_request(URL, DATA);
		}

		template<typename T>
		bool API<T>::set_private_account()
		{
			return false;
		}

		template<>
		bool API<const char*>::set_private_account()
		{
			DATA = NULL_map;
			DATA = json_data();
			URL = NULL_str;
			URL = ig::settings::ENDPOINTS::set_private_account;
			return send_request(URL, DATA);
		}

		template<typename T>
		bool API<T>::set_public_account()
		{
			return false;
		}

		template<>
		bool API<const char*>::set_public_account()
		{
			DATA = NULL_map;
			DATA = json_data();
			URL = NULL_str;
			URL = ig::settings::ENDPOINTS::set_public_account;
			return send_request(URL, DATA);
		}

		template<typename T>
		bool API<T>::set_name_and_phone(T _name, T _phone)
		{
			return false;
		}

		template<>
		bool API<const char*>::set_name_and_phone(const char* _name, const char* _phone)
		{
			DATA = NULL_map;
			DATA = json_data({ "first_name", _name }, { "phone_number", _phone } );
			URL = NULL_str;
			URL = ig::settings::ENDPOINTS::set_name_and_phone;
			return send_request(URL, DATA);
		}

		template<typename T>
		bool API<T>::get_profile_data()
		{
			return false;
		}

		template<>
		bool API<const char*>::get_profile_data()
		{
			DATA = NULL_map;
			DATA = json_data();
			URL = NULL_str;
			URL = ig::settings::ENDPOINTS::get_profile_data;
			return send_request(URL, DATA);
		}

		template<typename T>
		bool API<T>::edit_profile(T _url, T _phone, T _first_name, T _biography, T _email, T _gender)
		{
			return false;
		}

		template<>
		bool API<const char*>::edit_profile(const char* _url, const char* _phone, const char* _first_name, const char* _biography, const char* _email, const char* _gender)
		{
			DATA = NULL_map;
			DATA = json_data({ "external_url", _url }, { "phone_number", _phone }, { "username", username }, { "full_name", _first_name }, { "biography", _biography }, { "email", _email }, { "gender", _gender });
			URL = NULL_str;
			URL = ig::settings::ENDPOINTS::edit_profile;
			return send_request(URL, DATA);
		}

		template<typename T>
		bool API<T>::fb_user_search(T _query)
		{
			return false;
		}
		template<>
		bool API<const char*>::fb_user_search(const char* _query)
		{
			DATA = NULL_map;
			DATA = json_data();
			*TEMP_STR_PTR = NULL_str;
			*TEMP_STR_PTR = "{query}";
			URL = NULL_str;
			URL = ig::settings::ENDPOINTS::fb_user_search;
			Utility.replace_word(URL, *TEMP_STR_PTR, _query);
			*TEMP_STR_PTR = "{rank_token}";
			Utility.replace_word(URL, *TEMP_STR_PTR, rank_token);
			return send_request(URL, DATA);
		}

		template<typename T>
		bool API<T>::search_users(T _query)
		{
			return false;
		}

		template<>
		bool API<const char*>::search_users(const char* _query)
		{
			DATA = NULL_map;
			DATA = json_data();
			*TEMP_STR_PTR = NULL_str;
			*TEMP_STR_PTR = "{sig_key}";
			URL = NULL_str;
			URL = ig::settings::ENDPOINTS::search_users;
			Utility.replace_word(URL, *TEMP_STR_PTR, ig::settings::SIG_KEY_VERSION<const char*>);
			*TEMP_STR_PTR = "{query}";
			Utility.replace_word(URL, *TEMP_STR_PTR, _query);
			*TEMP_STR_PTR = "{rank_token}";
			Utility.replace_word(URL, *TEMP_STR_PTR, rank_token);
			return send_request(URL, DATA);
		}

		template<typename T>
		bool API<T>::search_username(T _username)
		{
			return false;
		}

		template<>
		bool API<const char*>::search_username(const char* _username)
		{
			DATA = NULL_map;
			DATA = json_data();
			*TEMP_STR_PTR = NULL_str;
			*TEMP_STR_PTR = "{username}";
			URL = NULL_str;
			URL = ig::settings::ENDPOINTS::search_username;
			Utility.replace_word(URL, *TEMP_STR_PTR, _username);
			return send_request(URL, DATA);
		}

		template<typename T>
		bool API<T>::search_tags(T _query)
		{
			return false;
		}

		template<>
		bool API<const char*>::search_tags(const char* _query)
		{
			DATA = NULL_map;
			DATA = json_data();
			*TEMP_STR_PTR = NULL_str;
			*TEMP_STR_PTR = "{query}";
			URL = NULL_str;
			URL = ig::settings::ENDPOINTS::search_tags;
			Utility.replace_word(URL, *TEMP_STR_PTR, _query);
			*TEMP_STR_PTR = "{rank_token}";
			Utility.replace_word(URL, *TEMP_STR_PTR, rank_token);
			return send_request(URL, DATA);
		}

		template<typename T>
		bool API<T>::search_location(T _query, T _lat, T _lng)
		{
			return false;
		}

		template<>
		bool API<const char*>::search_location(const char* _query, const char* _lat, const char* _lng)
		{
			DATA = NULL_map;
			DATA = json_data();
			*TEMP_STR_PTR = NULL_str;
			*TEMP_STR_PTR = "{rank_token}";
			URL = NULL_str;
			URL = ig::settings::ENDPOINTS::search_location;
			Utility.replace_word(URL, *TEMP_STR_PTR, rank_token);
			*TEMP_STR_PTR = "{query}";
			Utility.replace_word(URL, *TEMP_STR_PTR, _query);
			*TEMP_STR_PTR = "{lat}";
			Utility.replace_word(URL, *TEMP_STR_PTR, _lat);
			*TEMP_STR_PTR = "{lng}";
			Utility.replace_word(URL, *TEMP_STR_PTR, _lng);
			return send_request(URL, DATA);
		}

		template<typename T>
		bool API<T>::get_user_reel(T _user_id)
		{
			return false;
		}

		template<>
		bool API<const char*>::get_user_reel(const char* _user_id)
		{
			DATA = NULL_map;
			DATA = json_data();
			*TEMP_STR_PTR = NULL_str;
			*TEMP_STR_PTR = "{}";
			URL = NULL_str;
			URL = ig::settings::ENDPOINTS::get_user_reel;
			Utility.replace_word(URL, *TEMP_STR_PTR, _user_id);
			return send_request(URL, DATA);
		}




	} //namespace API
} //namespace ig
