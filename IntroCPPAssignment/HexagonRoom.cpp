#include "HexagonRoom.h"
#include <iostream>
#include "GameManager.h"

HexagonRoom::HexagonRoom(String& name, int a_roomID)
{
	
	
	
	roomID = a_roomID;
	roomName.Append(name.Cstr());
}

void HexagonRoom::lose()
{
	std::cout << "You lose" << std::endl;
	
	bool running = false;

}


HexagonRoom::~HexagonRoom()
{

	


}

int HexagonRoom::ProcessInput()
{
	char object[9] = "Monster";
	std::cout << "There is a" << " " << object << " " << "in here" << std::endl;
	std::cout << "The" << " " << object << " " << "has eaten you" << std::endl;
	return roomID;
	
}

HexagonRoom::HexagonRoom()
{


}
