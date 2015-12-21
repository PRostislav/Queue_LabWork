#pragma once
#include <iostream>
using namespace std;

template <class T>
class TQueue
{
	int Begin, End, Len, MaxSize;
	T* Queue;
public:
	TQueue(int _MaxSize = 10) {
		MaxSize = _MaxSize;
		Queue = new T [MaxSize];
		Begin = 0;
		End = -1;
		Len = 0;
	}

	~TQueue() {
		//delete[] Queue;
	}

	TQueue(const TQueue& Q) {
		MaxSize = Q.MaxSize;
		Queue = new T[MaxSize];
		Begin = Q.Begin;
		End = Q.End;
		Len = Q.Len;
		for (int i = 0; i < Len; i++) {
			Queue[i] = Q.Queue[i];
		}
	}

	bool IsEmpty() {
		return (Len == 0);
	}

	bool IsFull() {
		return (Len == MaxSize);
	}

	void Push(const T n) {
		if (!IsFull()) {
			if (End < MaxSize)
				End++;
			else
				End = 0;
			Queue[End] = n;
			Len++;
		}
		else
			throw - 1;
	}

	T Pop() {
		if (IsEmpty()) throw - 1;
		T tmp = Queue[Begin];
		if (Begin <= MaxSize - 1)
			Begin++;
		else
			Begin = 0;
		Len--;
		return tmp;
	}

	T Top() {
		if (IsEmpty()) throw - 1;
		T tmp = Queue[Begin];
		return (tmp);
	}

	void ShowQueue() {
		if (IsEmpty())
			cout << "Queue is empty!" << endl;
		else
			for (int i = 0; i < Len; i++) {
			cout << i+1 << " element in queue is: " << Queue[i] << endl;
		}
		//cout << typeid(*this).name();
	}

	T Back() {
		if (IsEmpty()) throw - 1;
		T tmp = Queue[End];
		return (tmp);
	}
};


