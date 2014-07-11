#ifndef NETWORK_H_
#define NETWORK_H_
#include "citynode.hpp"
#include <string>
#include <thread>
#include <mutex>

class Network
{
private:
	CityNode*						cityList;
	int								cityCount;
	/* legacy data */
    unsigned int*					distanceArray;
    unsigned int*					pathArray;
	bool*							includeArray;
	CityNode**						cityArray;

	/* for threading */
	static unsigned int*			toDistanceArrayMinutes;
	static unsigned int*			toPathArrayMinutes;
	static bool*					toIncludeArrayMinutes;

	static unsigned int*			toDistanceArrayDistance;
	static unsigned int*			toPathArrayDistance;
	static bool*					toIncludeArrayDistance;

	static unsigned int*			fromDistanceArrayMinutes;
	static unsigned int*			fromPathArrayMinutes;
	static bool*					fromIncludeArrayMinutes;

	static unsigned int*			fromDistanceArrayDistance;
	static unsigned int*			fromPathArrayDistance;
	static bool*					fromIncludeArrayDistance;
									/*the array to check if the threads
									collided*/
	static bool*					minuteIncludeCheck;
	static bool*					distanceIncludeCheck;

									/*where in the array they met,
									to pull that city's info as well*/
	static unsigned int				minuteMeetingPointIndex;
	static unsigned int				distanceMeetingPointIndex;

	std::mutex						distanceLock;
	std::mutex						minuteLock;

    void							printMenu();
    bool							addCity(const std::string& cityName);
	void							clearNetwork();
									/*
									/*	Think of CityA as the first city to recieve the connection, and B as the 'destination'
									/*	of this connection.
									/*
									/*	Using the first addConnection sets equal time and distance to both cityA and cityB
									*/
    bool							addConnection(const std::string& cityA, const std::string& cityB,
										int distance, int time);
    bool							loadNetwork(const std::string& networkFile);
	bool							saveNetwork(const std::string& networkFile);
    bool							findPath(const std::string& cityA,
									const std::string& cityB);
	bool							solveMinutes(const bool direction, CityNode* cityName);
	bool							solveDistance(const bool direction, CityNode* cityName);
    void							listCities();
    void							showNetwork();

public:
    /*cstr*/						Network();
	/*dstr*/						~Network();

	int								getCityCount(){return cityCount;};


	int								runNetwork();
};


#endif //NETWORK_H_