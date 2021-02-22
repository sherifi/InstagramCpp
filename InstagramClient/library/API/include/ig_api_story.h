#pragma once

#define NULL_str ""
#define NULL_map {"", ""}
#include <string>
#include <map>

namespace ig
{
	namespace API
	{
		namespace STORY
		{
			template <typename T>
			class story
			{
			public:
				//CTOR and DCTOR
				story();
				~story();
				//Main functions section
				void download_story(T _filename = NULL_str, T _story_url = NULL_str, T _username = NULL_str);
				void upload_story_photo(T _photo = NULL_str, T _upload_id = NULL_str);
				void configure_story(T _photo = NULL_str, T _upload_id = NULL_str);
			protected:
			private:
				T media_info;
			};
		}
	}
}
