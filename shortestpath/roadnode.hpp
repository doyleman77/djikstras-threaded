#ifndef ROADNODE_H_
#define ROADNODE_H_
class CityNode;
//#include "citynode.hpp"
#include <iostream>
#include "citynode.hpp"

/*
 *	RoadReciept are linked lists to other roadNodes;
 *	Traverse until cityLink.getID() is what we're looking for;
 *	or nextRoad = NULL
*/

class RoadNode
{
private:
	unsigned int		minutes;
	unsigned int	    distance;
	CityNode*			cityLink;
	RoadNode*			nextRoad;

public:
	/*ctr*/				RoadNode(CityNode* theCity);
	unsigned int		getMinutes();
	unsigned int		getDistance();

	int					getCityID();
    void			    setMinutes(unsigned int mins);
    void				setDistance(unsigned int dist);

	bool				setCityLink(CityNode* city);
    CityNode*			getCityLink();
    RoadNode*			getNextRoad();

    void				setNextRoad(RoadNode* whichRoad);

};

#endif //ROADNODE_H_
