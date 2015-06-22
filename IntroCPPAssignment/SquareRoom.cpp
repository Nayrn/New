#include "SquareRoom.h"
#include <iostream>

SquareRoom::SquareRoom()
{


}

SquareRoom::SquareRoom(String& name, int a_roomID)
{
	
	roomID = a_roomID;
	roomName.Append(name.Cstr());
}


SquareRoom::~SquareRoom()
{
	

}

void SquareRoom::win()
{
	char object[9] = "Chest";
	std::cout << "You have found a" << " " << object << std::endl;
	std::cout << "Type open to open the " << " " << object << std::endl;
	// if user has key then std::cout << "You win!" << std::endl;
	// also have user type in "open" to open the chest, use strcmp

}

int SquareRoom::ProcessInput()
{
	Welcome();
	win();
	String uInput;
	uInput.ReadFromConsole();
	uInput.ToLower();

	if (uInput.Equalto("back"))
	{
		std::cout << "Valid " << std::endl;
		return 0;
	}
	else
	{

		std::cout << "Dead end, try again" << std::endl;
		system("pause");
		return roomID;
	}
	return roomID;

}
