
#include <ig_login.h>
#include <string>
#include <ig_api.h>

int main(int argc, char* argv[], char* envp[])
{
	//ig::settings::ig_login Login;
	//Login.add_credentials();
	//Login.get_credentials(NULL_str);
	//Login.get_credentials("artarchvogue1");
	//Login.check_secret();
	//Login.print_credentials();
	//Login.delete_credentials();
	//std::string str8("en espa\xc3\xb1ol");
	//std::cout << str8 << std::endl;
	ig::API::API<const char*> _API;
	_API.login();
} 