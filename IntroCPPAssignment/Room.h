#ifndef ROOM
#define ROOM
#include "StrUtility.h"
class Room
{
public:

	
// get rid of this and restructure it like roomID to show inheritance
	Room();
	Room(String& name, int a_roomID, String& object);
	~Room();
	void Welcome();
	int roomID;
	int ProcessInput();
	
	
	String roomName;
	String Object;
	

};

#endif