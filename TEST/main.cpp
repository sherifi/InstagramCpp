#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <sstream>
#include <string>
#include <locale>
#include <codecvt>
#include <iomanip>
#include <array>

#include <cstdlib>
#include <cstdio>
#include <cstring>
#include <cstdarg>

#include <openssl/md5.h>
using namespace std;

class Test
{
public:
	Test();
	~Test();
	const char* set_url(const char* __url);
	std::unique_ptr<const char*> URL = std::make_unique<const char*>();
private:
};

Test::Test() {}
Test::~Test() {}
const char* Test::set_url(const char* __url)
{
	*URL = __url;
	return *URL;
}

#define _2dARRAY 16

int main()
{
	/*
	unsigned int _2dARRAYsize = 64;
	const char** _choices = (const char**)malloc(sizeof(char) * _2dARRAYsize);
	printf("%d\n", sizeof(_choices));
	*_choices = "first";
	*(_choices + 1) = "second";
	*(_choices + 2) = "three";
	*(_choices + 3) = "four";
	*(_choices + 4) = "five";

	unsigned int _index = 0;
	if (_2dARRAYsize > 10)
	{
		printf( "%s ", _choices[_index++]);
		if (_2dARRAYsize > 10)
		{
			printf( "%s ", _choices[_index++]);
		}
		if (_2dARRAYsize > 30)
		{
			printf("%s ", _choices[_index++]);
		}
		printf("%s ", _choices[_index++]);
	}
	*/
	/*
	for (int i = 0; i < 5; ++i)
	{
		std::cout << _choices[i] << std::endl;
	}
	*/

	/*
	while (*_choices) {
		std::cout << *_choices++ << std::endl;
	}
	*/
	
	/*
	char _BUFF1[32] = "First buff.";
	char _BUFF2[32] = "Second buff.";

	strcpy(_BUFF1, _BUFF2);
	printf("%s\n", _BUFF1);
	printf("%s\n", _BUFF2);
	*/

	/*
	std::string str8 = "en espa\xc3\xb1ol";
	std::cout << str8 << std::endl;
	std::wstring_convert<std::codecvt_utf8<char32_t>, char32_t> convert;
	std::u32string str32 = convert.from_bytes(str8);

	std::u32string str32(U"\U00004f60\U0000597d");
	std::wstring_convert<std::codecvt_utf8<char32_t>, char32_t> conv;
	std::string str8 = conv.to_bytes(str32);
	*/

	/*
	std::string str8 = "Hello World!";
	unsigned char result[MD5_DIGEST_LENGTH];
	MD5((const unsigned char*)str8.c_str(), str8.size(), result);
	for (auto x : result)
	{
		cout << std::hex << x << endl;
	}
	*/

	/*
	int x = 12;
	char str_BUFF[64];
	sprintf((char*)str_BUFF, "%x", x);
	char str_BUFF2[64];
	int d = 5;
	sprintf((char*)str_BUFF2, "%x", d);
	strcat(str_BUFF, str_BUFF2);
	printf("%s", str_BUFF);
	*/
}


