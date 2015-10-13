#include "stdafx.h"
#include "FIFO.h"


FIFO::FIFO()
{
}


FIFO::~FIFO()
{
}

Passenger* FIFO::NextPassenger(vector<Passenger*>& passengers)
{
	Passenger* nextPassenger = *passengers.begin();
	passengers.erase(passengers.begin());
	return nextPassenger;
}

