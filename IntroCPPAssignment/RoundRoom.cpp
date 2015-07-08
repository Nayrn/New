#include "RoundRoom.h"
#include <iostream>



RoundRoom::RoundRoom(String& name, int a_roomID, String& object)
{
	
	roomID = a_roomID;
	roomName.Append( name.Cstr() );
	Object.Append(object.Cstr());
}


RoundRoom::~RoundRoom()
{
	
}

void RoundRoom::findKey()
{
	
	
	std::cout << "Maybe it opens something" << std::endl;
	
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

