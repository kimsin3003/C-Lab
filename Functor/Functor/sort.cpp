#include <iostream>
using namespace std;

class SortRule
{
public:
	virtual bool operator()(int num1, int num2) = 0;

};

class AscendingSort : public SortRule
{
public:
	bool operator()(int num1, int num2)
	{
		if (num1 > num2)
			return true;
		return false;
	}
};

class DescendingSort : public SortRule
{
public:
	bool operator()(int num1, int num2)
	{
		if (num1 < num2)
			return true;
		return false;
	}
};


class DataStorage
{
private:
	int *arr;
	int idx;
	int MAX_LEN;

public:
	DataStorage(int count):MAX_LEN(count), idx(0)
	{
		arr = new int[count];
	}

	void AddElements(int num)
	{
		if (idx >= MAX_LEN)
		{
			cout << "Error" << endl;
			return;
		}

		arr[idx++] = num;
	}

	void SortElement(SortRule& sr)
	{
		for (int i = 0; i < idx - 1; i++)
		{
			for (int j = 0; j < (idx - 1) - i; j++)
			{
				if (sr(arr[j], arr[j+1]))
				{
					int temp;
					temp = arr[j];
					arr[j] = arr[j + 1];
					arr[j + 1] = temp;
				}
			}
		}
	}
};

int main()
{
	DataStorage ds(10);
	ds.AddElements(5);
	ds.AddElements(6);
	ds.AddElements(10);
	ds.AddElements(1);
	ds.AddElements(50);

	AscendingSort asc;
	DescendingSort dsc;

	ds.SortElement(asc);
	ds.SortElement(dsc);
}