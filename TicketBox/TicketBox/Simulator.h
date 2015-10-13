#pragma once
#include "Passenger.h"
#include "Strategy.h"
class Simulator
{
public:
	vector<Passenger*> Simulate(Strategy* strategy, vector<Passenger*>& passengers);
	void GetEverageTicketingWaitingTime(vector<Passenger*> servedPassengers);
	static Simulator* GetInstance() {
		if (instance == nullptr)
			instance = new Simulator;
		return instance;
	}
	~Simulator();
private:
	static Simulator* instance;
	Simulator();
};

