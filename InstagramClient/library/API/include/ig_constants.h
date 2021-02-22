#pragma once

#include <string>

namespace ig
{
	namespace settings
	{
		namespace ENDPOINTS
		{
			static const char* login = "accounts/login/";
			static const char* logout = "accounts/logout/";
			static const char* sync_features = "qe/sync/";
			static const char* auto_complete_user_list = "friendships/autocomplete_user_list/";
			static const char* get_timeline_feed = "feed/timeline/";
			static const char* get_megaphone_log = "megaphone/log/";
			static const char* expose = "qe/expose/";
			static const char* edit_media = "media/{media_id}/edit_media/";
			static const char* remove_self_tag = "media/{media_id}/remove/";
			static const char* media_info = "media/{media_id}/info/";
			static const char* archive_media = "media/{media_id}/{action}/?media_type={media_type}";
			static const char* delete_media = "media/{media_id}/delete/";
			static const char* change_password = "accounts/change_password/";
			static const char* explore = "discover/explore/";
			static const char* comment = "media/{media_id}/comment/";
			static const char* reply_to_comment = "media/{media_id}/comment/";
			static const char* delete_comment = "media/{media_id}/comment/{comment_id}/delete/";
			static const char* get_username_info = "users/{user_id}/info/";
			static const char* get_recent_activity = "news/inbox/?";
			static const char* get_following_recent_activity = "news/?";
			static const char* getv2Inbox = "direct_v2/inbox/?";
			static const char* get_user_tags = "usertags/{user_id}/feed/?rank_token={rank_token}&ranked_content=true&";
			static const char* tag_feed = "feed/tag/{tag}/?rank_token={rank_token}&ranked_content=true&";
			static const char* get_comment_likers = "media/{comment_id}/comment_likers/?";
			static const char* get_media_likers = "media/{media_id}/likers/?";
			static const char* get_geo_media = "maps/user/{user_id}/";
			static const char* sync_from_adress_book = "address_book/link/?include=extra_display_name,thumbnails";
			static const char* get_timeline = "feed/timeline/?rank_token={rank_token}&ranked_content=true&";
			static const char* get_archive_feed = "feed/only_me_feed/?rank_token={rank_token}&ranked_content=true&";
			static const char* get_user_feed = "feed/user/{user_id}/?max_id={max_id}&min_timestamp={min_timestamp}&rank_token={rank_token}&ranked_content=true";
			static const char* get_hashtag_feed = "feed/tag/{hashtag}/?max_id={max_id}&rank_token={rank_token}&ranked_content=true&";
			static const char* get_location_feed = "feed/location/{location_id}/?max_id={max_id}&rank_token={rank_token}&ranked_content=true&";
			static const char* get_popular_feed = "feed/popular/?people_teaser_supported=1&rank_token={rank_token}&ranked_content=true&";
			static const char* get_user_followings = "friendships/{user_id}/following/?max_id={max_id}&ig_sig_key_version={sig_key}&rank_token={rank_token}";
			static const char* get_user_followers = "friendships/{user_id}/followers/?rank_token={rank_token}";
			static const char* like_comment = "media/{comment_id}/comment_like/";
			static const char* unlike_comment = "media/{comment_id}/comment_unlike/";
			static const char* like = "media/{media_id}/like/";
			static const char* unlike = "media/{media_id}/unlike/";
			static const char* get_media_comments = "media/{media_id}/comments/";
			static const char* get_direct_share = "direct_share/inbox/?";
			static const char* follow = "friendships/create/{user_id}/";
			static const char* unfollow = "friendships/destroy/{user_id}/";
			static const char* block = "friendships/block/{user_id}/";
			static const char* unblock = "friendships/unblock/{user_id}/";
			static const char* user_friendship = "friendships/show/{user_id}/";
			static const char* send_direct_item = "direct_v2/threads/broadcast/{}/";
			static const char* get_total_liked_media = "feed/liked/?max_id={max_id}";
			static const char* remove_profile_picture = "accounts/remove_profile_picture/";
			static const char* set_private_account = "accounts/set_private/";
			static const char* set_public_account = "accounts/set_public/";
			static const char* set_name_and_phone = "accounts/set_phone_and_name/";
			static const char* get_profile_data = "accounts/current_user/?edit=true";
			static const char* edit_profile = "accounts/edit_profile/";
			static const char* fb_user_search = "fbsearch/topsearch/?context=blended&query={query}&rank_token={rank_token}";
			static const char* search_users = "users/search/?ig_sig_key_version={sig_key}&is_typeahead=true&query={query}&rank_token={rank_token}";
			static const char* search_username = "users/{username}/usernameinfo/";
			static const char* search_tags = "tags/search/?is_typeahead=true&q={query}&rank_token={rank_token}";
			static const char* search_location = "fbsearch/places/?rank_token={rank_token}&query={query}&lat={lat}&lng={lng}";
			static const char* get_user_reel = "feed/user/{}/reel_media/";
			static const char* get_users_reel = "feed/reels_media/";
		} // ENDPOINTS
	} //settings
} // ig

