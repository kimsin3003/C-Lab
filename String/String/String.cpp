#include "String.h"

using namespace std;
String::String()
{
	len = 0;
	str = new char[len + 1];
	strcpy(str, "");

}

String::String(const char* s)
{
	len = strlen(s);
	str = new char[len + 1];
	strcpy(str, s);
}

String::String(const String & s)
{
	len = strlen(s.str);
	str = new char[len + 1];
	strcpy(str, s.str);
}

String::~String()
{
	delete[] str;
}

String& String::operator+=(const String& s)
{
	char* strPtr = new char[len + s.len + 1];
	strcpy(strPtr, str);
	strcat(strPtr, s.str);
	delete[] str;
	str = strPtr;

	len += s.len;
	return *this;
}

bool String::operator==(const String & s)
{
	if (strcmp(str, s.str) == 0 && len == s.len)
		return true;
	return false;
}

String String::operator+(const String & s)
{
	char* strPtr = new char[len + s.len + 1];
	strcpy(strPtr, str);
	strcat(strPtr, s.str);
	String newStr(strPtr);
	return newStr;
}

String & String::operator=(const String & s)
{
	delete[] str;
	len = s.len;
	str = new char[len + 1];
	strcpy(str, s.str);
	return *this;
}


ostream& operator<<(ostream& os, const String& s)
{
	cout << s.str << endl;
	return os;
}

istream& operator>>(istream& is, String& s)
{
	char input[128];
	cin >> input;
	int size = strlen(input);
	s.str = new char[size + 1];
	strcpy(s.str, input);
	s.len = size;
	return is;
}
