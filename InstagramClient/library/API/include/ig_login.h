#pragma once

#define NULL_str ""

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
		template <typename T>
		class ig_login
		{
		public:
			ig_login();
			~ig_login();
			void add_credentials();
			std::tuple<T, T> get_credentials(T username = NULL_str);
			bool check_secret();
			void print_credentials();
			void delete_credentials();
			void clean_BUFF();
		private:
			std::ifstream FILE_IN;
			std::ofstream FILE_OUT;
			std::stringstream STR_STREAM;
			T SECRET_FILE = "secret2.txt";
			T BUFF = "";
			T SPACE = " ";
		};
	} //namespace settings
} //namespace ig
