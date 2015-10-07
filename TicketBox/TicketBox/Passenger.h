#pragma once
class Passenger
{
public:
	Passenger(int id, int officeArrivalTime, int ticketingTime, char* leavingStation, char* arrivingStation);
	~Passenger();

	int GetId() { return id; }
	int GetOfficeArrivalTime() { return officeArrivalTime; }
	int GetTicketingTime() { return ticketingTime; }
	char* GetLeavingStation() { return leavingStation; }
	char* GetArrivingStation() { return arrivingStation; }

private:
	int id;
	int officeArrivalTime;
	int ticketingTime;
	char leavingStation[30];
	char arrivingStation[30];
};

