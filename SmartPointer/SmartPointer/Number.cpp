
#pragma once
#include "stdafx.h"
#include "Number.h"
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

Number::Number()
{
}


Number::~Number()
{
}

class SmartPtr
{
private:
	Point* posPtr;
	int count;


public:
	
	SmartPtr()
	{
		count++;
	}

	SmartPtr(Point* ptr) :posPtr(ptr), count(0)
	{}

	Point* operator->()
	{
		return posPtr;
	}

	Point& operator*()
	{
		return *posPtr;
	}

	SmartPtr& operator=(SmartPtr& sp) {
		posPtr = sp.posPtr;
		count++;
		return *this;
	}

	void AddCount() {
		count++;
	}

	void Realease() {
		count--;
	}

	~SmartPtr()
	{
		count--;
		if(count <= 0)
			delete posPtr;
	}
};

int main()
{
	SmartPtr sptr1 = new SmartPtr(Point(3,5));
}

