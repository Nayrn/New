#include "SquareRoom.h"
#include <iostream>

SquareRoom::SquareRoom()
{


}

SquareRoom::SquareRoom(String& name, int a_roomID, String& object)
{
	
	roomID = a_roomID;
	roomName.Append(name.Cstr());
	Object.Append(object.Cstr());
}


SquareRoom::~SquareRoom()
{
	

}

void SquareRoom::win()
{
	std::cout << "You have found a" << " " << Object.Cstr() << std::endl;
	std::cout << "Type open to open the " << " " << Object.Cstr() << std::endl;
	String uInput;
	uInput.ReadFromConsole();
	uInput.ToLower();

	if (uInput.Equalto("open"))
	{
		std::cout << "You win" << std::endl;
	}

	
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
