#pragma once

#define None ""
#define NULL_map {"", ""}

#include "ig_api_photo.h"
#include "ig_api_video.h"
#include "ig_api_story.h"

#include "ig_config.h"
#include "ig_definitions.h"
#include "ig_devices.h"
#include "ig_login.h"
#include "ig_logger.h"

#include <filesystem>
#include <fstream>
#include <random>
#include <tuple>
#include <cassert>
#include <chrono>
#include <algorithm>

namespace ig
{
	namespace API
	{
		typedef void (*log_Func_Callback)(const std::string&);
		typedef class API
		{
		public:
			//CTOR and DCTOR
			API();
			API(
				log_Func_Callback,
				const std::string& _device = None,
				const std::string& _base_path = None,
				bool _is_logged_in = false,
				const std::string& _username = nullptr,
				const std::string& _password = nullptr

			);
			~API();
			//Utility
			std::string generate_user_agent();
			//Functions
			void set_user(const std::string& _username, const std::string& _password);
			std::string get_proxy();
			void set_proxy(const std::string& _proxy);
			std::string get_proxy(const std::vector<std::string>& _proxy_list);
			bool login(const std::string& _username = nullptr, const std::string& _password = nullptr, bool _force = false, const std::string& _proxy = nullptr, bool _use_cookie = true, const std::string& _cookie_fname = nullptr, bool _is_threaded = true);
			bool check_cookie(const std::string& _username = None, const std::string& _password = None, const std::string& _proxy = None);
			bool load_cookie(const std::string& _cookie_fname = None);
			bool save_cookie(const std::string& _fname = None);
			bool save_successful_login(bool _use_cookie = false, const std::string& _cookie_fname = None);
			bool save_failed_password();
			bool save_failed_login();
			bool solve_challenge();
			std::vector<std::string> get_challenge_choices();
			bool logout();
			std::string set_proxy();
			bool send_request(const std::string& _endpoint, const std::string& _post = None, bool _login = false, bool _with_signature = true, const std::string& _headers = None);
			std::map<std::string, std::string> get_cookie_dict();
			std::string get_token();
			std::string get_user_id();
			std::string get_rank_token();
			std::map<std::string, std::string> default_data();
			std::map<std::string, std::string> json_data(const std::map<std::string, std::string>& _data = NULL_map);
			bool sync_features();
			bool auto_complete_user_list();
			bool get_timeline_feed();
			bool get_megaphone_log();
			bool expose();
			void upload_photo(const std::string& _photo, const std::string& _caption = None, const std::string& _upload_id = None, bool _from_video = false, bool _force_resize = false, const std::map<std::string, std::string>& _options = {});
			void download_photo(const std::string& _media_id, const std::string& _filename, bool _media = false, const std::string& _folder = "photos");
			void configure_photo(const std::string& _upload_id, const std::string& _photo, const std::string& _caption = "");
			void download_story(const std::string& _filename, const std::string& _story_url, const std::string& _username);
			void upload_story_photo(const std::string& _photo, const std::string& _upload_id);
			void configure_story(const std::string& _photo, const std::string& _upload_id);
			void upload_video(const std::string& _video, const std::string& _caption = None, const std::string& _upload_id = None, const std::string& _thumbnail = None, const std::map<std::string, std::string>& _options = NULL_map);
			void download_video(const std::string& _media_id, const std::string& _filename, bool _media = false, const std::string& _folder = "video");
			void configure_video(const std::string& _upload_id, const std::string& _video, const std::string& _thumbnail, const std::string& _width, const std::string& _height, const std::string& _duration, const std::string& _caption = None, const std::map<std::string, std::string>& _options = NULL_map);
			bool edit_media(const std::string& _media_id, const std::string& _captionText = None);
			bool remove_self_tag(const std::string& _media_id);
			bool media_info(const std::string& _media_id);
			bool archive_media(const std::string& _media, bool _undo = false);



			//
			int generate_devive_id(int _seed);
			int get_seed(const std::string& _username = None, const std::string& _password = None);
			std::string setup_proxy();
			bool get_self_users_following();
			std::string generate_signature(const std::string& _post);
			//


		protected:
		private:
			//Setup device and user_agent
			std::string device = nullptr;
			std::string base_path = nullptr;
			std::map<std::string, std::string> device_settings = NULL_map;
			std::string user_agent = nullptr;
			bool is_logged_in = false;
			std::string last_response = nullptr;
			int total_requests = 0;
			int total_challenge = 0;
			//Setup logging
			ig::settings::logger logger= ig::settings::logger();
			JSON_TYPE last_json = nullptr;
			std::string username = nullptr;
			std::string password = nullptr;
			std::string uuid = nullptr;
			std::string proxy = nullptr;
			std::vector<std::string> _proxy_list = std::vector<std::string>();
			ig::settings::ig_login Login = ig::settings::ig_login();
			std::string cookie_fname = nullptr;
			std::tuple<std::string, std::string> usr_pass = std::tuple<std::string, std::string>();
			std::string device_id = nullptr;
			std::string ig_username = nullptr;
			std::string token = nullptr;
			bool use_cookie = false;
			std::string cookie_username = nullptr;
			std::vector<std::string> cookie_dict;
			std::string challenge_url = nullptr;
			std::string post = nullptr;
			std::string endpoint = nullptr;
			Response response = nullptr;
			std::string resp_json = nullptr;
			std::map<std::string, std::string> cookie_map = NULL_map;
			std::string user_id = nullptr;
			ig::API::PHOTO::photo* PHOTO_ptr = nullptr;
			ig::API::STORY::story* STORY_ptr = nullptr;
			ig::API::VIDEO::video* VIDEO_ptr = nullptr;
			std::map<std::string, std::string>* DATA = new std::map<std::string, std::string>();
			std::string* URL = new std::string();
		private:
			std::fstream FILE;
			std::ifstream FILE_IN;
			std::ofstream FILE_OUT;
		//TEMP SECTION
		private:
			std::string* TEMP_STR_PTR = new std::string();
			std::vector<std::string>* TEMP_VECT_PTR = new std::vector<std::string>();
			std::map<std::string, std::string>* TEMP_MAP_PTR = new std::map<std::string, std::string>();
		}API;
	}
}

