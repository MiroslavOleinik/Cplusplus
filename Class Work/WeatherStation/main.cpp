#include "GeneralVidget.h"
#include "IObserver.h"
#include "Statistics.h"
#include "WeatherStation.h"

int main()
{
	WeatherStation station;

	Statictics sv;
	GeneralVidget gv;

	station.AddObserver(&sv);
	station.AddObserver(&gv);

	station.Set(20, 55);
	station.Set(22, 50);
	station.Set(19, 51);
	station.Set(20, 52);

	return 0;

}
