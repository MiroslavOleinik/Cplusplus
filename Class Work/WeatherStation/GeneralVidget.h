#pragma once

#include <iostream>
#include "IObserver.h"

class GeneralVidget : public IObserver
{
public:
	void Update(double temp, double hum)
	{
		Display(temp, hum);
	}

	void Display(double temp, double hum)
	{
		std::cout << "Temp: " << temp << " C\n";
		std::cout << "Hum: " << hum << " %\n";
	}
};
