#pragma once

#include "IObserver.h"
#include <vector>

class WeatherStation
{
public:
	WeatherStation();
	~WeatherStation();

	void Set(double temp, double hum);
	double GetHum() const;
	double GetTemp() const;

	void AddObserver(IObserver* observer);
	void RemoveObserver(IObserver* observer);
	void NotifyObservers();

private:
	double m_temp;
	double m_hum;

	std::vector<IObserver*> m_observers;
};

