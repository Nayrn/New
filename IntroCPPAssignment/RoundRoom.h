#ifndef ROUNDROOM
#define ROUNDROOM

#include "Room.h"
class RoundRoom :
	public Room
{
public:
	RoundRoom();
	RoundRoom(String& name, int a_roomID);
	~RoundRoom();
	void findKey();
	int ProcessInput();
	
};

#endif

