#pragma once
#include <vector>

template <typename T>
class Stack
{
public:

	Stack<T>() : size(0) {
		stack = new T[MAX_SIZE];
	}

	~Stack<T>() {
		delete [] stack;
	}

	T Pop() {
		if (size == 0) {
			cout << "stack empty\n" << endl;
			return NULL;
		}
		T result = stack[size - 1];
		size--;
		return result;
	}

	T Top() {
		if (size == 0) {
			cout << "stack empty\n" << endl;
			return NULL;
		}
		return stack[size - 1];
	}

	void Push(T node) {
		if (size >= MAX_SIZE) {
			cout << "stack full" << endl;
			return;
		}

		stack[size] = node;
		size++;
	}

	bool IsEmpty() {
		if (size == 0)
			return true;
		return false;
	}

private:
	const int MAX_SIZE = 10;
	int size;
	T* stack;
};

