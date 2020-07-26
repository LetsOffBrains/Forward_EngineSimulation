#include "TestStand.h"

TestStand::TestStand()
{
}

TestStand::TestStand(double var) : Temp(var)
{
}

void TestStand::setTemp(double var)
{
	Temp = var;
	if(eng != nullptr)
		eng->setTemp(var);
}

void TestStand::setEngine(Engine* var)
{
	eng = var;
	eng->setTemp(Temp);
}
