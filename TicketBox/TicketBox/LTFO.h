#pragma once
#include "Passenger.h"
#include "Strategy.h"
class LTFO : public Strategy
{
public:
	LTFO();
	~LTFO();
	Passenger* NextPassenger(vector<Passenger*>& passengers) override;
};

