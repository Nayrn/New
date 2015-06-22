#include "RoundRoom.h"
#include <iostream>



RoundRoom::RoundRoom(String& name, int a_roomID)
{
	
	roomID = a_roomID;
	roomName.Append( name.Cstr() );
}


RoundRoom::~RoundRoom()
{
	
}

void RoundRoom::findKey()
{
	char object[9] = "Key";
	std::cout << "You have found a" << " " << object << std::endl;
	std::cout << "Maybe it opens something" << std::endl;
	//figure out a way to find out if the user has come in to the roundroom.

}

int RoundRoom::ProcessInput()
{
	Welcome();
	findKey();
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

RoundRoom::RoundRoom()
{


}

