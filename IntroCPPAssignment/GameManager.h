#ifndef GAMEMANAGER
#define GAMEMANAGER
#include <iostream>
#include "OblongRoom.h"
#include "SquareRoom.h"
#include "HexagonRoom.h"
#include "Room.h"
#include "RoundRoom.h"
#include "StrUtility.h"

class GameManager 
{
public:
	GameManager();
	~GameManager();
	

	bool running();
	void Death();
	void Update();
	




private:


	
	bool m_running;
	int currentRoom;
	Room room1;
	SquareRoom room2;
	HexagonRoom room3;
	OblongRoom room4;
	RoundRoom room5;






};
#endif 