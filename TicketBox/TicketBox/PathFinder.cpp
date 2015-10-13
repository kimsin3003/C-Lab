#include "stdafx.h"
#include "PathFinder.h"

PathFinder* PathFinder::instance = nullptr;

PathFinder::PathFinder()
{
}


PathFinder::~PathFinder()
{
}


PathFinder* PathFinder::GetInstance() {
	if (instance == nullptr)
		instance = new PathFinder();
	return instance;
}

int PathFinder::GetTravelTime(char* startPoint, char* endPoint) {
	int s_index = GetIndex(startPoint);
	int e_index = GetIndex(endPoint);
	if (s_index == -1 || e_index == -1)
		cout << "index finding error" << endl;
	return travelTime[s_index][e_index];
}

int PathFinder::GetIndex(char* stationName) {

	if (strcmp(stationName, "Seoul") == 0)
		return 0;

	if (strcmp(stationName, "Chuncheon") == 0)
		return 1;

	if (strcmp(stationName, "Wonju") == 0)
		return 2;

	if (strcmp(stationName, "Gyeongju") == 0)
		return 3;

	if (strcmp(stationName, "Deajeon") == 0)
		return 4;

	if (strcmp(stationName, "Asan") == 0)
		return 5;

	if (strcmp(stationName, "Gwangju") == 0)
		return 6;
	return -1;
}