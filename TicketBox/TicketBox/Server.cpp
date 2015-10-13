#include "stdafx.h"
#include "Server.h"

bool Server::HasPassenger()
{
	if (leftTime <= 0)
		return false;
	return true;
}

void Server::SetPassenger(Passenger* Ipassenger)
{
	passenger = Ipassenger;
	if(passenger != nullptr)
		leftTime = Ipassenger->GetTicketingTime();
}

bool Server::IsOver()
{
	if (leftTime == 0) {
		leftTime = -1;
		return true;
	}
	return false;
}

void Server::Serve()
{
	leftTime--;
}

Server::Server()
{
	passenger = nullptr;
	leftTime = -1;
}


Server::~Server()
{
}
