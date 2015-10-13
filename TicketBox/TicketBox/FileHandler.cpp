#include "stdafx.h"
#include "FileHandler.h"
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

FileHandler* FileHandler::instance = nullptr;

void FileHandler::ReadPassengers(vector<Passenger*>& passengers)
{
	ifstream input;
	int id;
	int officeArrivalTime;
	int ticketingTime;
	char leavingStation[30];
	char arrivingStation[30];
	Passenger* p;
	input.open("passengerInfo.txt");
	while (input >> id >> officeArrivalTime >> ticketingTime >> leavingStation >> arrivingStation) {
		p = new Passenger(id, officeArrivalTime, ticketingTime, leavingStation, arrivingStation);
		//cout << "file data: " << " id: " << id << " arrivalTime: " << officeArrivalTime << " ticketing time: " << ticketingTime << " leavingStation: " << leavingStation << " arrivingStation: " << arrivingStation << endl;
		passengers.push_back(p);
	}
}

void FileHandler::WritePassengers(vector<Passenger*> passengers, char* fileName)
{
	ofstream output;
	Passenger* passenger;
	output.open(fileName);
	while (passengers.size() > 0) {
		passenger = *passengers.begin();
		//cout << " id: " << passenger->GetId() << " ticketingWaitingTime: " << passenger->GetTicketingWaitingTime() << " ticketingStartTime: " << passenger->GetTicketingStartTime() << "trainWaitingTime" << passenger->GetTicketingWaitingTime() << "trainArrivingTime" << passenger->GetTrainArrivingTime() << endl;
		output << " id: " << passenger->GetId() << " ticketingWaitingTime: " << passenger->GetTicketingWaitingTime() << " ticketingStartTime: " << passenger->GetTicketingStartTime() << " trainWaitingTime: " << passenger->GetTrainWaitingTime() << " trainArrivingTime: " << passenger->GetTrainArrivingTime() << " destinationArrivingTime: " << passenger->GetDestinationArrivingTime() << endl;
		passengers.erase(passengers.begin());
		delete passenger;
	}
}

FileHandler::FileHandler()
{
}


FileHandler::~FileHandler()
{
}
