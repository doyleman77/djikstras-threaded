#include "citynode.hpp"
#include <iostream>

CityNode::CityNode(const std::string& t_name, int t_id)
{
    this->name = t_name;
    this->id = t_id;
    nextCity = NULL;
	roads = NULL;
	roadReciepts = NULL;
};

int	CityNode::getID()
{
    return id;
};

std::string	CityNode::getName()
{
    return name;
};

CityNode* CityNode::getNextCity()
{
    return nextCity;
}

void CityNode::setNextCity(CityNode* whichCity)
{
    nextCity = whichCity;
};

void CityNode::setConnection(RoadNode* newRoad)
{
    roads = newRoad;
};

RoadNode* CityNode::getConnection()
{
    return roads;
};

RoadNode* CityNode::getReciept()
{
	return roadReciepts;
};

void CityNode::setReciept(RoadNode* newReciept)
{
	roadReciepts = newReciept;
}