#pragma once
class Number
{
public:
	Number();
	~Number();
	Number(int n) : num(n)
	{}

	Number* operator->()
	{
		return this;
	}

	Number& operator*()
	{
		return *this;
	}

	int GetNumber() const
	{
		return num;
	}

private:
	int num;
};

