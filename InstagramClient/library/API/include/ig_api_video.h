#pragma once

#define NULL_str ""
#define NULL_map {"", ""}
#include <string>
#include <map>

namespace ig
{
	namespace API
	{
		namespace VIDEO
		{
			template <typename T>
			class video
			{
			public:
				//CTOR and DCTOR
				video();
				~video();
				//Main functions section
				void download_video(T _media_id = NULL_str, T _filename = NULL_str, bool _media = false, T _folder = "videos");
				void get_video_info(T _filename = NULL_str);
				void upload_video(T _video = NULL_str, T _caption = NULL_str, T _upload_id = NULL_str, T _thumbnail = NULL_str, std::map<T, T> _options = NULL_map);
				void configure_video(T _upload_id = NULL_str, T _video = NULL_str, T _thumbnail = NULL_str, T _width = NULL_str, T _height = NULL_str, T _duration = NULL_str, T _caption = NULL_str, std::map<T, T> _options = NULL_map);
				void resize_video(T _fname = NULL_str, T _thumbnail = NULL_str);
			protected:
			private:
			};
		}
	}
}
