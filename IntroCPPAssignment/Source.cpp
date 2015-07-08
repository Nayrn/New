#include <iostream>
#include <fstream>
#include "StrUtility.h"
#include "GameManager.h"
#include "HexagonRoom.h"
#include "OblongRoom.h"
#include "Room.h"
#include "RoundRoom.h"
#include "SquareRoom.h"




int main()
{
	

	

	//Equal To Test
	String s1( "Dogs" );
	
	if ( s1.Equalto("Dogs") == true)
	{
		std::cout << "EqualTo " " "<< "Success\n";
	}
	else
	{
		std::cout << "EqualTo " " Failure\n";
	}
	
	
	
	//ToUpper
	String s2("dog");
	//create another string
	s2.ToUpper();
	
	if ( s2.Equalto ("DOG") == true)
	{
		
		std::cout << "ToUpper" " "<< "Success\n";
	
	}
	else
	{
		std::cout << "ToUpper" " " << "Failure\n";
	}
	
	//ToLower
	String s3("DOG");
	s3.ToLower();
	
	if (s3.Equalto("dog") == true)
	{
		std::cout << "ToLower" " "<< "Success\n";
	
	}
	else
	{
		std::cout << "ToLower" " " << "Failure\n";
	}
	
	//CharacterAt
	String s4("dog");
	int index = 0;
	char c = s4.CharacterAt(index);
	
	if (c == 'd')
	{
		std::cout << "CharacterAt" " " << "Success\n";
	
	}
	else
	{
		std::cout << "CharacterAt" " " << "Failure\n";
	
	}
	
	//CStr
	String s5("dog");
	s5.Cstr();
	
	if (s5.Equalto("dog") == true)
	{
		std::cout << "CStr" " " << "Success\n";
	
	}
	else
	{
		std::cout << "CStr" " " << "Failure\n";
	}
	
	
	//Length
	String s6("dog");
	int m_length;
	m_length = s6.Length();
	if (m_length == 3)
	{
		std::cout << "Length" " " << "Success\n";
	
	}
	else
	{
	
		std::cout << "Length" " " << "Failure\n";
	}
	
	//WriteToConsole
	String s7("dog");
	
	
	if (s7.Equalto("dog") == true)
	{
		std::cout << "WriteToConsole" " " "Success\n";
	}
	else
	{
		std::cout << "WriteToConsole" " " "Failure\n";
	}
	
	//ReadFromConsole
	String s8;
	s8.ReadFromConsole();
	
	if (s8.Equalto("jkl") == true)
	{
		std::cout << "ReadFromConsole" " " "Success\n";
	
	}
	else
	{
		std::cout << "ReadFromConsole" " " "Failure\n";
	}
	
	//Append
	String s9("dog");
	s9.Append("stench");
	
	std::cout << "Success" << std::endl;
	
	
	// Prepend
	String s10("dog");
	s10.Prepend("Stench");
	
	
	
	
	
	//Find1
	String s11("catfish");
	int findValue = s11.Find("fish");
	std::cout << findValue << std::endl;
	
	if (findValue == 3)
	{
		std::cout << "Find1 Success" << std::endl;
		
	
	}
	else
	{
		std::cout << "Find1 Fail" << std::endl;
	}
	
	
	//Find2
	String s12("dogsnout");
	int startIndex;
	std::cin >> startIndex;
	int findVal = s12.Find(startIndex, "snout");
	std::cout << findVal << std::endl;








	String s13("dogfishcat");
	s13.Replace("fish", "cat");
	s13.WriteToConsole();

	std::ofstream file;
	file.open("Output.txt", std::ios_base::out);

	

	if (file.is_open())
	{

		file << "hello" << std::endl;

	}
	//this works but you have to find the file.
	//remember to finish



	Room rom(String("Base"), 0, String("no"));
	OblongRoom oblong(String("Oblong"), 1, String("Snakes"));
	RoundRoom round(String("Round"), 2, String("Key"));
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
