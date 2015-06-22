#ifndef OBLONGROOM
#define OBLONGROOM

#include "Room.h"
class OblongRoom :
	public Room
{
public:
	
	OblongRoom();
	OblongRoom(String& name, int a_roomID);
	~OblongRoom();
	void lose();
	int ProcessInput();
};

#endif