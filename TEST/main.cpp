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



int main()
{
	get_seed(2, "first", "second");
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



