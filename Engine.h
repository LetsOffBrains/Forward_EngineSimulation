#pragma once
class Engine
{
private:
	int I = 10;
	int M[6] = {20, 75, 100, 105, 75, 0};
	int V[6] = { 0, 75, 150, 200, 250, 300 };
	double T_overheat = 110;
	double Hm = 0.01;
	double Hv = 0.0001;
	double C = 0.1;
	double Temp = 0.0;
public:
	Engine();
	Engine(double);

	void setTemp(double);
};

