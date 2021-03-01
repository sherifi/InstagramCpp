#pragma once

#define NULL_str ""
#define NULL_vec {}
#define NULL_map {}
#define HEADERS_COUNT 16
#define RECIPIENTS_COUNT 16
#define RESULT_COUNT 16

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
#include <limits>

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
		private:
			friend class ig_api_phot
		public:
			//CTOR and DCTOR
			API();
			~API();
			API(
				log_Func_Callback,
				T _device = NULL_str,
				T _base_path = NULL_str,
				bool _is_logged_in = false,
				T _username = nullptr,
				T _password = nullptr
			);
			//Utility
			T generate_user_agent();
			//Functions
			void set_user(T _username, T _password);
			T get_proxy();
			void set_proxy(T _proxy);
			T get_proxy(const std::vector<T>& _proxy_list);
			bool login(T _username = nullptr, T _password = nullptr, bool _force = false, T _proxy = nullptr, bool _use_cookie = true, T _cookie_fname = nullptr, bool _is_threaded = true);
			bool check_cookie(T _username = NULL_str, T _password = NULL_str, T _proxy = NULL_str);
			bool load_cookie(T _cookie_fname = NULL_str);
			bool save_cookie(T _fname = NULL_str);
			bool save_successful_login(bool _use_cookie = false, T _cookie_fname = NULL_str);
			bool save_failed_password();
			bool save_failed_login();
			bool solve_challenge();
			T* get_challenge_choices();
			bool logout();
			T setup_proxy();
			bool send_request(T _endpoint, T _post = NULL_str, bool _login = false, bool _with_signature = true, T _headers = NULL_str);
			std::map<T, T> json_data(const std::map<T, T>& _data = NULL_map);
			bool sync_features();
			bool auto_complete_user_list();
			bool get_timeline_feed();
			bool get_megaphone_log();
			bool expose();
			void upload_photo(T _photo, T _caption = NULL_str, T _upload_id = NULL_str, bool _from_video = false, bool _force_resize = false, const std::map<T, T>& _options = {});
			void download_photo(T _media_id, T _filename, bool _media = false, T _folder = "photos");
			void configure_photo(T _upload_id, T _photo, T _caption = "");
			void download_story(T _filename, T _story_url, T _username);
			void upload_story_photo(T _photo, T _upload_id);
			void configure_story(T _photo, T _upload_id);
			void upload_video(T _video, T _caption = NULL_str, T _upload_id = NULL_str, T _thumbnail = NULL_str, const std::map<T, T>& _options = NULL_map);
			void download_video(T _media_id, T _filename, bool _media = false, T _folder = "video");
			void configure_video(T _upload_id, T _video, T _thumbnail, T _width, T _height, T _duration, T _caption = NULL_str, const std::map<T, T>& _options = NULL_map);
			bool edit_media(T _media_id, T _captionText = NULL_str);
			bool remove_self_tag(T _media_id);
			bool media_info(T _media_id);
			bool archive_media(const std::map<T, T>& _media = NULL_map, bool _undo = false);
			bool delete_media(const std::map<T, T>& _media = NULL_map);
			bool change_password(T _new_password = NULL_str);
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
			bool get_user_feed(T _user_id, T _max_id = NULL_str, T _min_timestamp = NULL_str);
			bool get_self_user_feed(T _max_id = NULL_str, T _min_timestamp = NULL_str);
			bool get_hashtag_feed(T _hashtag = NULL_str, T _max_id = NULL_str);
			bool get_location_feed(T _location_id = NULL_str, T _max_id = NULL_str);
			bool get_popular_feed();
			bool get_user_followings(T _user_id = NULL_str, T _max_id = NULL_str);
			bool get_self_users_following();
			bool get_user_followers(T _user_id = NULL_str, T _max_id = NULL_str);
			bool get_self_user_followers();
			bool like_comment(T _comment_id = NULL_str);
			bool unlike_comment(T _comment_id = NULL_str);
			bool like(T _media_id = NULL_str);
			bool unlike(T _media_id = NULL_str);
			bool get_media_comments(T _media_id = NULL_str, T _max_id = NULL_str);
			bool get_direct_share();
			bool follow(T _user_id = NULL_str);
			bool unfollow(T _user_id = NULL_str);
			bool block(T _user_id = NULL_str);
			bool unblock(T _user_id = NULL_str);
			bool user_friendship(T _user_id = NULL_str);
			bool send_direct_item(T _item_type, const std::vector<T>& _users, const std::map<T, T>& _options = {});
			bool send_direct_item(T _item_type, T _users[], std::pair<T,T> _options[]);
			bool get_total_liked_media(T _max_id = NULL_str);
			bool get_total_followers_or_followings(T _user_id, T _amount = NULL_str, T _which = "followers", bool _filter_private = false, bool _filter_business = false, bool _filter_verified = false, bool _usernames = false, T _to_file = NULL_str, bool _overwrite = false);
			bool get_total_followers(T _user_id, T _amount = NULL_str);
			bool get_total_followings(T _user_id, T _amount = NULL_str);
			bool get_total_user_feed(T _user_id, T _min_timestamp = NULL_str);
			bool get_last_user_feed(T _user_id, T _amount, T _min_timestamp = NULL_str);
			bool get_total_hashtag_feed(T _hashtag_str, T _amount = "100");
			bool get_total_self_user_feed(T _min_timestamp = NULL_str);
			bool get_total_self_followers();
			bool get_total_self_followings();
			bool get_total_liked_media(T _scan_rate = "1");
			bool remove_profile_picture();
			bool set_private_account();
			bool set_public_account();
			bool set_name_and_phone(T _name = NULL_str, T _phone = NULL_str);
			bool get_profile_data();
			bool edit_profile(T _url, T _phone, T _first_name, T _biography, T _email, T _gender);
			bool fb_user_search(T _query);
			bool search_users(T _query);
			bool search_username(T _username);
			bool search_tags(T _query);
			bool search_location(T _query = NULL_str, T _lat = NULL_str, T _lng = NULL_str);
			bool get_user_reel(T _user_id);
			bool get_users_reel(std::vector<T> _user_ids);
			bool see_reels(std::vector<T> _reels);
			bool get_user_stories(T _user_id);
			bool get_self_story_viewers(T _story_id);
			bool get_tv_suggestions();
			bool get_hashtag_stories(T _hashtag);
			bool follow_hashtag(T _hashtag);
			bool unfollow_hashtag(T _hashtag);
			bool get_tags_followed_by_user(T _user_id);
			bool get_hashtag_sections(T _hashtag);
			bool get_media_insight(T _media_id);
			bool get_self_insight();
			bool save_media(T _media_id);
			bool unsave_media(T _media_id);
			bool get_saved_medias();
			bool mute_user(T _user, bool _mute_story = false, bool _mute_posts = false);
			bool unmute_user(T _user, bool _unmute_story = false, bool _unmute_posts = false);
			bool get_pending_friendships();
			bool approve_pending_friendship(T _user_id);
			bool reject_pending_friendship(T _user_id);
			bool get_pending_inbox();
			bool approve_pending_thread(T _thread_id);



		private:
			//bool login = false;
			bool with_signature = false;
			bool use_cookie = false;
			bool is_logged_in = false;
			int total_requests = 0;
			int total_challenge = 0;
			T device = nullptr;
			T base_path = nullptr;
			T user_agent = nullptr;
			T last_response = nullptr;
			T username = nullptr;
			T password = nullptr;
			T uuid = nullptr;
			T proxy = nullptr;
			T cookie_fname = nullptr;
			T device_id = nullptr;
			T ig_username = nullptr;
			T token = nullptr;
			T data = nullptr;
			T cookie_username = nullptr;
			T challenge_url = nullptr;
			T post = nullptr;
			T endpoint = nullptr;
			T resp_json = nullptr;
			T user_id = nullptr;
			T URL = nullptr;
			T rank_token = nullptr;
			T signature = nullptr;
			T device_id = nullptr;
			T max_id = nullptr;
			std::tuple<T, T> usr_pass;
			std::vector<T> _proxy_list = NULL_vec;
			std::vector<T> cookie_dict = NULL_vec;
			std::map<T, T> device_settings = NULL_map;
			std::map<T, T> cookie_map = NULL_map;
			std::map<T, T> DATA = NULL_map;
		//OWN SECTION
		protected:
			ig::settings::Logger<T> logger;
		private:
			JSON_TYPE last_json = nullptr;
			Response response = nullptr;
			ig::settings::utility::Utility<T> Utility;
			ig::settings::ig_login<T> Login;
			ig::API::PHOTO::Photo<T>* PHOTO_ptr = nullptr;
			ig::API::STORY::Story<T>* STORY_ptr = nullptr;
			ig::API::VIDEO::Video<T>* VIDEO_ptr = nullptr;
		private:
			std::FILE* _FILE;
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

