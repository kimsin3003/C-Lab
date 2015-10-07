#pragma once
#include <iostream>
#include <cstring>
using namespace std;

class Person
{
public:

	Person(char* name_s, int iage):age(iage)
	{
		int len = strlen(name_s) + 1;
		name = new char[len];
		strcpy(name, name_s);
	}

	~Person()
	{
		cout << "~Person()" << endl;
		delete[] name;
	}

	Person(const Person& p)
	{
		int len = strlen(p.name) + 1;
		name = new char[len];
		strcpy(name, p.name);
		age = p.age;
		
	}

	void operator=(Person p) 
	{
		delete[] name;
		int len = strlen(p.name) + 1;
		name = new char[len];
		strcpy(name, p.name);
		age = p.age;
	}

	Person();

private:
	char* name;
	int age;


	friend ostream& operator<<(ostream& os, Person& p);
};

ostream& operator<<(ostream& os, Person& p) {
	cout << p.name << endl;
	cout << p.age << endl;

	return os;
}

int main() {
	Person p1("James", 20);
	Person p2("Tomas", 10);

	p2 = p1;

	cout << p1;
	cout << p2;
}

