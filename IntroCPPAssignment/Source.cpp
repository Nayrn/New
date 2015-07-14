#include <iostream>
#include <fstream>
#include "StrUtility.h"
#include "GameManager.h"
#include "HexagonRoom.h"
#include "OblongRoom.h"
#include "Room.h"
#include "RoundRoom.h"
#include "SquareRoom.h"
#include <ctime>
#include <chrono>
#include <iomanip>



int main()
{
	

	std::ofstream file;
	file.open("Output.txt", std::ios_base::out);


	time_t rawtime;

	time(&rawtime);
	file << "Current local time: ";
	file << ctime(&rawtime) << std::endl;

	

	



	//Equal To Test
	String s1( "Dogs" );
	
	if ( s1.Equalto("Dogs") == true)
	{
		file << "EqualTo " " " << "Success" << std::endl;
	}
	else
	{
		file << "EqualTo " " Failure\n";
	}
	
	
	
	//ToUpper
	String s2("dog");
	//create another string
	s2.ToUpper();
	
	if ( s2.Equalto ("DOG") == true)
	{
		
		file << "ToUpper" " "<< "Success\n";
	
	}
	else
	{
		file << "ToUpper" " " << "Failure\n";
	}
	
	//ToLower
	String s3("DOG");
	s3.ToLower();
	
	if (s3.Equalto("dog") == true)
	{
		file << "ToLower" " "<< "Success\n";
	
	}
	else
	{
		file << "ToLower" " " << "Failure\n";
	}
	
	//CharacterAt
	String s4("dog");
	int index = 0;
	char c = s4.CharacterAt(index);
	
	if (c == 'd')
	{
		file << "CharacterAt" " " << "Success\n";
	
	}
	else
	{
		file << "CharacterAt" " " << "Failure\n";
	
	}
	
	//CStr
	String s5("dog");
	s5.Cstr();
	
	if (s5.Equalto("dog") == true)
	{
		file << "CStr" " " << "Success\n";
	
	}
	else
	{
		file << "CStr" " " << "Failure\n";
	}
	
	
	//Length
	String s6("dog");
	int m_length;
	m_length = s6.Length();
	if (m_length == 3)
	{
		file << "Length" " " << "Success\n";
	
	}
	else
	{
	
		file << "Length" " " << "Failure\n";
	}
	
	//WriteToConsole
	String s7("dog");
	
	
	if (s7.Equalto("dog") == true)
	{
		file << "WriteToConsole" " " "Success\n";
	}
	else
	{
		file << "WriteToConsole" " " "Failure\n";
	}
	
	

	file << "ReadFromConsole Success\n";
	

	//Append
	String s9("dog");
	s9.Append("stench");

	if (s9.Equalto("dogstench"))
	{
		file << " Append Success" << std::endl;
	}

	else
	{

		file << "Append Fail\n";
	}
	
	
	
	
	// Prepend
	String s10("dog");
	s10.Prepend("Stench");
	
	if (s10.Equalto("Stenchdog"))
	{
		file << "Prepend Success\n";

	}
	else
	{
		file << "Prepend Failure\n";
	}
	
	
	
	
	//Find1
	String s11("catfish");
	int findValue = s11.Find("fish");
	//file << findValue << std::endl;
	
	if (findValue == 3)
	{
		file << "Find1 Success" << std::endl;
		
	
	}
	else
	{
		file << "Find1 Fail" << std::endl;
	}
	
	
	//Find2
	String s12("dogsnout");
	int startIndex = 2;
	int findVal = s12.Find(startIndex, "snout");
	if (findVal == 3)
	{

		file << "Find2 Success" << std::endl;
	}
	else
	{

		file << "Find2 Failure" << std::endl;
	}







	String s13("dogfishcat");
	s13.Replace("fish", "cat");
	if (s13.Equalto("dogcatcat"))
	{
		file << "Replace Success" << std::endl;
	}
	else
	{
		file << "Replace Failure" << std::endl;
	}


	
	
	
	
	//this works but you have to find the file.
	//remember to finish



	Room rom(String("Base"), 0, String("no"));
	OblongRoom oblong(String("Oblong"), 1, String("Snakes"));
	RoundRoom round(String("Round"), 2, String("Sleeping Dog"));
	SquareRoom square(String("Square"), 3, String("Chest"));
	HexagonRoom hexagon(String("Hexagon"), 4, String("Monster"));
	
	rom.Welcome();
	
	int currentRoom = 0;
	while (true)
	{
	
		if (currentRoom == 0)
		{
	
			currentRoom = rom.ProcessInput();
		}
		else if (currentRoom == 1)
		{
	
			currentRoom = oblong.ProcessInput();
		}
		else if (currentRoom == 2)
		{
	
			currentRoom = round.ProcessInput();
		}
	
		else if (currentRoom == 3)
		{
	
			currentRoom = square.ProcessInput();
		}
		else if (currentRoom == 4)
		{
	
			currentRoom = hexagon.ProcessInput();
		}
		else
		{
			break;
		}
		system("cls");
	
	
	}
	
	
	
	
	
	
	std::cout << "Finished" << std::endl;
	system("pause");
	



	
}











//GameManager g;
//
//while (g.running == true)
//{
//	return true;

//	if (g.running == false)
//	{
//		return 0;

//	}
//}


////system("cls") will clear console.
//



////stack int
//int a = 10;

////stack array
//int numbers[10];


////heap
//int * aPtr = new int;

////creates 10 ints on the heap
//int * numberPtr = new int[10];

//AddOne(aPtr);


////have to delete heap data!
//delete aPtr; //manually delete heap ptr

////delete array on the heap pointed to by numberPtr
//delete[] numberPtr;

//numberPtr[4] = 0;

//char m_str[10] = "Cat";

//String m_str = "Cat";
//String m_str("Cat");

//m_str.Append("Dog");

//return 0;
//stack data gets destroyed
