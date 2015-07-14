#include "HexagonRoom.h"
#include <iostream>
#include "GameManager.h"

HexagonRoom::HexagonRoom(String& name, int a_roomID, String& object)
{
	
	
	
	roomID = a_roomID;
	roomName.Append(name.Cstr());
	Object.Append(object.Cstr());
}

void HexagonRoom::lose()
{
	std::cout << "You lose" << std::endl;
	
	

}


HexagonRoom::~HexagonRoom()
{

	


}

int HexagonRoom::ProcessInput()
{

	std::cout << "The " << Object.Cstr() << " has eaten you" << std::endl;
	
	system("pause");
	return 0;
	
	
}

HexagonRoom::HexagonRoom()
{


}
