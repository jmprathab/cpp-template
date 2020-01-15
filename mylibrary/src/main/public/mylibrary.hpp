/**
// Defines the interface for shell implementation
// This is the base class, any new shell should inherit this class
**/
#pragma once

#ifdef _WIN32
#ifdef MY_LIBRARY_MODULE_EXPORT
#define MY_LIBRARY_API __declspec(dllexport)
#else
#define MY_LIBRARY_API __declspec(dllimport)
#endif
#else
#define MY_LIBRARY_API
#endif

MY_LIBRARY_API class MyLibrary
{
public:
	MY_LIBRARY_API MyLibrary();
	MY_LIBRARY_API ~MyLibrary();
	MY_LIBRARY_API void execute();
};
