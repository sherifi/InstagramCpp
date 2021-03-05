#include "ig_api_photo.h"

namespace ig
{
	namespace API
	{
		namespace PHOTO
		{
			template<typename T>
			Photo<T>::Photo()
			{
			}

			template<>
			Photo<const char*>::Photo()
			{
				const char* media_id = "45932845";
				const char* filename = "photo.jpg";
				const char* path = "./photos";
				const char* folder = "photos";
				const char* size = "1024x1024";
				const char* upoad_id = "97349134";
				const char* photo = "photo.jpg";
				const char* caption = "Hello world!";
				std::map<const char*, const char*> options = NULL_map;
				const char* media_info = NULL_str;
			}

			template<typename T>
			Photo<T>::~Photo()
			{
			}

			template<typename T>
			bool Photo<T>::download_photo(T _media_id, T _filename, bool _media, T _folder)
			{
			}

			template<>
			bool Photo<const char*>::download_photo(const char* _media_id, const char* _filename, bool _media, const char* _folder)
			{
				media = last_json();
				if (!_media)
				{
					media_info(_media_id);
					if (!last_json.get("items"))
					{
						return true;
					}
					_media = last_json["items"][0];
				}
				if (media["media_type"] == 2)
				{
					return true;
				}
				else if (media["media_type"] == 1)
				{
					if (_filename == NULL_str)
					{
						sprintf((char*)filename, "%s_%s.jpg", media["user"]["username"], _media_id);
					}
					else
					{
						sprintf((char*)filename, "%s.jpg", _filename);
					}
					std::vector<const char*> _images = media["image_versions2"]["candidates"];
					sprintf((char*)fname, "%s%s", _folder, _filename);
					if (_FILE = fopen(fname, "r"))
					{
						logger.Log(ig::settings::INFO, "File already exists, skipping...");
						std::filesystem::path* _Path = new std::filesystem::path(fname);
						sprintf((char*)fname , "%s", std::filesystem::absolute(*_Path));
						delete _Path;
					}
					fclose(_FILE);
					Response = session.get(_images[0]["url"], _stream = true);
					if (Response.status_code() == 200)
					{
						_FILE = fopen(fname, "wb");
						Response.raw.decode_content = true;
						const char* _BUFF = Response.raw;
						fwrite((char*)_BUFF, sizeof(char), sizeof(_BUFF), _FILE);
						std::filesystem::path* _Path = new std::filesystem::path(fname);
						sprintf((char*)fname, "%s", std::filesystem::absolute(*_Path));
						delete _Path;
					}
					
				}
				else
				{
					bool _success = false;
					bool _video_included = false;
					for (int _index = 0; _index < media["carousel_media"])
					{
						if (media["carousel_media"][_index]["media_type"] != 1)
						{
							_video_included = true;
						}
						if (_filename == NULL_str)
						{
							sprintf((char*)filename, "%s_%s_%s.jpg", media["user"]["username"], _media_id, _index);
						}
						else
						{
							sprintf((char*)filename, "%s_%s.jpg", _filename, _index);
						}
						std::vector<const char*> _images = media["carousel_media"][index]["image_versions2"]["candidates"];
						fname = strcat((char*)_folder, filename);
						if (std::filesystem::exists(fname))
						{
							std::filesystem::path* _Path = new std::filesystem::path(fname);
							sprintf((char*)fname, "%s", std::filesystem::absolute(*_Path));
							delete _Path;
						}
						Response = session.get(_images[0]["url"], _stream = true);
						if (Response.status_code == 200)
						{
							_success = true;
							_FILE = fopen(fname, "wb");
							Response.raw.decode_content = true;
							const char* _BUFF = Response.raw;
							fwrite((char*)_BUFF, sizeof(char), sizeof(_BUFF), _FILE);
						}
					}
					if (_success)
					{
						std::filesystem::path* _Path = new std::filesystem::path(fname);
						sprintf((char*)fname, "%s", std::filesystem::absolute(*_Path));
						delete _Path;
					}
					else if (_video_included)
					{
						return true;
					}
				}
			}

			template<typename T>
			bool Photo<T>::compatible_aspect_ratio(std::pair<T, T> _size)
			{
			}

			template<>
			bool Photo<float>::compatible_aspect_ratio(std::pair<float, float> _size)
			{
				std::pair<float, float> _min_max_ratio = std::make_pair<float, float>(4.0 / 5.0, 90.0 / 47.0);
				std::pair<float, float> _width_height = _size;
				float _ratio = std::get<0>(_width_height) * 1 / std::get<1>(_width_height) * 1;
				printf("FOUND: w:%f02 h:%f02 r:%f02", std::get<0>(_width_height), std::get<1>(_width_height), _ratio);
				return std::get<0>(_min_max_ratio) <= _ratio <= std::get<1>(_min_max_ratio) ? true : false;
			}

			template<typename T>
			bool Photo<T>::configure_photo(T _upload_id, T _photo, T _caption)
			{
			}

			template<>
			bool Photo<const char*>::configure_photo(const char* _upload_id, const char* _photo, const char* _caption)
			{
				std::pair<float, float> _width_height = get_image_size(_photo);
				const char* _DATA;
				sprintf((char*)_DATA, "{ 'media_folder': 'Instagram', 'source_type' : 4, 'caption' : %s, 'upload_id' : %s, 'device' : %s, 'edits' : { 'crop_original_size': [%f01, %f01] , 'crop_center' : [0.0, 0.0] , 'crop_zoom' : 1.0 }, 'extra' : { 'source_width': %f01, 'source_height' : %f01, } }", _caption, _upload_id, ig::settings::DEFAULT_DEVICE<const char*>, std::get<0>(_width_height), std::get<1>(_width_height), std::get<0>(_width_height), std::get<1>(_width_height));
				DATA = json_data(_DATA);
				const char* _URL = ig::settings::ENDPOINTS::configure_photo;
				send_request(_URL, DATA);
			}

