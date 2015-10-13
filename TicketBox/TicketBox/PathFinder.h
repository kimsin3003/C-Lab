#pragma once
class PathFinder
{
public:
	static PathFinder* GetInstance();
	int GetTravelTime(char* startPoint, char* endPoint);
	~PathFinder();

private:
	static PathFinder* instance;
	int GetIndex(char* stationName);
	const int travelTime[7][7] = { { 0, 16,22, 44, 29, 20, 41 },
	{ 16, 0, 28, 31, 45, 36, 49 },
	{ 22, 28, 0, 32, 23, 42, 53 },
	{ 44, 31, 32, 0, 5, 43, 18 },
	{ 29, 45, 23, 15, 0, 35, 12 },
	{ 20, 36, 42, 43, 35, 0, 25 },
	{ 41, 49, 35, 18, 12, 25, 0 } };
	PathFinder();

};

