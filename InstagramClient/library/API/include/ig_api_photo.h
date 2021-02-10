#pragma once

#define None ""
#define NULL_map {"", ""}
#include <string>
#include <map>

namespace ig
{
	namespace API
	{
		namespace PHOTO
		{
			typedef class photo
			{
			public:
				//CTOR and DCTOR
				photo();
				~photo();
				//Main functions section
				void download_photo(const std::string& _media_id, const std::string& _filename, bool _media = false, const std::string& _folder = "photos");
				void compatible_spect_ratio(float _size);
				void configure_photo(const std::string& _upload_id, const std::string& _photo, const std::string& _caption);
				void upload_photo(const std::string& _photo = None, const std::string& _caption = None, const std::string& _upload_id = None, bool _from_video = false, bool _force_resize = false, std::map<std::string, std::string> _options = NULL_map);
				void get_image_size(const std::string& _fname);
				void resize_image(const std::string& _fname);
				void stories_shaper(const std::string& _fname);
				//Getter and Setter
				void get_media_info(const std::string& _media_id);
			protected:
			private:
				std::string media_info;
			}photo;
		}
	}
}
