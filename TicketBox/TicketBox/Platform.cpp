#include "stdafx.h"
#include "Platform.h"

Platform* Platform::instance = nullptr;

void Platform::AddPassengers(vector<Passenger*> incommingPassengers)
{
	for (auto iter = incommingPassengers.begin(); iter != incommingPassengers.end(); iter++) {
		passengers.push_back(*iter);
	}
}

vector<Passenger*> Platform::PlayTern(const int time)
{
	vector<Passenger*> leftPassengers;

	
	if (time % 3 == 0) {
		if (passengers.size() > 0) {
			for (auto iter = passengers.begin(); iter != passengers.end(); iter++) {
				Passenger* leftPassenger = *iter;

				//set information
				leftPassenger->SetTrainArrivingTime(time);

				int trainWaitingTime = time - (leftPassenger->GetTicketingStartTime() + leftPassenger->GetTicketingTime());
				
				leftPassenger->SetTrainWaitingTime(trainWaitingTime);

				leftPassenger->SetTrainArrivingTime(time);

				int destinationArrivingTime = time + pathFinder->GetTravelTime(leftPassenger->GetLeavingStation(), leftPassenger->GetArrivingStation());
				leftPassenger->SetDestinationArrivingTime(destinationArrivingTime);


				leftPassengers.push_back(leftPassenger);
			}
			passengers.clear();
		}
	}
	return leftPassengers;
}

Platform::Platform()
{
	pathFinder = PathFinder::GetInstance();
}


Platform::~Platform()
{
	instance = nullptr;
}
