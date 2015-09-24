#include "stdafx.h"
#include "Truck.h"


Truck::Truck(int distance, int efficiency)
	: Vehicle::Vehicle(distance, efficiency)
{
}


Truck::~Truck()
{
}

double Truck::calcTripDistance()
{
	return tripDistance;
}

double Truck::calcFuelEfficiency()
{
	return fuelEfficiency * 1.1;
}
