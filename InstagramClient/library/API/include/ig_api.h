#pragma once

#define None ""
#define NULL_vec {}
#define NULL_map {}

#include "ig_api_photo.h"
#include "ig_api_video.h"
#include "ig_api_story.h"

#include "ig_config.h"
#include "ig_definitions.h"
#include "ig_devices.h"
#include "ig_login.h"
#include "ig_logger.h"
#include "ig_constants.h"
#include "ig_utility.h"

#include <filesystem>
#include <fstream>
#include <sstream>
#include <random>
#include <tuple>
#include <chrono>
#include <algorithm>
#include <ctime>
#include <locale>
#include <codecvt>
#include <map>
#include <queue>
#include <stack>

#include <cstdlib>
#include <cstdio>
#include <cstring>
#include <cassert>


#include <openssl/hmac.h>
#include <openssl/sha.h>
#include <openssl/md5.h>

namespace ig
{
	namespace API
	{
		/*
		typedef void (*log_Func_Callback)(const char*);
		typedef void (*log_Func_Callback)(std::string&&);
		*/
		typedef void (*log_Func_Callback)(const std::string&);

		template<typename T>
		class API
		{
		public:
			//CTOR and DCTOR
			API();
			API(
				log_Func_Callback,
				T _device = None,
				T _base_path = None,
				bool _is_logged_in = false,
				T _username = nullptr,
				T _password = nullptr

			);
			~API();
			//Utility
			T generate_user_agent();
			//Functions
			void set_user(T _username, T _password);
			T get_proxy();
			void set_proxy(T _proxy);
			T get_proxy(const std::vector<T>& _proxy_list);
			bool login(T _username = nullptr, T _password = nullptr, bool _force = false, T _proxy = nullptr, bool _use_cookie = true, T _cookie_fname = nullptr, bool _is_threaded = true);
			bool check_cookie(T _username = None, T _password = None, T _proxy = None);
			bool load_cookie(T _cookie_fname = None);
			bool save_cookie(T _fname = None);
			bool save_successful_login(bool _use_cookie = false, T _cookie_fname = None);
			bool save_failed_password();
			bool save_failed_login();
			bool solve_challenge();
			std::vector<T> get_challenge_choices();
			bool logout();
			T set_proxy();
			bool send_request(T _endpoint, T _post = None, bool _login = false, bool _with_signature = true, T _headers = None);
			std::map<T, T> json_data(const std::map<T, T>& _data = NULL_map);
			bool sync_features();
			bool auto_complete_user_list();
			bool get_timeline_feed();
			bool get_megaphone_log();
			bool expose();
			void upload_photo(T _photo, T _caption = None, T _upload_id = None, bool _from_video = false, bool _force_resize = false, const std::map<T, T>& _options = {});
			void download_photo(T _media_id, T _filename, bool _media = false, T _folder = "photos");
			void configure_photo(T _upload_id, T _photo, T _caption = "");
			void download_story(T _filename, T _story_url, T _username);
			void upload_story_photo(T _photo, T _upload_id);
			void configure_story(T _photo, T _upload_id);
			void upload_video(T _video, T _caption = None, T _upload_id = None, T _thumbnail = None, const std::map<T, T>& _options = NULL_map);
			void download_video(T _media_id, T _filename, bool _media = false, T _folder = "video");
			void configure_video(T _upload_id, T _video, T _thumbnail, T _width, T _height, T _duration, T _caption = None, const std::map<T, T>& _options = NULL_map);
			bool edit_media(T _media_id, T _captionText = None);
			bool remove_self_tag(T _media_id);
			bool media_info(T _media_id);
			bool archive_media(const std::map<T, T>& _media = NULL_map, bool _undo = false);
			bool delete_media(const std::map<T, T>& _media = NULL_map);
			bool change_password(T _new_password = None);
			bool explore();
			bool comment(T _media_id, T _comment_text);
			bool reply_to_comment(T _media_id, T _comment_text, T _parent_comment_id);
			bool delete_comment(T _media_id, T _comment_id);
			bool get_username_info(T _user_id);
			bool get_self_username_info();
			bool get_recent_activity();
			bool get_following_recent_activity();
			bool getv2Inbox();
			bool get_user_tags(T _user_id);
			bool tag_feed(T _tag);
			bool get_comment_likers(T _comment_id);
			bool get_media_likers(T _media_id);
			bool get_geo_media(T _user_id);
			bool get_self_geo_media();
			bool sync_from_adress_book(T _contacts);
			bool get_timeline();
			bool get_user_feed(T _user_id, T _max_id = None, T _min_timestamp = None);
			bool get_self_user_feed(T _max_id = None, T _min_timestamp = None);
			bool get_hashtag_feed(T _hashtag = None, T _max_id = None);
			bool get_location_feed(T _location_id = None, T _max_id = None);
			bool get_popular_feed();
			bool get_user_followings(T _user_id = None, T _max_id = None);
			bool get_self_users_following();
			bool get_user_followers(T _user_id = None, T _max_id = None);
			bool get_self_user_followers();
			bool like_comment(T _comment_id = None);
			bool unlike_comment(T _comment_id = None);
			bool like(T _media_id = None);
			bool unlike(T _media_id = None);
			bool get_media_comments(T _media_id = None, T _max_id = None);
			bool get_direct_share();
			bool follow(T _user_id = None);
			bool unfollow(T _user_id = None);
			bool block(T _user_id = None);
			bool unblock(T _user_id = None);
			bool user_friendship(T _user_id = None);
			bool send_direct_item(T _item_type, const std::vector<T>& _users, const std::map<T, T>& _options = {});
			bool get_liked_media(T _max_id = None);
			bool get_total_followers_or_followings(T _user_id, T _amount = None, T _which = "followers", bool _filter_private = false, bool _filter_business = false, bool _filter_verified = false, bool _usernames = false, T _to_file = None, bool _overwrite = false);


