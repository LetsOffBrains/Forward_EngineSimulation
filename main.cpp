#include "Console.h"
#include "TestStand.h"
#include "Engine.h"

int main() {
	Console con;
	TestStand ts;
	Engine eng;

	con.input_OutsideTemp();

	ts.setTemp(con.getTemp());
	ts.setEngine(&eng);
	

	//con.write("Something");

	con.output_Results();
	return 0;
}

