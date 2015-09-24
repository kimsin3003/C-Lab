
#include <iostream>
#include <cstring>
#include "Employee.h"
#include "Manager.h"

using namespace std;

int main()
{
	Employee* e = new Manager("James", "Personal", 100);
	e->ShowInfo();

	Manager m;
	cout << m("Lee", "Personal") << endl;

	e = m;
	e.ShowInfo();
}