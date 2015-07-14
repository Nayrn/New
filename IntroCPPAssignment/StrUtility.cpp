#include "StrUtility.h"
#include <iostream>
#include "GameManager.h"



String::String()
{

	//create an array at m_str
	m_str = new char[1];

	//set final element of m_str to NULL TERMINATOR
	
	m_str[0] = '\0';


}
	
//create string from null terminated character array
String::String(char * a_other)

{
	int m_length = strlen(a_other);

	//create array at m_str that's big enough for a_other
	m_str = new char[strlen(a_other) + 1];


	//copy each character from a_other into m_str
	for (int i = 0; i < m_length +1; i++)
	{
		m_str[i] = a_other[i];
	}


	//set final element to NULL terminator
	m_str[ strlen(a_other) ] = '\0';

}


//complete
int String::Length()
{
	//int length = Length();
	int counter = 0;

	while (m_str[counter] != '\0')
	{
		counter++;
	}
	
	return counter;
	
}


//COMPLETE
bool String::Equalto(char * otherStr)
{
	 

	 if (strcmp(m_str, otherStr) == 0)
	{
		 return true;
		
	}
	 else
	 {
		 return false;

	 }
}





String::~String()
{
	//delete[] m_str;
}

void String::WriteToConsole()
{

	std::cout << m_str << std::endl;

}

void String::ReadFromConsole()
{
	
	std::cin >> m_str;
}

void String::ToLower()
{
	int m_length = Length();
	
	for (int i = 0; i <= m_length; i++)
	{

		if (m_str[i] >= 65 && m_str[i] <= 90)
		{
			m_str[i] += 32;
		}

	}
	
}

void String::ToUpper()
{
	int m_length = Length();
	
	for (int i = 0; i <= m_length; i++)			
	{
		if (m_str[i] >= 97 && m_str[i] <= 122)
		{

			m_str[i] -= 32;
		}
		
	}

}

char String::CharacterAt(int index)
{
	
	m_str = "dog";
	int m_length = Length();
	if (index < 0 || index > m_length)
	{

		return 0;

	}
	else
	{

		return m_str[index];
	}

	
}

int String::Find(char * findString)
{
	// Same as CharacterAt but find the Array place instead of the letter in that place
	int m_length = Length();							//m_length holds value returned by Length()
	int a_len = strlen(findString);						//a_len holds length of the findString
	for (int i = 0; i < m_length; i++)					//for loop iterates over m_length
	{
		if (m_str[i] == findString[0])					//if m_str and first character of findstring are the same
		{
			for (int j = 0; j < a_len; j++)				//start for loop iterating over a_len
			{
				if (m_str[i + j] == findString[j])		//if m_str and findString values are the same
				{
					continue;							//continue with for loop
				}
				else									//else
				{
					break;								//stop iterating over this sham of a findString
				}
			}
			return i;									//return i once whole findString is checked
		}

	}
	return -1;											//return -1 if not found
	
}


int String::Find(int startIndex, char *findString)
{
	
	int m_length = Length();
	int a_len = strlen(findString);
	for (int i = startIndex; i < m_length; i++)
	{
		if (m_str[i] == findString[0])
		{
			for (int j = 0; j < a_len; j++)
			{
				if (m_str[i + j] == findString[j])
				{
					continue;
				}
				else
				{
					break;
				}
			}
			return i;
		}

	}
	return -1;

}

void String::Replace(char * findString, char * replaceString)
{
	int findNum = Find(findString);						//findNum stores position of the findString
	if (findNum != -1)
	{
		int len = Length();									//len stores value returned by Length()
		int findLen = strlen(findString);					//findLen stores length of findString
		int replaceLen = strlen(replaceString);				//replaceLen stores length of replacing string
		int finalLen = len + (replaceLen - findLen) + 1;	//final length = length of m_str plus replacing length less the findString length
		int i = 0;											//new ints i and j
		//int j = 0;											//initialised at 0

		if (findLen != replaceLen)							//if findString and replacing string are not the same length
		{
			char * tempArray = new char[finalLen];			//create new array of length of combined strings
			int j = 0;

			for (i = 0; i < len; i++)						//for loop iterates over m_str length
			{
				// replaces the length of the string no matter the length

				if (i == findNum)							//if i hits the location of the findString
				{
					for (int k = 0; k < replaceLen; k++)	//for loop iterates over length of replacing string			
					{
						tempArray[j++] = replaceString[k];	//new array is assigned values of the replacing string
					}

					i += findLen - 1;							//i is incremented to the end position of the findString
				}
				else										//else
				{
					tempArray[j++] = m_str[i];				//new array is assigned values of m_str
				}
			}
			tempArray[j] = '\0';						//final position assigned as null terminator
			delete[] m_str;								//delete old m_str
			m_str = tempArray;							//reassign new array values to m_str
		}
		else
		{
			//char *tempArray = new char[finalLen];
			int j = 0;
			for (i = 0; i < len; i++)						//for loop iterates over m_str length
			{
				if (i == findNum)							//if i hits the location of the findString
				{
					//int newInt = 0;
					for (j = 0; j < replaceLen; j++)	//for loop iterates over length of replacing string			
					{
						m_str[i++] = replaceString[j];	//new array is assigned values of the replacing string
					}
				}
			}
		}
		Replace(findString, replaceString);
	}
}




	


const char * String::Cstr()
{
	
	return m_str;
	

}

void String::Append(const char * a_other)
{
	int len = Length();
	int len2 = strlen(a_other);
	int len3 = len + len2;
	//resize m_str so that it will fit it's current contents + length a_other

	//to resize:
	// create a temp char ptr to point at a character array of currLength + length + 1 size
	char * tempPtr = new char[len3 + 1];


	int i;
	//copy contents of m_str into tempPtr empty array
	for (i = 0; i < len; i++)
	{
		tempPtr[i] = m_str[i];
	}

	//copy contents of a_other into tempPtr

	// start from length and iterate 
	for (i = len; i < len3; i++)
	{
		tempPtr[i] = a_other[i - len];

	}


	tempPtr[len3] = '\0';
	delete[] m_str;
	m_str = tempPtr;

	



}

void String::Prepend(const char * a_other)
{

	//adds (x) to the start of the string
	int len = Length();
	int len2 = strlen(a_other);
	int len3 = len + len2;

	char * tempChar = new char[len3];

	int i;
	for (i = 0; i < len2; i++)    // problem with this for loop
	{
		tempChar[i] = a_other[i];
	}


	for (i = len2; i < len3; i++)
	{
		tempChar[i] = m_str[i - len2];

	}
	
	tempChar[len3] = '\0';
	delete[] m_str;
	m_str = tempChar;

	

}
