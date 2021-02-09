#pragma once

#define None ""
#include <string>
#include <map>

namespace ig
{
	namespace api
	{
		namespace photo
		{
			typedef class ig_api_photo
			{
			public:
				//CTOR and DCTOR
				ig_api_photo();
				~ig_api_photo();
				//Main functions section
				void download_photo(const std::string& media_id, const std::string& filename, bool media = false, const std::string& folder = "photos");
				void compatible_spect_ratio(float size);
				void configure_photo(const std::string& upload_id, const std::string& photo, const std::string& caption);
				void upload_photo(const std::string& photo, const std::string& from_video, bool force_resize, std::map<std::string, std::string> options = {}, const std::string & caption = None, const std::string & upload_id = None );
				void get_image_size(const std::string& fname);
				void resize_image(const std::string& fname);
				void stories_shaper(const std::string& fname);
				//Getter and Setter
				void get_media_info(const std::string& media_id);
			protected:
			private:
				std::string media_info;
			}ig_api_photo;
		}
	}
}
