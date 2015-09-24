#include "stdafx.h"
#include "FuelNeedsReport.h"


FuelNeedsReport::FuelNeedsReport()
{
}


FuelNeedsReport::~FuelNeedsReport()
{
}

double FuelNeedsReport::CalcFuelNeed(std::vector<Vehicle*> vehicles)
{
	double sum = 0;
	for (auto vehicle : vehicles) {
		sum += vehicle->calcFuelNeeds();
	}
	return sum;

}
