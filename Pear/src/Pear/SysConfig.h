#pragma once

#ifdef PEAR_PLATFORM_WINDOWS
	#ifdef PEAR_BUILD_DLL
		#define PEAR_API __declspec(dllexport)
	#else
		#define PEAR_API __declspec(dllimport)
	#endif // PEAR_BUILD_DLL
#else
	#error Only works for windows
#endif