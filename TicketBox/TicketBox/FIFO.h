#pragma once
#include "Strategy.h"
#include "Passenger.h"
class FIFO :
	public Strategy
{
public:
	FIFO();
	~FIFO();
	Passenger* NextPassenger(vector<Passenger*>& passengers) override;
};

