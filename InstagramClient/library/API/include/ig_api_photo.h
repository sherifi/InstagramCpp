#pragma once

#include "ig_api.h"

#include <rapidjson/rapidjson.h>
#include <rapidjson/document.h>
#include <rapidjson/stringbuffer.h>

#include <string>
#include <map>
#include <cstdio>

namespace ig
{
	namespace API
	{
		namespace PHOTO
		{
			template <typename T>
			class Photo : public ig::API::API<const char*>
			{
			public:
				//CTOR and DCTOR
				Photo();
				~Photo();
				//Main functions section
				bool download_photo(T _media_id, T _filename, bool _media = false, T _folder = "photos");
				bool compatible_aspect_ratio(std::pair<T, T> _size);
				bool configure_photo(T _upload_id , T _photo, T _caption);
				bool upload_photo(T _photo, T _caption, T _upload_id, bool _from_video = false, bool _force_resize = false, T _options = NULL_str);
				std::pair<T, T> get_image_size(T _fname);
				void resize_image(T _fname);
				void stories_shaper(T _fname);
				//Getter and Setter
				void get_media_info(T _media_id);
			protected:
			private:
				T media_id;
				T filename;
				T path;
				T folder;
				std::pair<T, T> size;
				T upload_id;
				T photo;
				T caption;
				bool from_video;
				bool force_resize;
				T options;
				T fname;
				T media_info;
				T media;
				FILE* _FILE;
				Response<T> Response;
				T DATA;
				rapidjson::Document DOC;
				ig::settings::utility::Utility<T> Utility;
			};
		}
	}
}
