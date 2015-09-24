#include "stdafx.h"
#include "Truck.h"
#include "RiverBarge.h"
#include "Company.h"
#include "FuelNeedsReport.h"
#include "iostream"


int main() {
	Company* company = Company::GetInstance();

	company->AddVehicle(new Truck(300, 30));
	company->AddVehicle(new Truck(100, 20));
	company->AddVehicle(new Truck(200, 10));

	company->AddVehicle(new RiverBarge(100, 5));
	company->AddVehicle(new RiverBarge(500, 5));

	FuelNeedsReport* fnr = new FuelNeedsReport();
	std::cout << fnr->CalcFuelNeed(company->GetVehicle()) << std::endl;

}
