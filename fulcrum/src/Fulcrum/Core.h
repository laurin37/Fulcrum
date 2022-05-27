#pragma once

#ifdef FC_PLATFORM_WINDOWS
	#ifdef FC_BUILD_DLL
		#define FULCRUM_API __declspec(dllexport)
	#else
		#define FULCRUM_API __declspec(dllimport)
	#endif
#else
	#error Fulcrum only supports Windows for now!
#endif