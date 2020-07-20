#include "Console.h"

void Console::Input_OutsideTemp()
{
	std::cout << "Enter outside temperature: ";
	std::cin >> outTemp;
	std::cout << std::endl;
}

void Console::Output_Results()
{
	std::cout << "Some results like done in 5 sec." << std::endl;
}

