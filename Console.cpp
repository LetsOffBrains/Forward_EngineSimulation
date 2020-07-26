#include "Console.h"

void Console::input_OutsideTemp()
{
	std::cout << "Enter outside temperature: ";
	std::cin >> Temp;
	std::cout << std::endl;
}

void Console::output_Results()
{
	std::cout << "Some results like done in 5 sec." << std::endl;
}

void Console::write(const char text[])
{
	std::cout << text << std::endl;
}

double Console::getTemp()
{
	return Temp;
}

