#ifndef STRING
#define STRING

class String 
{
public:
	String();
	String(char * a_other);
	~String();
	int Length();
	char CharacterAt( int index );
	bool Equalto(char * otherStr);			
	void Append(const char * a_other);
	void Prepend(const char * a_other);
	const char * Cstr();
	void ToLower();
	void ToUpper();
	int Find(char * findString);
	int Find(int startIndex, char *findString);
	void Replace(char * findString, char * replaceString);
	void ReadFromConsole();
	void WriteToConsole();
	
	

private:
	

	char * m_str;
	
};

#endif