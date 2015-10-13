#pragma once
#include "Passenger.h"
class Strategy
{
public:
	Strategy();
	~Strategy();
	virtual Passenger* NextPassenger(vector<Passenger*>& passengers) = 0;
};

