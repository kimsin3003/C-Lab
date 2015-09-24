#pragma once
#include "Vehicle.h"
class Truck : public Vehicle
{
public:
	Truck(int distance, int efficiency);
	~Truck();

	double calcTripDistance() override;
	double calcFuelEfficiency() override;

};

