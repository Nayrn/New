#ifndef ROOM
#define ROOM
#include "StrUtility.h"
class Room
{
public:

	
	char object[9];
	Room();
	Room(String& name, int a_roomID);
	~Room();
	void Welcome();
	int roomID;
	int ProcessInput();
	
	String roomName;
	
	

};

#endif