			template<typename T>
			bool Photo<T>::upload_photo(T _photo, T _caption, T _upload_id, bool _from_video, bool _force_resize, T _options)
			{
			}

			template<>
			bool Photo<const char*>::upload_photo(const char* _photo, const char* _caption, const char* _upload_id, bool _from_video, bool _force_resize, const char* _options)
			{
				/*
				Upload photo to Instagram

					@param photo         Path to photo file(String)
					@param caption       Media description(String)
					@param upload_id     Unique upload_id(String).When None, then generate automatically
					@param from_video    A flag that signals whether the photo is loaded from the video or by itself(Boolean, DEPRECATED: not used)
					@param force_resize  Force photo resize(Boolean)
					@param options       Object with difference options, e.g.configure_timeout, rename(Dict)
					Designed to reduce the number of function arguments!
					This is the simplest request object.
					@return Boolean
				*/
				const char* __options = "{ 'configure_timeout': 15, 'rename' : True }";
				if (_options)
				{
					options = _options;
				}
				else
				{
					options = __options;
				}
				if (_upload_id == NULL_str)
				{
					std::srand(std::time(nullptr));
					upload_id = (char*)std::rand;
				}
				else
				{
					upload_id = _upload_id;
				}
				if (!_photo)
				{
					return false;
				}
				if (!compatible_spect_ratio(get_image_size(_photo)))
				{
					logger.Log(ig::settings::ERROR, "Photo does not have a compatible photo aspect ratio.");
					if (_force_resize)
					{
						photo = resize_image(_photo);
					}
					else
					{
						return false;
					}
				}
				if (_FILE = fopen(_photo, "rb"))
				{
					auto _start = fseek(_FILE, 0, SEEK_END);
					auto _photo_size = ftell(_FILE);
					fseek(_FILE, 0, SEEK_SET);
					char* _photo_byte = (char*)malloc(sizeof(char) * _photo_size);	
					fread(_photo_byte, 1, sizeof(_photo_byte), _FILE);
					fclose(_FILE);
				}
				const char* _DATA;
				sprintf((char*)_DATA, "{ 'upload_id': %s, '_uuid' : %s, '_csrftoken' : %s, 'image_compression' : '{\"lib_name\":\"jt\",\"lib_version\":\"1.3.0\",\"quality\":\"87\"}', 'photo' : ('pending_media_%s.jpg', %s, 'application/octet-stream', { 'Content-Transfer-Encoding': 'binary' })}", upload_id, uuid, token, upload_id, _photo_byte);
				DATA = json_data(_DATA);
				auto _m = MultipartEncoder(DATA, uuid);
				const char* _HEADERS;
				sprintf((char*)_HEADERS, "{'X-IG-Capabilities': '3Q4=', 'X-IG-Connection-Type': 'WIFI', 'Cookie2' : '$Version=1', 'Accept-Language' : 'en-US', 'Accept-Encoding' : 'gzip, deflate', 'Content-type' : %s, 'Connection' : 'close', 'User-Agent' : %s }", _m.content_type, user_agent);
				session.headers.update(_HEADERS);
				Response = session.post(strcat(ig::settings::API_URL<char*>, ig::settings::ENDPOINTS::upload_photo), _m);
				rapidjson::StringStream* SS = new rapidjson::StringStream(_options);
				if (!DOC.HasParseError())
				{
					DOC.ParseStream(*SS);
					delete SS;
				}
				else
				{
					const char* _BUFF;
					sprintf((char*)_BUFF, "Error parsing: %s ", _options);
					logger.Log(ig::settings::ERROR, _BUFF);
				}
				rapidjson::Value* VAL = new rapidjson::Value();
				*VAL = DOC["configure_timeout"];
				const char* _configure_timeout = VAL->GetString();
				if (Response.status_code == 200)
				{
					for (unsigned int _i = 0; _i < 4; ++_i)
					{
						if (_configure_timeout)
						{
							Utility.SLEEP(atoll(_configure_timeout));
							if (configure_photo(_upload_id, _photo, _caption))
							{
								const char* __media = last_json.get("media");
								expose();
								VAL->Empty();
								if (DOC.HasMember("rename"))
								{
									const char* _rename;
									sprintf((char*)_rename, "%s_REMOVE_ME", _photo);
									rename(_photo, _rename);
								}
								media = __media;
							}
						}
					}
				}
				return false;
				delete VAL;
			}

			template<typename T>
			std::pair<T, T> Photo<T>::get_image_size(T _fname)
			{
			}

			template<>
			std::pair<const char*, const char*> Photo<const char*>::get_image_size(const char* _fname)
			{
				_FILE = fopen(_fname, "rb");
				const char* _head;
				fread((char*)_head, sizeof(char), 24, _FILE);
				if (sizeof(_head) != 24)
				{
					std::runtime_error("Invalid Header");
				}
				cv::Mat _image = imread(_fname);
				unsigned int _width, _height;
				std::pair<const char*, const char*> _image_size;
				char* _name = strtok((char*)_fname, ".");
				char* _ext = strtok(0, ".");
				_width = _image.size().width;
				_height = _image.size().height;
				_image_size = std::make_pair(_width, _height);
				return _image_size;
				if (_ext == "png")
				{
					
				}
				else if (_ext == "gif")
				{

				}
				else if (_ext == "jpeg")
				{

				}
				else if (_ext == "jpg")
				{

				}
				else
				{
					std::runtime_error("Unsupported format");
				}
			}


		} //namespace PHOTO
	} //namespace API
} //namespace ig
