#define MY_LIBRARY_MODULE_EXPORT

#include "mylibrary.hpp"

#include <iostream>

MyLibrary::MyLibrary()
{
	std::cout << "MyLibrary : constructor\n";
}

MyLibrary::~MyLibrary()
{
	// Nothing to do here
}

void MyLibrary::execute()
{
	std::cout << "MyLibrary : execute()\n";
}
