#define MY_APPLICATION_MODULE_EXPORT

#include <cstdlib>
#include <memory>

#include "mylibrary.hpp"

int main(int argc, char **argv)
{
	std::unique_ptr<MyLibrary> myLibrary(new MyLibrary());
	myLibrary->execute();
	return EXIT_SUCCESS;
}