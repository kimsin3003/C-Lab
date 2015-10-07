#pragma once
#include <vector>
#include "Passenger.h"
class FileHandler
{
public:
	void ReadPassengers(vector<Passenger*> passengers);
	void WritePassengers(vector<Passenger*> passengers);
	FileHandler();
	~FileHandler();
	
};

