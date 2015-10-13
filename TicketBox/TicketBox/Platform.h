#pragma once
#include "Passenger.h"
#include "PathFinder.h"
class Platform
{
public:
	void AddPassengers(vector<Passenger*> incommingPassengers);
	vector<Passenger*> PlayTern(const int time);
	bool HasPassenger() {
		if (passengers.size() == 0)
			return false;
		return true;
	}


	static Platform* GetInstance() {
		if (instance == nullptr)
			instance = new Platform;
		return instance;
	}
	~Platform();

private:
	static Platform* instance;
	Platform();
	vector<Passenger*> passengers;
	PathFinder* pathFinder;
};

