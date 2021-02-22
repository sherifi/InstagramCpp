#pragma once

#define NULL_str ""
#define NULL_map {"", ""}
#include <string>
#include <map>

namespace ig
{
	namespace API
	{
		namespace PHOTO
		{
			template <typename T>
			class photo
			{
			public:
				//CTOR and DCTOR
				photo();
				~photo();
				//Main functions section
				void download_photo(T _media_id, T _filename, bool _media = false, T _folder = "photos");
				void compatible_spect_ratio(float _size);
				void configure_photo(T _upload_id, T _photo, T _caption);
				void upload_photo(T _photo = NULL_str, T _caption = NULL_str, T _upload_id = NULL_str, bool _from_video = false, bool _force_resize = false, std::map<T, T> _options = NULL_map);
				void get_image_size(T _fname);
				void resize_image(T _fname);
				void stories_shaper(T _fname);
				//Getter and Setter
				void get_media_info(T _media_id);
			protected:
			private:
				T media_info;
			};
		}
	}
}
