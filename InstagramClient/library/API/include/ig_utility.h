#pragma once
#define _CRT_SECURE_NO_WARNINGS

#define NULL_str ""
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

			template <typename T>
			class Utility
			{
			public:
				int count_word(T _BUFF, T _word);
				T get_token();
				T get_user_id();
				T get_rank_token();
				T md5_hash(T _data);
				T generate_uuid_v4();
				T generate_signature(T _data);
				T generate_device_id(T _seed);
				T get_seed(int _number, ...);
				T get_seed(T _username, T _password);
				T generate_UUID(bool _uuid_type = true);
				T replace_word(T _BUFF, T _oldW, T _newW);
				std::map<T, T> get_cookie_dict();
				std::map<T, T> default_data();
				std::map<T, T> _prepare_recipients(T _users[USER_VEC_SIZE], T _thread_id = NULL_str, bool _use_quotes = false);
			private:
				T token;
				T user_id;
				T uuid;
				T device_id;
				std::map<T, T> cookie_map;
				std::map<T, T>* TEMP_MAP_PTR = new std::map<T, T>();
			};
		} //utility
	} //settings
} //ig