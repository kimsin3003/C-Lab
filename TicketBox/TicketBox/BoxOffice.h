#pragma once
#include "Server.h"
#include "Passenger.h"
#include "Strategy.h"

class BoxOffice
{
public:
	void AddPassenger(Passenger* passenger);
	vector<Passenger*> PlayTern(const int time, Strategy* strategy);
	static BoxOffice* GetInstance() {
		if (instance == nullptr)
			instance = new BoxOffice;
		return instance;
	}
	bool HasPassengers();
	~BoxOffice();

private:
	static BoxOffice* instance;
	vector<Passenger*> passengers;
	BoxOffice();
	Server** servers = new Server*[3];
};

