#include "ig_utility.h"

namespace ig
{
	namespace settings
	{
		namespace utility
		{

			void Print_Formatted(const char* _BUFF, const char* _format, ...)
			{
				va_list _argl;
				va_start(_argl, _format);
				vsprintf((char*)_BUFF, _format, _argl);
				va_end(_argl);
			}

			template <typename T>
			std::map<T, T> Utility<T>::get_cookie_dict()
			{
			}

			template <>
			std::map<const char*, const char*> Utility<const char*>::get_cookie_dict()
			{
				cookie_map = session.cookies.get_dict();
				return cookie_map;
			}

			template <typename T>
			T Utility<T>::get_token()
			{
			}

			template <>
			const char* Utility<const char*>::get_token()
			{
				return cookie_map["csrftoken"];
			}

			template <typename T>
			T Utility<T>::get_user_id()
			{
			}

			template <>
			const char* Utility<const char*>::get_user_id()
			{
				return cookie_map["ds_user_id"];
			}

			template <typename T>
			T Utility<T>::get_rank_token()
			{
			}

			template <>
			const char* Utility<const char*>::get_rank_token()
			{
				char _rank_token[128] = "";
				strcat(_rank_token, get_user_id());
				strcat(_rank_token, "_");
				strcat(_rank_token, generate_uuid_v4());
				return _rank_token;
			}

			template <typename T>
			std::map<T, T> Utility<T>::default_data()
			{
			}

			template <>
			std::map<const char*, const char*> Utility<const char*>::default_data()
			{
				TEMP_MAP_PTR->clear();
				TEMP_MAP_PTR->at("_uuid") = uuid;
				TEMP_MAP_PTR->at("_uid") = user_id;
				TEMP_MAP_PTR->at("_csrftoken") = token;
				return *TEMP_MAP_PTR;
			}

			template <typename T>
			std::map<T, T> Utility<T>::_prepare_recipients(T _users[USER_VEC_SIZE], T _thread_id, bool _use_quotes)
			{
			}

			template <>
			std::map<const char*, const char*> Utility<const char*>::_prepare_recipients(const char* _users[USER_VEC_SIZE], const char* _thread_id, bool _use_quotes)
			{
				printf("_users must be a list.");
				const char* _BUFF = "";
				for (int i = 0; i < USER_VEC_SIZE; ++i)
				{
					if (i < USER_VEC_SIZE)
					{
						const char* _temp_BUFF;
						Print_Formatted(_temp_BUFF, "%s,", _users[i]);
						strcat((char*)_BUFF, _temp_BUFF);
					}
					else if (i = USER_VEC_SIZE)
					{
						const char* _temp_BUFF;
						Print_Formatted(_temp_BUFF, "%s", _users[i]);
						strcat((char*)_BUFF, _temp_BUFF);
					}
				}
				const char* __users = "[[";
				strcat((char*)__users, _BUFF);
				strcat((char*)__users, "]]");
				std::unique_ptr< std::map<const char*, const char*>> result = std::make_unique<std::map<const char*, const char*>>();
				result->insert("users", __users);
				const char* _TEMP_str = "";
				if (_thread_id != None)
				{
					if (_use_quotes)
					{
						strcat((char*)_TEMP_str, "\"[");
						strcat((char*)_TEMP_str, _thread_id);
						strcat((char*)_TEMP_str, "]\"");
					}
					else
					{
						strcat((char*)_TEMP_str, "[");
						strcat((char*)_TEMP_str, _thread_id);
						strcat((char*)_TEMP_str, "]");
					}
				}
				result->insert("thread", _TEMP_str);
				return *result;
			}

			template<typename T>
			T Utility<T>::md5_hash(T _data) 
			{
			}

			template<>
			const char* Utility<const char*>::md5_hash(const char* _data)
			{
				unsigned char result[MD5_DIGEST_LENGTH];
				MD5((unsigned char*)_data, strlen(_data), result);

				char BUFF[64] = "";
				char BUFF2[8] = "";

				for (long long c : result)
				{
					sprintf(BUFF2, "%x", c);
					if (strlen(BUFF2) == 1)
					{
						strcat(BUFF, "0");
						strcat(BUFF, BUFF2);
					}
					else if (strlen(BUFF) == 2)
					{
						strcat(BUFF, BUFF2);
					}
				}
				return BUFF;
			}

