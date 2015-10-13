#include "stdafx.h"
#include "FileHandler.h"
#include "Passenger.h"
#include "Simulator.h"
#include "Strategy.h"
#include "FIFO.h"
#include "LTFO.h"

int main()
{
	FileHandler* fh = FileHandler::GetInstance();
	vector<Passenger*> passengers;
	fh->ReadPassengers(passengers);

	cout << "FIFO simulation start" << endl;
	Simulator* simulator = Simulator::GetInstance();
	Strategy* strategy = new FIFO();
	vector<Passenger*> servedPassengers = simulator->Simulate(strategy, passengers);
	simulator->GetEverageTicketingWaitingTime(servedPassengers);
	fh->WritePassengers(servedPassengers, "result1.txt");

	cout << "\nLTFO simulation start" << endl;
	fh->ReadPassengers(passengers);
	strategy = new LTFO();
	servedPassengers = simulator->Simulate(strategy, passengers);
	simulator->GetEverageTicketingWaitingTime(servedPassengers);
	fh->WritePassengers(servedPassengers, "result2.txt");

	return 0;
}

