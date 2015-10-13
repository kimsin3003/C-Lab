#include "stdafx.h"
#include "BoxOffice.h"
#include "Strategy.h"

BoxOffice* BoxOffice::instance = nullptr;

void BoxOffice::AddPassenger(Passenger* passenger)
{
	passengers.push_back(passenger);
}

vector<Passenger*> BoxOffice::PlayTern(const int time, Strategy* strategy)
{
	vector<Passenger*> passengersToPlatform;
	passengersToPlatform.reserve(3);
	Server* server;
	

	for (int i = 0; i < 3; i++) {
		server = servers[i];

		//If server has passenger, serve him.
		if (server->HasPassenger())
			server->Serve();
		else if (passengers.size() > 0) {
			Passenger* passenger = strategy->NextPassenger(passengers);

			passenger->SetTicketingStartTime(time);
			passenger->SetTicketingWaitingTime(time - passenger->GetOfficeArrivalTime());

			server->SetPassenger(passenger);
		}

		//If serving is over, send passenger to platform.
		if (server->IsOver()) {
			passengersToPlatform.push_back(server->GetPassenger());
			server->SetPassenger(nullptr);
		}

		
	}

	return passengersToPlatform;
}

bool BoxOffice::HasPassengers()
{
	if (passengers.size() == 0) {
		for (int i = 0; i < 3; i++) {
			if (servers[i]->HasPassenger())
				return true;
		}
		return false;
	}
	else
		return true;
}

BoxOffice::BoxOffice()
{
	for (int i = 0; i < 3; i++)
		servers[i] = new Server();
}

BoxOffice::~BoxOffice()
{
	delete instance;
	passengers.clear();
	delete[] servers;
}
