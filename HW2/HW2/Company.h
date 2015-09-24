#pragma once
#include "Vehicle.h"
#include <vector>
class Company
{
public:
	void AddVehicle(Vehicle* vehicle);

	static Company* GetInstance() {
		if (instance == nullptr)
			instance = new Company();
		return instance;
	}
	std::vector<Vehicle*> GetVehicle() {
		return myVehicles;
	}

	~Company();

private:

	Company();
	std::vector<Vehicle*> myVehicles;
	static Company* instance;
};

