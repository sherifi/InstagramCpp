#pragma once

#define SPACE " "

#include <string>
#include <iostream>

namespace ig
{
	namespace settings
	{
		typedef enum logger_level
		{
			NONE = 0,
			FATAL,
			ERROR,
			WARN,
			INFO,
			DEBUG,
			TRACE,
			ALL
		}logger_level;

		const char* stringfy_logg(const logger_level& _level);

		typedef class logger
		{
		public:
			logger();
			~logger();
			void Log(const logger_level& _level, const char* _mssg);
		}logger;
	}
}


