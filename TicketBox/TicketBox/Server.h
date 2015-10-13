#pragma once
#include "Passenger.h"
class Server
{
public:

	bool HasPassenger();
	void SetPassenger(Passenger* Ipassenger);
	Passenger* GetPassenger() { return passenger; }
	bool IsOver();
	void Serve();
	Server();
	~Server();

private:
	Passenger* passenger;
	int leftTime;
};

