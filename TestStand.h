#pragma once

#include "Engine.h"

class TestStand
{
private:
	double Temp = 0.0;
	Engine* eng = nullptr;
public:
	TestStand();
	TestStand(double);

	void setTemp(double);
	void setEngine(Engine*);
};

