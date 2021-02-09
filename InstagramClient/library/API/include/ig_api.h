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

			//
			int generate_devive_id(int _seed);
			int get_seed(const std::string& username = None, const std::string& password = None);
			std::string setup_proxy();
			std::string set_proxy();
			bool save_successful_login(bool use_cookie = false, const std::string& cookie_fname = None);
			bool solve_challenge();
			bool save_failed_login();
			bool save_failed_password();
			bool get_self_users_following();
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
		private:
			std::fstream FILE;
			std::ifstream FILE_IN;
			std::ofstream FILE_OUT;
		}API;
	}
}

