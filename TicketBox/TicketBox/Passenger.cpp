#include "stdafx.h"
#include "Passenger.h"
#include <string>


Passenger::Passenger(int Iid, int IofficeArrivalTime, int IticketingTime, char* IleavingStation, char* IarrivingStation)
{
	id = Iid;
	officeArrivalTime = IofficeArrivalTime;
	ticketingTime = IticketingTime;
	strcpy(leavingStation,IleavingStation);
	strcpy(arrivingStation,IarrivingStation);
}

Passenger::~Passenger()
{
}
