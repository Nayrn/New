#ifndef SQUAREROOM
#define SQUAREROOM
#include "Room.h"
class SquareRoom :
	public Room
{
public:
	SquareRoom();
	SquareRoom(String& name, int a_roomID, String& object);
	~SquareRoom();
	void win();
	int ProcessInput();


};

#endif