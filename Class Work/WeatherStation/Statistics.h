#pragma once

#include "IObserver.h"
#include <iostream>

class Statictics : public IObserver
{
public:
	void Update(double temp, double hum)
	{
		m_averageHum = (m_averageHum * m_count + hum) / (m_count + 1);
		m_averageTemp = (m_averageTemp * m_count + temp) / (m_count + 1);
		m_count++;

		if (m_count == 0 )
		{
			m_maxTemp = temp;
			m_maxHum = hum;
		}
		else
		{
			if (m_maxTemp < temp)
			{
				m_maxTemp = temp;
			}
			if (m_maxHum < hum)
			{
				m_maxHum = hum;
			}
			if (m_minTemp > temp)
			{
				m_minTemp = temp;
			}
			if (m_minHum > hum)
			{
				m_minHum = hum;
			}
		}
		Display();
	}

	void Display()
	{
		std::cout << "Average Temp: " << m_averageTemp << " C\n";
		std::cout << "Averag Hum: " << m_averageHum << " %\n";
		std::cout << "Max Temp: " << m_maxTemp << " C\n";
		std::cout << "Max Hum: " << m_maxHum << " %\n";
		std::cout << "Min Temp: " << m_minTemp << " C\n";
		std::cout << "Min Hum: " << m_minHum << " %\n";
	}
private:
	double m_minTemp = 0;
	double m_minHum = 0;
	double m_maxTemp = 0;
	double m_maxHum = 0;
	double m_averageTemp = 0;
	double m_averageHum = 0;
	int m_count = 0;
};