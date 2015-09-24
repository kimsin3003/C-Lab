#include "stdafx.h"
#include "RiverBarge.h"


RiverBarge::RiverBarge(int distance, int efficiency)
	:Vehicle(distance, efficiency)
{
	tripDistance = distance;
	fuelEfficiency = efficiency;
}


RiverBarge::~RiverBarge()
{
}


double RiverBarge::calcTripDistance()
{
	return tripDistance;
}

double RiverBarge::calcFuelEfficiency()
{
	return fuelEfficiency * 1.2;
}