			template <typename T>
			T Utility<T>::generate_uuid_v4()
			{
			}

			template <>
			const char* Utility<const char*>::generate_uuid_v4()
			{
				static std::random_device              rd;
				static std::mt19937                    gen(rd());
				static std::uniform_int_distribution<> dis(0, 15);
				static std::uniform_int_distribution<> dis2(8, 11);
				char BUFF[64];
				char BUFF_temp[8];
				int i;
				for (i = 0; i < 8; i++) {
					sprintf(BUFF_temp, "%x", dis(gen));
					strcat(BUFF, BUFF_temp);
				}
				strcat(BUFF, "-");
				for (i = 0; i < 4; i++) {
					sprintf(BUFF_temp, "%x", dis(gen));
					strcat(BUFF, BUFF_temp);
				}
				strcat(BUFF, "-4");
				for (i = 0; i < 3; i++) {
					sprintf(BUFF_temp, "%x", dis(gen));
					strcat(BUFF, BUFF_temp);
				}
				strcat(BUFF, "-");
				sprintf(BUFF_temp, "%x", dis(gen));
				strcat(BUFF, BUFF_temp);
				for (i = 0; i < 3; i++) {
					sprintf(BUFF_temp, "%x", dis(gen));
					strcat(BUFF, BUFF_temp);
				}
				strcat(BUFF, "-");
				for (i = 0; i < 12; i++) {
					sprintf(BUFF_temp, "%x", dis(gen));
					strcat(BUFF, BUFF_temp);
				};
				return BUFF;
			}

			template <typename T>
			T Utility<T>::generate_signature(T _data)
			{
			}

			template<>
			const char* Utility<const char*>::generate_signature(const char* _data)
			{
				const char* _key = ig::settings::IG_SIG_KEY;
				unsigned char* body = HMAC(EVP_sha256(), _key, strlen(_key), (unsigned char*)_data, strlen(_data), NULL, NULL);
				char* signature;
				sprintf(signature, "ig_sig_key_version=%s&signed_body=%s", _key, body);
				return signature;
			}

			template <typename T>
			T Utility<T>::generate_device_id(T _seed)
			{
			}

			template <>
			const char* Utility<const char*>::generate_device_id(const char* _seed)
			{
				const char* _volatile_seed = "12345";
				const char* _data = strcat((char*)_seed, _volatile_seed);
				char* __md5 = (char*)md5_hash(_data);
				char* _md5;
				strncpy(_md5, __md5, 16);
				const char* _device_id = "android - ";
				strcat((char*)_device_id, _md5);
				memcpy((char*)device_id, _device_id, strlen(_device_id));
				return _device_id;
			}

			template <typename T>
			T Utility<T>::get_seed(int _number, ...)
			{
			}

			template <>
			const char* Utility<const char*>::get_seed(int _number, ...)
			{
				char _BUFF[128] = "";
				va_list _argl;
				va_start(_argl, _number);
				for (int i = 1; i <= _number; ++i)
				{
					char* _temp_BUFF;
					_temp_BUFF = va_arg(_argl, char*);
					md5_hash(_temp_BUFF);
					strcat(_BUFF, _temp_BUFF);
				}
				va_end(_argl);
				return _BUFF;
			}

			template <typename T>
			T Utility<T>::generate_UUID(bool _uuid_type)
			{
			}

			template <>
			const char* Utility<const char*>::generate_UUID(bool _uuid_type)
			{
				const char* _BUFF = "";
				const char* generated_uuid = generate_uuid_v4();
				if (_uuid_type)
				{
					return generated_uuid;
				}
				else
				{
					const char* _tok_BUFF = strtok((char*)generated_uuid, "-");
					strcat((char*)_BUFF, _tok_BUFF);
					while (_tok_BUFF != NULL)
					{
						_tok_BUFF = strtok(NULL, "-");
						strcat((char*)_BUFF, _tok_BUFF);
					}
				}
				return _BUFF;
			}
		} //utility
	} //settings
} //ig
