#ifndef ROADRECIEPT_H_
#define ROADRECIEPT_H_

#include "roadnode.hpp"

class RoadReciept
{
private:
	CityNode*		cityLink;
	RoadReciept*	nextReciept;

public:
	CityNode*		getCityLink();
	RoadReciept*	getNextReciept();
};

#endif