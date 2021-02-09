#pragma once

#define None ""

#include <string>
#include <vector>
#include <map>
#include <tuple>
#include <fstream>
#include <sstream>
#include <iostream>
#include <filesystem>

namespace ig
{
	namespace settings
	{
		class ig_login
		{
		public:
			ig_login();
			~ig_login();
			void add_credentials();
			std::tuple<std::string, std::string> get_credentials(const std::string& username = None);
			bool check_secret();
			void print_credentials();
			void delete_credentials();
			void clean_BUFF();
		private:
			std::ifstream FILE_IN;
			std::ofstream FILE_OUT;
			std::stringstream STR_STREAM;
			std::string SECRET_FILE = "secret2.txt";
			std::string BUFF = "";
			std::string SPACE = " ";
		};
	} //namespace settings
} //namespace ig
