#include "OblongRoom.h"
#include <iostream>
#include "GameManager.h"

OblongRoom::OblongRoom(String& name, int a_roomID)
{
	roomID = a_roomID;
	roomName.Append(name.Cstr());
}

OblongRoom::OblongRoom()
{


}



OblongRoom::~OblongRoom()
{
	

}

void OblongRoom::lose()
{
	


	

}

int OblongRoom::ProcessInput()
{

	char object[9] = "Snakes";
	std::cout << "There are" << " " << object << " " << "in this room." << std::endl;
	std::cout << "The" << " " << object << " " << "have bitten you" << std::endl;

	std::cout << "You lose" << std::endl;
	return roomID;

}