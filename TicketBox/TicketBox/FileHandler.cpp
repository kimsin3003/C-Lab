#include "stdafx.h"
#include "FileHandler.h"
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>


void FileHandler::ReadPassengers(vector<Passenger*> passengers)
{
	ifstream input;
	int id;
	int officeArrivalTime;
	int ticketingTime;
	char leavingStation[30];
	char arrivingStation[30];
	char newLine[2];
	Passenger* p;
	input.open("passengerInfo.txt");
	while (input >> id >> officeArrivalTime >> ticketingTime >> leavingStation >> arrivingStation >>newLine) {
		p = new Passenger(id, officeArrivalTime, ticketingTime, leavingStation, arrivingStation);
		passengers.push_back(p);
	}
}

void FileHandler::WritePassengers(vector<Passenger*> passengers)
{

}

FileHandler::FileHandler()
{
}


FileHandler::~FileHandler()
{
}
