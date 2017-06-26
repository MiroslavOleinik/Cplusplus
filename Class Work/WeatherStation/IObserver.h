#pragma once

class IObserver
{
public:
	virtual ~IObserver() = default;
	virtual void Update(double temp, double hum) = 0;
};