			//
			//
		private:
			T device = nullptr;
			T base_path = nullptr;
			std::map<T, std::map<T, T>> device_settings; //NULL_map
			T user_agent = nullptr;
			bool is_logged_in = false;
			T last_response = nullptr;
			int total_requests = 0;
			int total_challenge = 0;
			//Setup logging
			ig::settings::logger logger= ig::settings::logger();
			JSON_TYPE last_json = nullptr;
			T username = nullptr;
			T password = nullptr;
			T uuid = nullptr;
			T proxy = nullptr;
			std::vector<T> _proxy_list = NULL_vec;
			ig::settings::ig_login Login = ig::settings::ig_login();
			T cookie_fname = nullptr;
			std::tuple<T, T> usr_pass;
			T device_id = nullptr;
			T ig_username = nullptr;
			T token = nullptr;
			bool use_cookie = false;
			T cookie_username = nullptr;
			std::vector<T> cookie_dict = NULL_vec;
			T challenge_url = nullptr;
			T post = nullptr;
			T endpoint = nullptr;
			Response response = nullptr;
			T resp_json = nullptr;
			std::map<T, T> cookie_map = NULL_map;
			T user_id = nullptr;
			ig::API::PHOTO::photo* PHOTO_ptr = nullptr;
			ig::API::STORY::story* STORY_ptr = nullptr;
			ig::API::VIDEO::video* VIDEO_ptr = nullptr;
			std::map<T, T> DATA = NULL_map;
			T URL;
			T rank_token = nullptr;
			T signature = nullptr;
			T device_id = nullptr;
			ig::settings::utility::Utility<T> utility;
		private:
			std::fstream FILE;
			std::ifstream FILE_IN;
			std::ofstream FILE_OUT;
		//TEMP SECTION
		private:
			T* TEMP_STR_PTR;
			std::vector<T>* TEMP_VECT_PTR;
			std::map<T, T>* TEMP_MAP_PTR;
		};
	}
}

