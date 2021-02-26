#include "App.h"

#include <iostream>

namespace Pear {

App::App()
{

}

App::~App()
{

}

void App::Run()
{
	std::cout << "Running app\n";
	std::cin.get();
}

}