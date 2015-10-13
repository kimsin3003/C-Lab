#include "stdafx.h"
#include "LTFO.h"


LTFO::LTFO()
{
}


LTFO::~LTFO()
{
}

Passenger* LTFO::NextPassenger(vector<Passenger*>& passengers)
{
	Passenger* result;
	auto temp = passengers.begin();
	for (auto iter = passengers.begin() + 1; iter != passengers.end(); iter++) {
		if ((*temp)->GetTicketingTime() > (*iter)->GetTicketingTime())
			temp = iter;
	}
	result = *temp;
	passengers.erase(temp);
	return result;
}
