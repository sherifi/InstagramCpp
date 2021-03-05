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
#include <rapidjson/rapidjson.h>
#include <rapidjson/error/en.h>
#include <rapidjson/error/error.h>
#include <rapidjson/document.h>
#include <rapidjson/pointer.h>
#include <rapidjson/stringbuffer.h>
#include <rapidjson/reader.h>
#include <rapidjson/writer.h>
#include <rapidjson/filereadstream.h>
#include <rapidjson/filewritestream.h>

using namespace std;
using namespace rapidjson;

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
	const char* filename = "photo.jpg";
	char* _BUFF = (char*)malloc(sizeof(char) * sizeof(filename));
	while (*filename != '.')
	{
		++filename;
	}
	++filename;
	while (*filename++ != '\0')
	{
		*_BUFF = *filename;
	}
	*_BUFF = '\0';
	printf("%s", _BUFF);

	/*
	time_t now = time(0);
	time_t end = now + 3;
	long long i = 5;
	long long t = 1000000;
	while (now != end)
	{
		std::cout << now << std::endl;
		now = time(0);
	}
	*/

	/*
	FILE* _FILE = fopen("json_test.json", "rb");
	char* _BUFF = (char*)malloc(6144);

	rapidjson::FileReadStream FRS(_FILE, _BUFF, sizeof(_BUFF));

	Document DOC;
	DOC.ParseStream(FRS);

	Pointer p1("/a/b");
	auto VAL = p1.Get(DOC);
	cout << VAL->GetString() << endl;
	fclose(_FILE);
	*/

	/*
	const char* _data = "{ \"project\" : \"RapidJSON\", \"stars\" : 11, \"a\" : { \"b\" : 35 } }";
	rapidjson::Document DOC;
	DOC.Parse(_data);
	*/

	/*
	const Value& VAL = DOC["a"];
	const Value& VAL1 = VAL["b"];
	printf("%d\n", VAL1.GetInt());
	*/

	/*
	Pointer p1("/a/b");
	Value* VAL2 = p1.Get(DOC);
	printf("%d\n", VAL2->GetInt());
	*/

	/*
	const char* _data = "{ 'project' : 'RapidJSON', 'stars' : 11, 'a' : { 'b' : 35 } }";
	StringStream ss(_data);

	Document DOC;
	DOC.ParseStream(ss);

	const Value& VAL = DOC["a"];
	const Value& VAL1 = VAL["b"];
	printf("%d\n", VAL1.GetInt());
	*/

	//StringBuffer sb();

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



