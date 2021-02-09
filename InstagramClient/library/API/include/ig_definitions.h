#pragma once

#ifdef _WIN32
#include <xstring>
	#ifdef INSTAGRAM_LIB_EXPORT
		#define EXPORT_INSTAGRAM __declspec(dllexport)
		#define EXPORT_INSTAGRAM_TMP
	#else
		#define EXPORT_INSTAGRAM __declspec(dllimport)
		#define EXPORT_INSTAGRAM_TMP extern "C"
	#endif
#endif // _WIN32

#ifdef __linux__
	#define EXPORT_INSTAGRAM
#endif // __linux__

