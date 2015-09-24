#include "stdafx.h"
#include "Company.h"
#include "Vehicle.h"

Company* Company::instance = nullptr;

void Company::AddVehicle(Vehicle* vehicle) {
	myVehicles.push_back(vehicle);
}

Company::Company()
{
}


Company::~Company()
{
}
