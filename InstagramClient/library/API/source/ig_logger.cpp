#include "ig_logger.h"

namespace ig
{
	namespace settings
	{
		std::string stringfy_logg(const logger_level& _level)
		{
			switch(_level)
			{
			case NONE:
				return "NONE";
			case FATAL:
				return "FATAL";
			case ERROR:
				return "ERROR";
			case WARN:
				return "WARN";
			case INFO:
				return "INFO";
			case DEBUG:
				return "DEBUG";
			case TRACE:
				return "TRACE";
			case ALL:
				return "ALL";
			default:
				return "NAN";
			}
		}
		logger::logger()
		{
		}
		logger::~logger()
		{
		}
		void logger::Log(const logger_level& _level, const std::string& _mssg)
		{
			switch (_level)
			{
				case NONE:
					std::cout << "[" << stringfy_logg(_level) << "]" << SPACE << "[" << _mssg << "]" << std::endl;
				case FATAL:
					std::cout << "[" << stringfy_logg(_level) << "]" << SPACE << "[" << _mssg << "]" << std::endl;
				case ERROR:
					std::cout << "[" << stringfy_logg(_level) << "]" << SPACE << "[" << _mssg << "]" << std::endl;
				case WARN:
					std::cout << "[" << stringfy_logg(_level) << "]" << SPACE << "[" << _mssg << "]" << std::endl;
				case INFO:
					std::cout << "[" << stringfy_logg(_level) << "]" << SPACE << "[" << _mssg << "]" << std::endl;
				case DEBUG:
					std::cout << "[" << stringfy_logg(_level) << "]" << SPACE << "[" << _mssg << "]" << std::endl;
				case TRACE:
					std::cout << "[" << stringfy_logg(_level) << "]" << SPACE << "[" << _mssg << "]" << std::endl;
				case ALL:
					std::cout << "[" << stringfy_logg(_level) << "]" << SPACE << "[" << _mssg << "]" << std::endl;
				default:
					std::cout << "[No logger specified.]" << std::endl;
			}
		}
	}
}
