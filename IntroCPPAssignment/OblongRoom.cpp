#include "OblongRoom.h"
#include <iostream>
#include "GameManager.h"

OblongRoom::OblongRoom(String& name, int a_roomID, String& object)
{
	roomID = a_roomID;
	roomName.Append(name.Cstr());
	Object.Append(object.Cstr());
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

	
	
	std::cout << "The" << " " << Object.Cstr() << " " << "have bitten you" << std::endl;
	std::cout << "You lose" << std::endl;
	system("pause");
	return 0;


}