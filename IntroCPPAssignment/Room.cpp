#include "Room.h"
#include <iostream>

Room::Room()
{

	char object[9] = " ";
	
	

}

Room::Room(String& name, int a_roomID)
{
	roomID = a_roomID;
	roomName.Append(name.Cstr());

}


Room::~Room()
{


}

void Room::Welcome()
{
	
	std::cout << " You are in " << roomName.Cstr() <<  "Room" << std::endl;
	

}

int Room::ProcessInput()
{
	Welcome();
	std::cout << "please select from and type in MoveNorth, MoveSouth, MoveEast or MoveWest to choose from one of four doors" << std::endl;
	std::cout << "Or type in Back to return to the main room." << std::endl;
	String uInput;
	uInput.ReadFromConsole();
	uInput.ToLower();
	if (uInput.Equalto("movenorth"))
	{

		std::cout << "Valid" << std::endl;
		return 4;
	}
	else if (uInput.Equalto("moveeast"))
	{
		std::cout << "Valid" << std::endl;
		return 1;

	}
	else if (uInput.Equalto("movesouth"))
	{
		std::cout << "Valid" << std::endl;
		return 2;
	}
	else if (uInput.Equalto("movewest"))
	{
		std::cout << "Valid" << std::endl;
		return 3;

	}
	else
	{

		std::cout << "Invalid, try again" << std::endl;
		system("pause");
		return roomID;
	}
	return roomID;
}


