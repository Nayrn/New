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

	
}

int SquareRoom::ProcessInput()
{
	Welcome();


	std::cout << "You have found a" << " " << Object.Cstr() << std::endl;
	std::cout << "Type in a keyword to open the " << " " << Object.Cstr() << std::endl;
	String uInput;
	uInput.ReadFromConsole();
	uInput.ToLower();
	while (true)
	{

		if (uInput.Equalto("open"))
		{
			std::cout << "You win" << std::endl;
			system("pause");
			break;
		}
		else
		{
			std::cout << "Wrong keyword, try again" << std::endl;
			system("pause");

			uInput.ReadFromConsole();
			uInput.ToLower();


		}
		

	}

	return 0;

}
