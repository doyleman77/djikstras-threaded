#ifndef CITYNODE_H_
#define CITYNODE_H_
#include "roadnode.hpp"
#include "roadReciept.hpp"
#include <string>

class RoadNode;

/*
 *	CityNode are linked lists to other CityNodes;
 *	Traverse until getID() is what we're looking for;
 *	or nextCity = NULL
*/

class CityNode
{
private:
	std::string		name;
	RoadNode*		roads;
	RoadNode*		roadReciepts;

	int				id; //index
	CityNode*		nextCity; //linked list form.
public:
	/*constr*/		CityNode(const std::string& name, int id);
	//void			getroad(){};
	//void			setName(const std::string& name);
	//int				getID(){return id;};
	//bool			addRoad(); //maybe pass a reference to the destination city?
	int				getID();
	std::string		getName();
	CityNode*		getNextCity();
	RoadNode*		getConnection();
	RoadNode*		getReciept();

	void			setNextCity(CityNode* whichCity);
	void            setConnection(RoadNode* newRoad);
	void			setReciept(RoadNode* newReciept);
};

#endif //CITYNODE_H_
