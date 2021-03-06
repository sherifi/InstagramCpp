#include "ig_login.h"

namespace ig
{
	namespace settings
	{
		template<typename T>
		ig_login<T>::ig_login()
		{
		}

		template<typename T>
		ig_login<T>::~ig_login()
		{
		}

		template<typename T>
		void ig_login<T>::add_credentials()
		{
		}

		template<>
		void ig_login<std::string&&>::add_credentials()
		{
			if (!FILE_OUT.is_open())
			{
				FILE_OUT.open(SECRET_FILE, std::ios::out | std::ios::app);
			}
			if (FILE_OUT.is_open())
			{
				auto x = FILE_OUT.tellp();
				FILE_OUT.seekp(0, std::ios::end);
				auto y = FILE_OUT.tellp();
				if (x != y)
					FILE_OUT.write("\n", 1);
				while (FILE_OUT.is_open())
				{
					std::cout << "Write the username: ";
					std::cin >> BUFF;
					FILE_OUT.write(BUFF.c_str(), BUFF.length());
					FILE_OUT.write(SPACE.c_str(), SPACE.length());
					std::cout << "Write the password: ";
					clean_BUFF();
					std::cin >> BUFF;
					FILE_OUT.write(BUFF.c_str(), BUFF.length());
					FILE_OUT.close();
				}
			}
			else
			{
				std::cout << "ERROR opening the file: " << SECRET_FILE << std::endl;
			}
			clean_BUFF();
		}

		template<typename T>
		std::tuple<T, T> ig_login<T>::get_credentials(T username)
		{
		}

		template<>
		std::tuple<std::string&&, std::string&&> ig_login<std::string&&>::get_credentials(std::string&& username)
		{
			std::map<std::string, std::string> login;
			std::tuple<std::string, std::string> Login;
			while (!check_secret())
			{
				break;
			}
			while (true)
			{
				if (!FILE_IN.is_open())
				{
					FILE_IN.open(SECRET_FILE, std::ios::in);
				}
				if (FILE_IN.is_open())
				{
					FILE_IN.seekg(0, std::ios::beg);
					while (std::getline(FILE_IN, BUFF))
					{
						auto middle = BUFF.find_first_of(" ");
						auto usr = BUFF.substr(0, middle);
						auto end = BUFF.npos;
						auto psw = BUFF.substr(middle + 1, end);
						login[usr] = psw;
					}
					FILE_IN.close();
				}
				else
				{
					std::cout << "ERROR opening the file: " << SECRET_FILE << std::endl;
				}
				if (username != NULL_str)
				{
					for (auto it2 = login.begin(); it2 != login.end(); ++it2)
					{
						if (it2->first == username)
						{
							Login = std::make_tuple(it2->first, it2->second);
							return Login;
						}
					}
				}
				while (true)
				{
					std::cout << "Which account do you want to use? (Type number)" << std::endl;
					print_credentials();
					std::cout << "0 add another account." << std::endl;
					std::cout << "-1 delete all accounts." << std::endl;
					int temp_char;
					std::cin >> temp_char;
					if (temp_char == 0)
					{
						add_credentials();
					}
					else if (temp_char == -1)
					{
						delete_credentials();
						break;
					}
					else if (0 < temp_char <= login.size())
					{
						int y = 1;
						for (auto it4 = login.begin(); it4 != login.end(); ++it4)
						{
							if (temp_char == y)
							{
								Login = std::make_tuple(it4->first, it4->second);
								return Login;
							}
							else
							{
								y++;
							}
						}
					}
				}
				clean_BUFF();
			}
		}

		template<typename T>
		bool ig_login<T>::check_secret()
		{
		}

		template<>
		bool ig_login<std::string&&>::check_secret()
		{
			if (std::filesystem::exists(SECRET_FILE))
			{
				if (!FILE_IN.is_open())
				{
					FILE_IN.open(SECRET_FILE, std::ios::in);
				}
				if (FILE_IN.is_open())
				{
					FILE_IN.seekg(0, std::ios::beg);
					while (std::getline(FILE_IN, BUFF))
					{
						auto middle = BUFF.find_first_of(" ");
						auto usr = BUFF.substr(0, middle);
						auto end = BUFF.npos;
						auto psw = BUFF.substr(middle + 1, end);
						if (usr.length() < 4 || psw.length() < 6)
						{
							std::cout << "Data in \"" << SECRET_FILE << "\" " << "file is invalid.\n We will delt it and try again" << std::endl;
							delete_credentials();
							clean_BUFF();
							return false;
						}
						else
						{
							clean_BUFF();
							continue;
						}
					}
					FILE_IN.close();
				}
				return true;
			}
			else
			{
				std::cout << "We need to crate the text file \"" << SECRET_FILE << "\" where we will store your login and password form Instagram" << std::endl;
				std::cout << "Don't worry. It will be stored locally." << std::endl;
				while (true)
				{
					char temp_char;
					add_credentials();
					std::cout << "DO you want to add another account? (y/n) ";
					std::cin >> temp_char;
					if (temp_char != 'y')
						break;
				}
				return true;
			}
		}

		template<typename T>
		void ig_login<T>::print_credentials()
		{
		}

		template<>
		void ig_login<std::string&&>::print_credentials()
		{
			if (std::filesystem::exists(SECRET_FILE))
			{
				if (!FILE_IN.is_open())
				{
					FILE_IN.open(SECRET_FILE, std::ios::in);
				}
				if (FILE_IN.is_open())
				{
					FILE_IN.seekg(0, std::ios::beg);
					int x = 1;
					while (std::getline(FILE_IN, BUFF))
					{
						auto middle = BUFF.find_first_of(" ");
						auto usr = BUFF.substr(0, middle);
						auto end = BUFF.npos;
						auto psw = BUFF.substr(middle + 1, end);
						std::cout << x << SPACE << usr << SPACE << psw << std::endl;
						x++;
					}
					FILE_IN.close();
					clean_BUFF();
				}
				else
				{
					std::cout << "ERROR opening the file: " << SECRET_FILE << std::endl;
				}
			}
			else
			{
				std::cout << "FILE: " << SECRET_FILE << "Dosn't exist." << std::endl;
			}
		}

		template<typename T>
		void ig_login<T>::delete_credentials()
		{
			if (std::filesystem::exists(SECRET_FILE))
			{
				if (FILE_IN.is_open())
				{
					FILE_IN.close();
					std::filesystem::remove(SECRET_FILE);
				}
			}
			else
			{
				std::cout << "FILE: " << SECRET_FILE << "Dosn't exist." << std::endl;
			}
		}

		template<>
		void ig_login<std::string&&>::delete_credentials()
		{
			if (std::filesystem::exists(SECRET_FILE))
			{
				if (FILE_IN.is_open())
				{
					FILE_IN.close();
					std::filesystem::remove(SECRET_FILE);
				}
			}
			else
			{
				std::cout << "FILE: " << SECRET_FILE << "Dosn't exist." << std::endl;
			}
		}

		template<typename T>
		void ig_login<T>::clean_BUFF()
		{
			BUFF.clear();
		}

		template<>
		void ig_login<std::string&&>::clean_BUFF()
		{
			BUFF.clear();
		}
	} //namespace settings
} //namespace ig
