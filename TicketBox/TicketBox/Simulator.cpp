#include "stdafx.h"
#include "Simulator.h"
#include "BoxOffice.h"
#include "Platform.h"
#include "Strategy.h"

Simulator* Simulator::instance = nullptr;

vector<Passenger*> Simulator::Simulate(Strategy* strategy, vector<Passenger*>& passengers)
{
	BoxOffice* office = BoxOffice::GetInstance();
	Platform* platform = Platform::GetInstance();

	int time = 0;
	vector<Passenger*> passengersToPlatform;
	vector<Passenger*> passengersLeavingPlatform;
	vector<Passenger*> resultData;
	bool continueCheck = true;

	

	while (continueCheck) {


		//incomming passengers at ticket box
		if (passengers.size() != 0) {
			
			Passenger* passenger = *passengers.begin();
			while (passenger->GetOfficeArrivalTime() == time) {
				office->AddPassenger(passenger);
				passengers.erase(passengers.begin());
				if(passengers.size() > 0)
					passenger = *passengers.begin();
				else
					break;
			}

		}

		//simulate office
		passengersToPlatform = office->PlayTern(time, strategy);

		//simulate platform
		platform->AddPassengers(passengersToPlatform);
		passengersLeavingPlatform = platform->PlayTern(time);
		
		for (auto& iter = passengersLeavingPlatform.begin(); iter != passengersLeavingPlatform.end(); iter++) {

			resultData.push_back(*iter);
		}

		

		time++;
		continueCheck = (passengers.size() != 0 || office->HasPassengers() || platform->HasPassenger());
	}

	return resultData;
}

void Simulator::GetEverageTicketingWaitingTime(vector<Passenger*> servedPassengers) {

	int sum = 0;
	for (auto iter = servedPassengers.begin(); iter != servedPassengers.end(); iter++) {
		sum += (*iter)->GetTicketingWaitingTime();
	}
	cout << "average: " << sum / servedPassengers.size() << endl;
}

Simulator::Simulator()
{
}


Simulator::~Simulator()
{
}
