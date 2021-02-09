#include "ig_api_photo.h"

namespace ig
{
	namespace api
	{
		namespace photo
		{
			ig_api_photo::ig_api_photo()
			{
			}
			ig_api_photo::~ig_api_photo()
			{
			}
			void ig_api_photo::download_photo(const std::string& media_id, const std::string& filename, bool media, const std::string& folder)
			{
				if (!media)
				{
					get_media_info(media_id);

				}
			}
		}
	}
}
