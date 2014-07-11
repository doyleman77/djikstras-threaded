#include "roadnode.hpp"
#include "citynode.hpp"

RoadNode::RoadNode(CityNode* theCity)
{
    cityLink = theCity;
};

int	RoadNode::getCityID()
{
    if(cityLink != NULL)
        return (cityLink->getID());
    else
        return -1;
};

void RoadNode::setMinutes(unsigned int mins)
{
    minutes = mins;
};

unsigned int RoadNode::getMinutes()
{
    return minutes;
};

void RoadNode::setDistance(unsigned int dist)
{
    distance = dist;
};
unsigned int	RoadNode::getDistance()
{
    return distance;
};

RoadNode* RoadNode::getNextRoad()
{
    return nextRoad;
};

CityNode* RoadNode::getCityLink()
{
    return cityLink;
};

bool RoadNode::setCityLink(CityNode* newLink)
{
    if(newLink)
    {
        cityLink = newLink;
        std::cout << "City linked properly!" << std::endl;
        return true;
    }
    else
    {
        std::cout << "Problem connecting to destination city!" << std::endl;
        return false;
    }
};


void RoadNode::setNextRoad(RoadNode* whichRoad)
{
    nextRoad = whichRoad;
};
