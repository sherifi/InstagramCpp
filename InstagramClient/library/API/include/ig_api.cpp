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
					URL->clear();
					*URL = ig::settings::ENDPOINTS::login;
					if (send_request(*URL, *data, true))
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

		bool API::load_cookie(const std::string& _cookie_fname)
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

		bool API::save_cookie(const std::string& _fname)
		{
			FILE_OUT.open(_fname);
			if (FILE_OUT.is_open())
			{
				json.dump(requests.utils.dict_from_cookiejar(session.cookies), FILE_OUT);
			}
		}

		bool API::save_successful_login(bool _use_cookie, const std::string& _cookie_fname)
		{
			is_logged_in = true;
			logger.Log(ig::settings::INFO, "Logged-in successfully as " + username + " !");
			if (_use_cookie)
			{
				save_cookie(_cookie_fname);
				logger.Log(ig::settings::INFO, "Saved cookie!");
			}
			return true;
		}

		bool API::save_failed_password()
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
				ig::settings::ig_login* Login = new ig::settings::ig_login();
				Login->delete_credentials();
				delete Login;
			}
		}

		bool API::save_failed_login()
		{
			std::cout << "Username or password is incorrect." << std::endl;
			logger.Log(ig::settings::INFO, "Username or password is incorrect.");
			ig::settings::ig_login* Login = new ig::settings::ig_login();
			Login->delete_credentials();
			delete Login;
		}

		bool API::solve_challenge()
		{
			challenge_url = last_json['challenge']['api_path'][1:];
			try
			{
				send_request(challenge_url, None, login = true, with_signature = false);
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
				send_request(challenge_url, *data, login = true);
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
				send_request(challenge_url, *data, login = True);
			}
			catch (const std::exception& e)
			{
				logger.Log(ig::settings::ERROR, e.what());
				return false;
			}
			delete data;
			delete code;
			bool worked = (("logged_in_user" : last_json) && (last_json.get("action", "") == "close") && (last_json.get("status", "") == "ok"));
			if (worked)
			{
				return true;
			}
			logger.Log(ig::settings::ERROR, "Not possible to log in. Reset and try again");
			return false;
		}

		std::vector<std::string> API::get_challenge_choices()
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

		bool API::logout()
		{
			if (!is_logged_in)
			{
				return true;
			}
			data = json.dumps({});
			URL->clear();
			*URL = ig::settings::ENDPOINTS::logout;
			is_logged_in = !send_request(*URL, data, with_signature = False);
			return (!is_logged_in);
		}

		std::string API::set_proxy()
		{
			if (proxy != None)
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

		bool API::send_request(const std::string& _endpoint, const std::string& _post, bool _login, bool _with_signature, const std::string& _headers)
		{
			if (!is_logged_in && !_login)
			{
				std::string* msg = new std::string("Not logged in!");
				logger.Log(ig::settings::FATAL, *msg);
				throw(*msg);
			}
			session.headers.update(ig::settings::REQUEST_HEADERS);
			session.headers.update({ "User-Agent", user_agent });
			if (_headers != None)
			{
				session.headers.update(_headers);
			}
			try
			{
				total_requests += 1;
				if (_post != None)
				{
					if (_with_signature)
					{
						//Only `send_direct_item` doesn't need a signature
						post = utility.generate_signature(_post);
					}
					response = session.post(ig::settings::API_URL + _endpoint, data = _post);
				}
				else
				{
					response = session.get(ig::settings::API_URL + _endpoint);
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
						login = session.post(ig::settings::API_URL + "accounts/two_factor_login/", data, allow_redirects = true);
						if (login.status_code == 200)
						{
							resp_json = json.loads(login.text);
							if(resp_json["status"] != "ok")
							{
								if(resp_json["message"])
								{
									logger.Log(ig::settings::ERROR, "Login error: " + resp_json["message"]);
								}
								else
								{
									logger.Log(ig::settings::ERROR, "Login error: \"" + resp_json["status"] +"\" status and message ." + login.text);
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
						logger.Log(ig::settings::INFO, *TEMP_str);
						if(response_data["error_type"])
						{
							TEMP_str = new std::string("Error type: " + response_data["error_type"]);
						}
						logger.Log(ig::settings::INFO, *TEMP_str);
						delete TEMP_str;
					}
				}
				//For debuging
				try
				{
					last_response = response;
					last_json = json.loads(response.text);
				}
				catch(const std::exception&)
				{
				}
				return false;
			}
		}

		std::map<std::string, std::string> API::json_data(const std::map<std::string, std::string>& _data)
		{
			TEMP_MAP_PTR->clear();
			TEMP_MAP_PTR = new std::map<std::string, std::string>(_data);
			if (_data.empty())
			{
				*TEMP_MAP_PTR = NULL_map;
			}
			*TEMP_MAP_PTR = utility.default_data();
			return json.dummps(*TEMP_MAP_PTR);
		}

		bool API::sync_features()
		{
			DATA->clear();
			*DATA = json_data({ {"id", user_id}, {"experiments", ig::settings::EXPERIMENTS[0]} });
			URL->clear();
			*URL = ig::settings::ENDPOINTS::sync_features;
			return send_request(*URL, *DATA);
		}

		bool API::auto_complete_user_list()
		{
			URL->clear();
			*URL = ig::settings::ENDPOINTS::auto_complete_user_list;
			return send_request(*URL);
		}

		bool API::get_timeline_feed()
		{
			//RETURN 8 medias from timeline feed of logged user.
			DATA->clear();
			*DATA = json_data({ { "is_prefetch", "0"}, {"is_pull_to_refresh", "0"} });
			URL->clear();
			*URL = ig::settings::ENDPOINTS::get_timeline_feed;
			TEMP_MAP_PTR->clear();
			return send_request(*URL, *DATA, false , false, "");
		}

		bool API::get_megaphone_log()
		{
			URL->clear();
			*URL = ig::settings::ENDPOINTS::get_megaphone_log;
			return send_request(*URL);
		}

		bool API::expose()
		{
			DATA->clear();
			*DATA = json_data({ {"id", user_id}, {"experiments", ig::settings::EXPERIMENTS[0]} });
			URL->clear();
			*URL = ig::settings::ENDPOINTS::expose;
			return send_request(*URL, *TEMP_MAP_PTR);
		}

		/*
		Upload photo to Instagram
			@param photo         Path to photo file(String)
			@param caption       Media description(String)
			@param upload_id     Unique upload_id(String).When None, then generate automatically
			@param from_video    A flag that signals whether the photo is loaded from the video or by itsel(Boolean, DEPRECATED: not used)
			@param force_resize  Force photo resize(Boolean)
			@param options       Object with difference options, e.g.configure_timeout, rename(Dict)
			Designed to reduce the number of function arguments!
			This is the simplest request object.
			@return Boolean
		*/
		void API::upload_photo(const std::string& _photo, const std::string& _caption, const std::string& _upload_id, bool _from_video, bool _force_resize, const std::map<std::string, std::string>& _options)
		{
			PHOTO_ptr = new ig::API::PHOTO::photo();
			PHOTO_ptr->upload_photo(_photo, _caption, _upload_id, _from_video, _force_resize, _options);
			PHOTO_ptr = nullptr;
		}

		void API::download_photo(const std::string& _media_id, const std::string& _filename, bool _media, const std::string& _folder)
		{
			PHOTO_ptr = new ig::API::PHOTO::photo();
			PHOTO_ptr->download_photo(_media_id, _filename, _media, _folder);
			PHOTO_ptr = nullptr;
		}

		void API::configure_photo(const std::string& _upload_id, const std::string& _photo, const std::string& _caption)
		{
			PHOTO_ptr = new ig::API::PHOTO::photo();
			PHOTO_ptr->configure_photo(_upload_id, _photo, _caption);
			PHOTO_ptr = nullptr;
		}

		void API::download_story(const std::string& _filename, const std::string& _story_url, const std::string& _username)
		{
			STORY_ptr = new ig::API::STORY::story();
			STORY_ptr->download_story(_filename, _story_url, _username);
			STORY_ptr = nullptr;
		}

		void API::upload_story_photo(const std::string& _photo, const std::string& _upload_id)
		{
			STORY_ptr = new ig::API::STORY::story();
			STORY_ptr->upload_story_photo(_photo, _upload_id);
			STORY_ptr = nullptr;
		}

		void API::configure_story(const std::string& _photo, const std::string& _upload_id)
		{
			STORY_ptr = new ig::API::STORY::story();
			STORY_ptr->configure_story(_photo, _upload_id);
			STORY_ptr = nullptr;
		}

		/*
		Upload video to Instagram
			@param video      Path to video file(String)
			@param caption    Media description(String)
			@param upload_id  Unique upload_id(String).When None, then generate automatically
			@param thumbnail  Path to thumbnail for video(String).When None, then thumbnail is generate automatically
			@param options    Object with difference options, e.g.configure_timeout, rename_thumbnail, rename(Dict)
			Designed to reduce the number of function arguments!
			This is the simplest request object.
			@return           Object with state of uploading to Instagram(or False)
		*/

		void API::upload_video(const std::string& _video, const std::string& _caption, const std::string& _upload_id, const std::string& _thumbnail, const std::map<std::string, std::string>& _options)
		{
			VIDEO_ptr = new ig::API::VIDEO::video();
			VIDEO_ptr->upload_video(_video, _caption, _upload_id, _thumbnail, _options);
			VIDEO_ptr = nullptr;
		}

		void API::download_video(const std::string& _media_id, const std::string& _filename, bool _media, const std::string& _folder)
		{
			VIDEO_ptr = new ig::API::VIDEO::video();
			VIDEO_ptr->download_video(_media_id, _filename, _media, _folder);
			VIDEO_ptr = nullptr;
		}

		/*
		Post Configure Video (send caption, thumbnail and more else to Instagram)
			@param upload_id  Unique upload_id(String).Received from "upload_video"
			@param video      Path to video file(String)
			@param thumbnail  Path to thumbnail for video(String).When None, then thumbnail is generate automatically
			@param width      Width in px(Integer)
			@param height     Height in px(Integer)
			@param duration   Duration in seconds(Integer)
			@param caption    Media description(String)
			@param options    Object with difference options, e.g.configure_timeout, rename_thumbnail, rename(Dict)
			Designed to reduce the number of function arguments!
			This is the simplest request object.
		*/
		void API::configure_video(const std::string& _upload_id, const std::string& _video, const std::string& _thumbnail, const std::string& _width, const std::string& _height, const std::string& _duration, const std::string& _caption, const std::map<std::string, std::string>& _options)
		{
			VIDEO_ptr = new ig::API::VIDEO::video();
			VIDEO_ptr->configure_video(_upload_id, _video, _thumbnail, _width, _height, _duration, _caption, _options);
			VIDEO_ptr = nullptr;
		}

		bool API::edit_media(const std::string& _media_id, const std::string& _captionText)
		{
			DATA->clear();
			*DATA = json_data({ {"caption_text", _captionText} });
			URL->clear();
			TEMP_STR_PTR->clear();
			*TEMP_STR_PTR = "{media_id}";
			*URL = ig::settings::ENDPOINTS::edit_media;
			URL->replace(URL->find(*TEMP_STR_PTR), TEMP_STR_PTR->length(), _media_id);
			return send_request(*URL, *DATA);
		}

		bool API::remove_self_tag(const std::string& _media_id)
		{
			DATA->clear();
			*DATA = json_data();
			URL->clear();
			TEMP_STR_PTR->clear();
			*TEMP_STR_PTR = "{media_id}";
			*URL = ig::settings::ENDPOINTS::remove_self_tag;
			URL->replace(URL->find(*TEMP_STR_PTR), TEMP_STR_PTR->length(), _media_id);
			return send_request(*URL, *DATA);
		}

		bool API::media_info(const std::string& _media_id)
		{
			URL->clear();
			TEMP_STR_PTR->clear();
			*TEMP_STR_PTR = "{media_id}";
			*URL = ig::settings::ENDPOINTS::media_info;
			URL->replace(URL->find(*TEMP_STR_PTR), TEMP_STR_PTR->length(), _media_id);
			return send_request(*URL);
		}

		bool API::archive_media(const std::map<std::string, std::string>& _media, bool _undo)
		{
			DATA->clear();
			*DATA = json_data({ {"media_id", _media.at("id")} });
			URL->clear();
			TEMP_STR_PTR->clear();
			*TEMP_STR_PTR = "{media_id}";
			*URL = ig::settings::ENDPOINTS::archive_media;
			URL->replace(URL->find(*TEMP_STR_PTR), TEMP_STR_PTR->length(), _media.at("id"));
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
			URL->replace(URL->find(*TEMP_STR_PTR), TEMP_STR_PTR->length(), *action);
			delete action;
			*TEMP_STR_PTR = "{media_type}";
			URL->replace(URL->find(*TEMP_STR_PTR), TEMP_STR_PTR->length(), _media.at("media_type"));
			return send_request(*URL, *DATA);
		}

		bool API::delete_media(const std::map<std::string, std::string>& _media)
		{
			DATA->clear();
			*DATA = json_data({ {"media_id", _media.at("id")} });
			URL->clear();
			TEMP_STR_PTR->clear();
			*TEMP_STR_PTR = "{media_id}";
			*URL = ig::settings::ENDPOINTS::delete_media;
			URL->replace(URL->find(*TEMP_STR_PTR), TEMP_STR_PTR->length(), _media.at("id"));
			return send_request(*URL, *DATA);
		}

		bool API::change_password(const std::string& _new_password)
		{
			DATA->clear();
			*DATA = json_data({ {"old_password", password}, {"old_password1", _new_password}, {"old_password2", _new_password} });
			URL->clear();
			*URL = ig::settings::ENDPOINTS::change_password;
			return send_request(*URL, *DATA);
		}

		bool API::explore()
		{
			URL->clear();
			*URL = ig::settings::ENDPOINTS::explore;
			return send_request(*URL);
		}

		bool API::comment(const std::string& _media_id, const std::string& _comment_text)
		{
			DATA->clear();
			*DATA = json_data({ {"comment_text", _comment_text} });
			URL->clear();
			TEMP_STR_PTR->clear();
			*TEMP_STR_PTR = "{media_id}";
			*URL = ig::settings::ENDPOINTS::comment;
			URL->replace(URL->find(*TEMP_STR_PTR), TEMP_STR_PTR->length(), _media_id);
			return send_request(*URL, *DATA);
		}

		bool API::reply_to_comment(const std::string& _media_id, const std::string& _comment_text, const std::string& _parent_comment_id)
		{
			DATA->clear();
			*DATA = json_data({ {"comment_text", _comment_text}, {"replied_to_comment_id", _parent_comment_id} });
			URL->clear();
			TEMP_STR_PTR->clear();
			*TEMP_STR_PTR = "{media_id}";
			*URL = ig::settings::ENDPOINTS::reply_to_comment;
			URL->replace(URL->find(*TEMP_STR_PTR), TEMP_STR_PTR->length(), _media_id);
			return send_request(*URL, *DATA);
		}

		bool API::delete_comment(const std::string& _media_id, const std::string& _comment_id)
		{
			DATA->clear();
			*DATA = json_data();
			URL->clear();
			TEMP_STR_PTR->clear();
			*TEMP_STR_PTR = "{media_id}";
			*URL = ig::settings::ENDPOINTS::delete_comment;
			URL->replace(URL->find(*TEMP_STR_PTR), TEMP_STR_PTR->length(), _media_id);
			*TEMP_STR_PTR = "{comment_id}";
			URL->replace(URL->find(*TEMP_STR_PTR), TEMP_STR_PTR->length(), _comment_id);
			return send_request(*URL, *DATA);
		}

		bool API::get_username_info(const std::string& _user_id)
		{
			DATA->clear();
			*DATA = json_data();
			URL->clear();
			TEMP_STR_PTR->clear();
			*TEMP_STR_PTR = "{user_id}";
			*URL = ig::settings::ENDPOINTS::get_username_info;
			URL->replace(URL->find(*TEMP_STR_PTR), TEMP_STR_PTR->length(), _user_id);
			return send_request(*URL, *DATA);
		}

		bool API::get_self_username_info()
		{
			get_username_info(user_id);
		}

		bool API::get_recent_activity()
		{
			DATA->clear();
			*DATA = json_data();
			URL->clear();
			*URL = ig::settings::ENDPOINTS::get_recent_activity;
			return send_request(*URL, *DATA);
		}

		bool API::get_following_recent_activity()
		{
			DATA->clear();
			*DATA = json_data();
			URL->clear();
			*URL = ig::settings::ENDPOINTS::get_following_recent_activity;
			return send_request(*URL, *DATA);
		}

		bool API::getv2Inbox()
		{
			DATA->clear();
			*DATA = json_data();
			URL->clear();
			*URL = ig::settings::ENDPOINTS::getv2Inbox;
			return send_request(*URL, *DATA);
		}

		bool API::get_user_tags(const std::string& _user_id)
		{
			DATA->clear();
			*DATA = json_data();
			URL->clear();
			TEMP_STR_PTR->clear();
			*TEMP_STR_PTR = "{user_id}";
			*URL = ig::settings::ENDPOINTS::get_user_tags;
			URL->replace(URL->find(*TEMP_STR_PTR), TEMP_STR_PTR->length(), _user_id);
			*TEMP_STR_PTR = "{rank_token}";
			URL->replace(URL->find(*TEMP_STR_PTR), TEMP_STR_PTR->length(), rank_token);
			return send_request(*URL, *DATA);
		}

		bool API::tag_feed(const std::string& _tag)
		{
			DATA->clear();
			*DATA = json_data();
			URL->clear();
			TEMP_STR_PTR->clear();
			*TEMP_STR_PTR = "{tag}";
			*URL = ig::settings::ENDPOINTS::tag_feed;
			URL->replace(URL->find(*TEMP_STR_PTR), TEMP_STR_PTR->length(), _tag);
			*TEMP_STR_PTR = "{rank_token}";
			URL->replace(URL->find(*TEMP_STR_PTR), TEMP_STR_PTR->length(), rank_token);
			return send_request(*URL, *DATA);
		}

		bool API::get_comment_likers(const std::string& _comment_id)
		{
			DATA->clear();
			*DATA = json_data();
			URL->clear();
			TEMP_STR_PTR->clear();
			*TEMP_STR_PTR = "{comment_id}";
			*URL = ig::settings::ENDPOINTS::get_comment_likers;
			URL->replace(URL->find(*TEMP_STR_PTR), TEMP_STR_PTR->length(), _comment_id);
			return send_request(*URL, *DATA);
		}

		bool API::get_media_likers(const std::string& _media_id)
		{
			DATA->clear();
			*DATA = json_data();
			URL->clear();
			TEMP_STR_PTR->clear();
			*TEMP_STR_PTR = "{media_id}";
			*URL = ig::settings::ENDPOINTS::get_comment_likers;
			URL->replace(URL->find(*TEMP_STR_PTR), TEMP_STR_PTR->length(), _media_id);
			return send_request(*URL, *DATA);
		}

		bool API::get_geo_media(const std::string& _user_id)
		{
			DATA->clear();
			*DATA = json_data();
			URL->clear();
			TEMP_STR_PTR->clear();
			*TEMP_STR_PTR = "{user_id}";
			*URL = ig::settings::ENDPOINTS::get_geo_media;
			URL->replace(URL->find(*TEMP_STR_PTR), TEMP_STR_PTR->length(), _user_id);
			return send_request(*URL, *DATA);
		}

		bool API::get_self_geo_media()
		{
			get_geo_media(user_id);
		}

		bool API::sync_from_adress_book(const std::string& _contacts)
		{
			DATA->clear();
			*DATA = json_data({ {"contacts", json.dumps(_contacts)} });
			URL->clear();
			*URL = ig::settings::ENDPOINTS::sync_from_adress_book;
			return send_request(*URL, *DATA);
		}

		bool API::get_timeline()
		{
			URL->clear();
			*TEMP_STR_PTR = "{rank_token}";
			*URL = ig::settings::ENDPOINTS::get_timeline;
			URL->replace(URL->find(*TEMP_STR_PTR), TEMP_STR_PTR->length(), rank_token);
			return send_request(*URL, *DATA);
		}

		bool API::get_user_feed(const std::string& _user_id, const std::string& _max_id, const std::string& _min_timestamp)
		{
			DATA->clear();
			*DATA = json_data();
			URL->clear();
			TEMP_STR_PTR->clear();
			*TEMP_STR_PTR = "{user_id}";
			*URL = ig::settings::ENDPOINTS::get_user_feed;
			URL->replace(URL->find(*TEMP_STR_PTR), TEMP_STR_PTR->length(), _user_id);
			*TEMP_STR_PTR = "{max_id}";
			URL->replace(URL->find(*TEMP_STR_PTR), TEMP_STR_PTR->length(), _max_id);
			*TEMP_STR_PTR = "{min_timestamp}";
			URL->replace(URL->find(*TEMP_STR_PTR), TEMP_STR_PTR->length(), _min_timestamp);
			*TEMP_STR_PTR = "{rank_token}";
			URL->replace(URL->find(*TEMP_STR_PTR), TEMP_STR_PTR->length(), rank_token);
			return send_request(*URL, *DATA);
		}

		bool API::get_self_user_feed(const std::string& _max_id, const std::string& _min_timestamp)
		{
			get_user_feed(user_id, _max_id, _min_timestamp);
		}

		bool API::get_hashtag_feed(const std::string& _hashtag, const std::string& _max_id)
		{
			DATA->clear();
			*DATA = json_data();
			URL->clear();
			TEMP_STR_PTR->clear();
			*TEMP_STR_PTR = "{hashtag}";
			*URL = ig::settings::ENDPOINTS::get_hashtag_feed;
			URL->replace(URL->find(*TEMP_STR_PTR), TEMP_STR_PTR->length(), _hashtag);
			*TEMP_STR_PTR = "{max_id}";
			URL->replace(URL->find(*TEMP_STR_PTR), TEMP_STR_PTR->length(), _max_id);
			*TEMP_STR_PTR = "{rank_token}";
			URL->replace(URL->find(*TEMP_STR_PTR), TEMP_STR_PTR->length(), rank_token);
			return send_request(*URL, *DATA);
		}

		bool API::get_location_feed(const std::string& _location_id, const std::string& _max_id)
		{
			DATA->clear();
			*DATA = json_data();
			URL->clear();
			TEMP_STR_PTR->clear();
			*TEMP_STR_PTR = "{location_id}";
			*URL = ig::settings::ENDPOINTS::get_location_feed;
			URL->replace(URL->find(*TEMP_STR_PTR), TEMP_STR_PTR->length(), _location_id);
			*TEMP_STR_PTR = "{max_id}";
			URL->replace(URL->find(*TEMP_STR_PTR), TEMP_STR_PTR->length(), _max_id);
			*TEMP_STR_PTR = "{rank_token}";
			URL->replace(URL->find(*TEMP_STR_PTR), TEMP_STR_PTR->length(), rank_token);
			return send_request(*URL, *DATA);
		}

		bool API::get_popular_feed()
		{
			DATA->clear();
			*DATA = json_data();
			URL->clear();
			TEMP_STR_PTR->clear();
			*URL = ig::settings::ENDPOINTS::get_popular_feed;
			*TEMP_STR_PTR = "{rank_token}";
			URL->replace(URL->find(*TEMP_STR_PTR), TEMP_STR_PTR->length(), rank_token);
			return send_request(*URL, *DATA);
		}

		bool API::get_user_followings(const std::string& _user_id, const std::string& _max_id)
		{
			DATA->clear();
			*DATA = json_data();
			URL->clear();
			TEMP_STR_PTR->clear();
			*TEMP_STR_PTR = "{user_id}";
			*URL = ig::settings::ENDPOINTS::get_user_followings;
			URL->replace(URL->find(*TEMP_STR_PTR), TEMP_STR_PTR->length(), _user_id);
			*TEMP_STR_PTR = "{max_id}";
			URL->replace(URL->find(*TEMP_STR_PTR), TEMP_STR_PTR->length(), _max_id);
			*TEMP_STR_PTR = "{sig_key}";
			URL->replace(URL->find(*TEMP_STR_PTR), TEMP_STR_PTR->length(), ig::settings::SIG_KEY_VERSION);
			*TEMP_STR_PTR = "{rank_token}";
			URL->replace(URL->find(*TEMP_STR_PTR), TEMP_STR_PTR->length(), rank_token);
			return send_request(*URL, *DATA);
		}

		bool API::get_self_users_following()
		{
			get_user_followings(user_id);
		}

		bool API::get_user_followers(const std::string& _user_id, const std::string& _max_id)
		{
			DATA->clear();
			*DATA = json_data();
			URL->clear();
			TEMP_STR_PTR->clear();
			*TEMP_STR_PTR = "{user_id}";
			*URL = ig::settings::ENDPOINTS::get_user_followers;
			URL->replace(URL->find(*TEMP_STR_PTR), TEMP_STR_PTR->length(), _user_id);
			*TEMP_STR_PTR = "{rank_token}";
			URL->replace(URL->find(*TEMP_STR_PTR), TEMP_STR_PTR->length(), rank_token);
			if (_max_id != None)
			{
				URL->append("&max_id={max_id}");
			}
			*TEMP_STR_PTR = "{max_id}";
			URL->replace(URL->find(*TEMP_STR_PTR), TEMP_STR_PTR->length(), _max_id);
			return send_request(*URL, *DATA);
		}

		bool API::get_self_user_followers()
		{
			get_user_followers(user_id);
		}

		bool API::like_comment(const std::string& _comment_id)
		{
			DATA->clear();
			*DATA = json_data();
			URL->clear();
			TEMP_STR_PTR->clear();
			*TEMP_STR_PTR = "{comment_id}";
			*URL = ig::settings::ENDPOINTS::like_comment;
			URL->replace(URL->find(*TEMP_STR_PTR), TEMP_STR_PTR->length(), _comment_id);
			return send_request(*URL, *DATA);
		}

		bool API::unlike_comment(const std::string& _comment_id)
		{
			DATA->clear();
			*DATA = json_data();
			URL->clear();
			TEMP_STR_PTR->clear();
			*TEMP_STR_PTR = "{comment_id}";
			*URL = ig::settings::ENDPOINTS::unlike_comment;
			URL->replace(URL->find(*TEMP_STR_PTR), TEMP_STR_PTR->length(), _comment_id);
			return send_request(*URL, *DATA);
		}

		bool API::like(const std::string& _media_id)
		{
			DATA->clear();
			*DATA = json_data({ {"media_id", _media_id} });
			URL->clear();
			TEMP_STR_PTR->clear();
			*TEMP_STR_PTR = "{media_id}";
			*URL = ig::settings::ENDPOINTS::like;
			URL->replace(URL->find(*TEMP_STR_PTR), TEMP_STR_PTR->length(), _media_id);
			return send_request(*URL, *DATA);
		}

		bool API::unlike(const std::string& _media_id)
		{
			DATA->clear();
			*DATA = json_data({ {"media_id", _media_id} });
			URL->clear();
			TEMP_STR_PTR->clear();
			*TEMP_STR_PTR = "{media_id}";
			*URL = ig::settings::ENDPOINTS::unlike;
			URL->replace(URL->find(*TEMP_STR_PTR), TEMP_STR_PTR->length(), _media_id);
			return send_request(*URL, *DATA);
		}

		bool API::get_media_comments(const std::string& _media_id, const std::string& _max_id)
		{
			DATA->clear();
			*DATA = json_data();
			URL->clear();
			TEMP_STR_PTR->clear();
			*TEMP_STR_PTR = "{media_id}";
			*URL = ig::settings::ENDPOINTS::get_media_comments;
			URL->replace(URL->find(*TEMP_STR_PTR), TEMP_STR_PTR->length(), _media_id);
			if (_max_id != None)
			{
				URL->append("?max_id={max_id}");
			}
			*TEMP_STR_PTR = "{max_id}";
			URL->replace(URL->find(*TEMP_STR_PTR), TEMP_STR_PTR->length(), _max_id);
			return send_request(*URL, *DATA);
		}

		bool API::get_direct_share()
		{
			DATA->clear();
			*DATA = json_data();
			URL->clear();
			*URL = ig::settings::ENDPOINTS::get_direct_share;
			return send_request(*URL, *DATA);
		}

		bool API::follow(const std::string& _user_id)
		{
			DATA->clear();
			*DATA = json_data({ {"user_id", _user_id} });
			URL->clear();
			TEMP_STR_PTR->clear();
			*TEMP_STR_PTR = "{user_id}";
			*URL = ig::settings::ENDPOINTS::follow;
			URL->replace(URL->find(*TEMP_STR_PTR), TEMP_STR_PTR->length(), _user_id);
			return send_request(*URL, *DATA);
		}

		bool API::unfollow(const std::string& _user_id)
		{
			DATA->clear();
			*DATA = json_data({ {"user_id", _user_id} });
			URL->clear();
			TEMP_STR_PTR->clear();
			*TEMP_STR_PTR = "{user_id}";
			*URL = ig::settings::ENDPOINTS::unfollow;
			URL->replace(URL->find(*TEMP_STR_PTR), TEMP_STR_PTR->length(), _user_id);
			return send_request(*URL, *DATA);
		}

		bool API::block(const std::string& _user_id)
		{
			DATA->clear();
			*DATA = json_data({ {"user_id", _user_id} });
			URL->clear();
			TEMP_STR_PTR->clear();
			*TEMP_STR_PTR = "{user_id}";
			*URL = ig::settings::ENDPOINTS::block;
			URL->replace(URL->find(*TEMP_STR_PTR), TEMP_STR_PTR->length(), _user_id);
			return send_request(*URL, *DATA);
		}

		bool API::unblock(const std::string& _user_id)
		{
			DATA->clear();
			*DATA = json_data({ {"user_id", _user_id} });
			URL->clear();
			TEMP_STR_PTR->clear();
			*TEMP_STR_PTR = "{user_id}";
			*URL = ig::settings::ENDPOINTS::unblock;
			URL->replace(URL->find(*TEMP_STR_PTR), TEMP_STR_PTR->length(), _user_id);
			return send_request(*URL, *DATA);
		}

		bool API::user_friendship(const std::string& _user_id)
		{
			DATA->clear();
			*DATA = json_data({ {"user_id", _user_id} });
			URL->clear();
			TEMP_STR_PTR->clear();
			*TEMP_STR_PTR = "{user_id}";
			*URL = ig::settings::ENDPOINTS::user_friendship;
			URL->replace(URL->find(*TEMP_STR_PTR), TEMP_STR_PTR->length(), _user_id);
			return send_request(*URL, *DATA);
		}

		bool API::send_direct_item(const std::string& _item_type, const std::vector<std::string>& _users, const std::map<std::string, std::string>& _options)
		{
			DATA->clear();
			*DATA = json_data({ {"client_context", ig::settings::uuid::generate_uuid_v4()}, {"action", "send_item"} });
			std::map<std::string, std::string>* headers = new std::map<std::string, std::string>();
			std::map<std::string, std::vector<std::string>>* recipients = new std::map<std::string, std::vector<std::string>>;
			*recipients = _prepare_recipients(_users, _options.at("thread"), false);
			if (recipients->empty())
			{
				return false;
			}
			DATA->at("recipient_users") = recipients->at("users");
			if (recipients->at("thread"))
			{
				DATA->at("thread_ids") = recipients->at("thread");
			}
			*DATA = default_data();
			TEMP_STR_PTR->clear();
			*TEMP_STR_PTR = "{}";
			*URL = ig::settings::ENDPOINTS::send_direct_item;
			URL->replace(URL->find(*TEMP_STR_PTR), TEMP_STR_PTR->length(), _item_type);
			std::string* text = options.get("text", "");
			if (_item_type == "link")
			{
				DATA->at("link_text") = *text;
				DATA->at("link_urls") = json.dumps(_options.at("ursl"));
			}
			else if (_item_type == "text")
			{
				DATA->at("text") = *text;
			}
			else if (_item_type == "media_share")
			{
				DATA->at("text") = *text;
				DATA->at("media_type") = options.get("media_type", "photo");
				DATA->at("media_id") = options.get("media_id", "");
			}
			else if (_item_type == "hashtag")
			{
				DATA->at("text") = *text;
				DATA->at("hashtag") = options.get("hashtag", "");
			}
			else if (_item_type == "profile")
			{
				DATA->at("text") = *text;
				DATA->at("profile_user_id") = options.get("profile_user_id", "");
			}
			else if (_item_type == "photo")
			{
				*URL = "direct_v2/threads/broadcast/upload_photo/";
				std::string* filepath = new std::string();
				*filepath = _options.at("filepath");
				std::string* upload_id = new std::string();
				auto x = time(NULL);
				*upload_id = std::to_string(x * 1000);
				if (std::filesystem::exists(*filepath))
				{
					FILE_IN.open(*filepath, std::ios::binary);
					if (FILE_IN.is_open())
					{
						char TEMP_buff[4096];
						auto photo = FILE_IN.read(TEMP_buff, 4096);
						DATA->at("photo") = ("direct_temp_photo_" + *upload_id + ".jpg", photo, "application/octet-stream", { "Content-Transfer-Encoding": "binary" });
					}
					auto m = MultipartEncoder(*DATA, boundary = uuid);
					*DATA = std::to_string(m);
					headers.update({ "Content-type", m.content_type });
				}
			}
			return send_request(*URL, *DATA, with_signature = false, headers = headers);
			delete recipients;
			delete headers;
		}

		


	} //namespace API
} //namespace ig
