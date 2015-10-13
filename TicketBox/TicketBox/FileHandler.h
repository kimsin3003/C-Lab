#pragma once
#include <vector>
#include "Passenger.h"
class FileHandler
{
public:
	void ReadPassengers(vector<Passenger*>& passengers);
	void WritePassengers(vector<Passenger*> passengers, char* fileName);
	static FileHandler* GetInstance() {
		if (instance == nullptr)
			instance = new FileHandler;
		return instance;
	}
	~FileHandler();

private:
	static FileHandler* instance;
	FileHandler();
	
};

