#pragma once
template <typename T>
class Queue
{
public:
	Queue():size(0) {
		queue = new T[MAX_SIZE];
	}
	~Queue(){
	
	}
	void Enqueue(T node) {
		queue[size] = node;
		size++;
	}

	T Dequeue() {
		T result = queue[0];
		for (int i = 0; i < size - 1; i++) {
			queue[i] = queue[i + 1];
		}
		size--;
		return result;
	}

	bool IsEmpty() {
		if (size == 0)
			return true;
		return false;
	}



private:
	const int MAX_SIZE = 10;
	int size;
	T* queue;
};

