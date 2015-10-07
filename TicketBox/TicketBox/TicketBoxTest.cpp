#include "stdafx.h"
#include "FileHandler.h"
#include "Passenger.h"

int main()
{
	FileHandler fh;
	vector<Passenger*> passengers;
	fh.ReadPassengers(passengers);

    return 0;
}

