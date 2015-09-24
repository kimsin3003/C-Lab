#pragma once
#include <vector>
#include "Vehicle.h"

class FuelNeedsReport
{
public:
	FuelNeedsReport();
	~FuelNeedsReport();
	double CalcFuelNeed(std::vector<Vehicle*> vehicles);
};

