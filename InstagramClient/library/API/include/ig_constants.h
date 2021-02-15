#pragma once

#include <string>

namespace ig
{
	namespace settings
	{
		namespace ENDPOINTS
		{
			static const std::string login = "accounts/login/";
			static const std::string logout = "accounts/logout/";
			static const std::string sync_features = "qe/sync/";
			static const std::string auto_complete_user_list = "friendships/autocomplete_user_list/";
			static const std::string get_timeline_feed = "feed/timeline/";
			static const std::string get_megaphone_log = "megaphone/log/";
			static const std::string expose = "qe/expose/";
			static const std::string edit_media = "media/{media_id}/edit_media/";
			static const std::string remove_self_tag = "media/{media_id}/remove/";
			static const std::string media_info = "media/{media_id}/info/";
			static const std::string archive_media = "media/{media_id}/{action}/?media_type={media_type}";
			static const std::string delete_media = "media/{media_id}/delete/";
			static const std::string change_password = "accounts/change_password/";
			static const std::string explore = "discover/explore/";
			static const std::string comment = "media/{media_id}/comment/";
			static const std::string reply_to_comment = "media/{media_id}/comment/";
			static const std::string delete_comment = "media/{media_id}/comment/{comment_id}/delete/";
			static const std::string get_username_info = "users/{user_id}/info/";
			static const std::string get_recent_activity = "news/inbox/?";
			static const std::string get_following_recent_activity = "news/?";
			static const std::string getv2Inbox = "direct_v2/inbox/?";
			static const std::string get_user_tags = "usertags/{user_id}/feed/?rank_token={rank_token}&ranked_content=true&";
			static const std::string tag_feed = "feed/tag/{tag}/?rank_token={rank_token}&ranked_content=true&";
			static const std::string get_comment_likers = "media/{comment_id}/comment_likers/?";
			static const std::string get_media_likers = "media/{media_id}/likers/?";
			static const std::string get_geo_media = "maps/user/{user_id}/";
			static const std::string sync_from_adress_book = "address_book/link/?include=extra_display_name,thumbnails";
			static const std::string get_timeline = "feed/timeline/?rank_token={rank_token}&ranked_content=true&";
			static const std::string get_archive_feed = "feed/only_me_feed/?rank_token={rank_token}&ranked_content=true&";
			static const std::string get_user_feed = "feed/user/{user_id}/?max_id={max_id}&min_timestamp={min_timestamp}&rank_token={rank_token}&ranked_content=true";
			static const std::string get_hashtag_feed = "feed/tag/{hashtag}/?max_id={max_id}&rank_token={rank_token}&ranked_content=true&";
			static const std::string get_location_feed = "feed/location/{location_id}/?max_id={max_id}&rank_token={rank_token}&ranked_content=true&";
			static const std::string get_popular_feed = "feed/popular/?people_teaser_supported=1&rank_token={rank_token}&ranked_content=true&";
			static const std::string get_user_followings = "friendships/{user_id}/following/?max_id={max_id}&ig_sig_key_version={sig_key}&rank_token={rank_token}";
			static const std::string get_user_followers = "friendships/{user_id}/followers/?rank_token={rank_token}";
			static const std::string like_comment = "media/{comment_id}/comment_like/";
			static const std::string unlike_comment = "media/{comment_id}/comment_unlike/";
			static const std::string like = "media/{media_id}/like/";
			static const std::string unlike = "media/{media_id}/unlike/";
			static const std::string get_media_comments = "media/{media_id}/comments/";
			static const std::string get_direct_share = "direct_share/inbox/?";
			static const std::string follow = "friendships/create/{user_id}/";
			static const std::string unfollow = "friendships/destroy/{user_id}/";
			static const std::string block = "friendships/block/{user_id}/";
			static const std::string unblock = "friendships/unblock/{user_id}/";
			static const std::string user_friendship = "friendships/show/{user_id}/";
			static const std::string send_direct_item = "direct_v2/threads/broadcast/{}/";
		} // ENDPOINTS
	} //settings
} // ig

