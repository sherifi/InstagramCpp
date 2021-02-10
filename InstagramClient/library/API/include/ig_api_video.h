#pragma once

#define None ""
#define NULL_map {"", ""}
#include <string>
#include <map>

namespace ig
{
	namespace API
	{
		namespace VIDEO
		{
			typedef class video
			{
			public:
				//CTOR and DCTOR
				video();
				~video();
				//Main functions section
				void download_video(const std::string& _media_id = None, const std::string& _filename = None, bool _media = false, const std::string& _folder = "videos");
				void get_video_info(const std::string& _filename = None);
				void upload_video(const std::string& _video = None, const std::string& _caption = None, const std::string& _upload_id = None, const std::string& _thumbnail = None, std::map<std::string, std::string> _options = NULL_map);
				void configure_video(const std::string& _upload_id = None, const std::string& _video = None, const std::string& _thumbnail = None, const std::string& _width = None, const std::string& _height = None, const std::string& _duration = None, const std::string& _caption = None, std::map<std::string, std::string> _options = NULL_map);
				void resize_video(const std::string& _fname = None, const std::string& _thumbnail = None);
			protected:
			private:
			}video;
		}
	}
}
