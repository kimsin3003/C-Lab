#pragma once
#include <iostream>
using namespace std;

class Point
{
private:
	int xpos, ypos;

public:
	Point(int n1 = 0, int n2 = 0) :xpos(n1), ypos(n2) {}

	void ShowData()
	{
		cout << "[" << xpos << "," << ypos << "]" << endl;
	}

	Point& operator+(Point& ref)
	{
		Point p(xpos + ref.xpos, ypos + ref.ypos);
		return p;
	}

	Point& operator++() {
		xpos += 1;
		ypos += 1;
		return *this;
	}

	Point& operator++(int) {
		Point p(xpos++, ypos++);
		return p;
	}


	
	Point& operator=(const Point &ref)
	{
		xpos = ref.xpos;
		ypos = ref.ypos;

		return *this;
	}

	Point();
	~Point();

	friend Point& operator+(Point& ref1, Point& ref2);
	friend ostream& operator<<(ostream& os, Point& ref);
};


ostream& operator<<(ostream& os, Point& ref)
{
	cout << "[" << ref.xpos << "," << ref.ypos << "]" << endl;
	return os;
}

istream& operator>>(istream& is, Point& ref)
{
	cin >> ref;
	return is;
}

Point& operator+(Point& ref1, Point& ref2)
{
	Point p(ref1.xpos + ref2.xpos, ref1.ypos + ref2.ypos);
	return p;
}
// int main() {
// 
// 	Point p1(3, 5);
// 	Point p2(2, 3);
// 	Point p3 = p1.operator+(p2);
// 	//Point p4 = operator+(p1, p2);
// 	p3.ShowData();
// 	Point p5 = p1++;
// 	p5.ShowData();
// 	++p1;
// 	p1.ShowData();
// 
// 	cout << p1 << p2;
// 
// }

