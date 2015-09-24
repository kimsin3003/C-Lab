#pragma once
class Vehicle
{
public:
	virtual double calcFuelNeeds() final {
		return calcTripDistance() / calcFuelEfficiency();
	}



	Vehicle(int distance, int efficiency);
	~Vehicle();

protected:
	int tripDistance;
	int fuelEfficiency;

private:
	virtual double calcTripDistance() = 0;
	virtual double calcFuelEfficiency() = 0;
};

