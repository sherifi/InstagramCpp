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

		template <typename T>
		class Logger
		{
		public:
			Logger();
			~Logger();
			void Log(const logger_level& _level, T _mssg);
		};
	}
}


