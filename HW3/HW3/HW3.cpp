// HW3.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"
#include "Stack.h"
#include "Queue.h"


int main()
{

	cout << "stack for int test" << endl;
	Stack<int> intStack;
	for (int i = 0; i < 11; i++) {
		intStack.Push(i);
	}

	cout << intStack.Pop() << endl;
	cout << intStack.IsEmpty() << endl;
	cout << intStack.Top() << endl;


	cout << "\n\nstack for double test" << endl;
	Stack<double> doubleStack;
	double d = 1.242141234;
	doubleStack.Push(d);

	cout << doubleStack.Pop() << endl;


	cout << "\n\nstack for int test" << endl;
	Queue<int> intQueue;
	for (int i = 0; i < 11; i++) {
		intQueue.Enqueue(i);
	}

	cout << intQueue.Dequeue() << endl;
	cout << intQueue.IsEmpty() << endl;

	cout << "\n\nstack for double test" << endl;
	Stack<double> doubleQueue;
	doubleQueue.Push(d);

	cout << doubleQueue.Pop() << endl;
    return 0;
}

