#pragma once

#include <iostream>


class Console
{
private:
	double Temp;
public:
	void input_OutsideTemp();
	void output_Results();
	void write(const char[]);

	double getTemp();
};

