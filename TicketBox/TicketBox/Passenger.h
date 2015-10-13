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
	int GetTicketingWaitingTime() { return ticketingWaitingTime; }
	int GetTicketingStartTime() { return ticketingStartTime; }
	int GetTrainWaitingTime() { return trainWaitingTime; }
	int GetTrainArrivingTime() { return trainArrivingTime; }
	int GetDestinationArrivingTime() { return destinationArrivingTime; }

	void SetTicketingWaitingTime(int time) { ticketingWaitingTime = time; }
	void SetTicketingStartTime(int time) { ticketingStartTime = time; }
	void SetTrainWaitingTime(int time) { trainWaitingTime = time; }
	void SetTrainArrivingTime(int time) { trainArrivingTime = time; }
	void SetDestinationArrivingTime(int time) { destinationArrivingTime = time; }

private:
	int id;
	int officeArrivalTime;
	int ticketingTime;
	int ticketingWaitingTime;
	int ticketingStartTime;
	int trainWaitingTime;
	int trainArrivingTime;
	int destinationArrivingTime;
	char leavingStation[30];
	char arrivingStation[30];
};

