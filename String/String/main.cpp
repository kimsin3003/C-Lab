#include "String.h"
#include <iostream>
using namespace std;

int main()
{
	String str1;
	String str2("�ٺ�");
	String str3 = str2;//��������� test
	cout << str1 << endl;
	cout << str2 << endl;
	cout << str3 << endl;

	str1 = str2; //���Կ����� test
	str1 += str3;

	String str4("�ٺ�");
	if (str2 == str4)
		cout << "true" << endl;
	else
		cout << "false" << endl;

	String str5;
	cin >> str5;
	cout << str5 << endl;

	String str6("õġ");
	cout <<	str3 + str6 << endl;

}