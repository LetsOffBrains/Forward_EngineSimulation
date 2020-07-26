#include "Engine.h"

Engine::Engine()
{
}

Engine::Engine(double var) : Temp(var)
{
}

void Engine::setTemp(double var)
{
	Temp = var;
}
