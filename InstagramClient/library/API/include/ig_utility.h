#pragma once
#define _CRT_SECURE_NO_WARNINGS

#define None ""
#define NULL_map {"", ""}
#define USER_VEC_SIZE 64
#define VAR_BUFF_SIZE 256

#include "ig_config.h"
#include "ig_definitions.h"
#include "ig_devices.h"

#include <vector>
#include <iomanip>
#include <sstream>
#include <string>
#include <map>

#include <cstdarg>

#include <openssl/hmac.h>
#include <openssl/sha.h>
#include <openssl/md5.h>

namespace ig
{
	namespace settings
	{
		namespace utility
		{
			namespace experiment
			{
				typedef struct Key
				{
					const char* key;
				}Key;

				typedef struct Value
				{
					const char* value;
				}Value;

				typedef struct Map
				{
					Key key;
					Value value;
				}Map;
			} // experiment

			class Utility
			{
			public:
				std::map<const char*, const char*> get_cookie_dict();
				const char* get_token();
				const char* get_user_id();
				const char* get_rank_token();
				std::map<const char*, const char*> default_data();
				std::map<const char*, const char*> _prepare_recipients(const char* _users[USER_VEC_SIZE], const char* _thread_id = None, bool _use_quotes = false);
				const char* md5_hash(const char* _data);
				const char* generate_uuid_v4();
				const char* generate_signature(const char* _data);
				const char* generate_device_id(const char* _seed);
				const char* get_seed(int _number, ...);
				const char* generate_UUID(bool _uuid_type = true);
			private:
				std::map<const char*, const char*> cookie_map;
				const char* token;
				const char* user_id;
				const char* uuid;
				const char* device_id;
				std::map<const char*, const char*>* TEMP_MAP_PTR = new std::map<const char*, const char*>();
			};
		} //utility
	} //settings
} //ig