#pragma once

#define None ""
#define NULL_map {"", ""}
#include <string>
#include <map>

namespace ig
{
	namespace API
	{
		namespace STORY
		{
			typedef class story
			{
			public:
				//CTOR and DCTOR
				story();
				~story();
				//Main functions section
				void download_story(const std::string& _filename, const std::string& _story_url, const std::string& _username);
				void upload_story_photo(const std::string& _photo = None, const std::string& _upload_id = None);
				void configure_story(const std::string& _photo = None, const std::string& _upload_id = None);
			protected:
			private:
				std::string media_info;
			}story;
		}
	}
}
