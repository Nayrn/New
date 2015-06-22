#ifndef HEXAGONROOM
#define HEXAGONROOM
#include "OblongRoom.h"
#include "Room.h"
#include <iostream>

class HexagonRoom :
	
	public OblongRoom
{
public:
	HexagonRoom();
	HexagonRoom(String& name, int a_roomID);
	~HexagonRoom();
	void lose();
	int ProcessInput();

	



};















#endif