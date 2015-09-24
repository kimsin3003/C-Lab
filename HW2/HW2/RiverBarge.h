#pragma once
#include "Vehicle.h"
class RiverBarge : public Vehicle
{
public:
	RiverBarge(int distance, int efficiency);
	~RiverBarge();

	double calcTripDistance() override;
	double calcFuelEfficiency() override;

private:
	int tripDistance;
	int fuelEfficiency;
};

