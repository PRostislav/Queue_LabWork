// Queue_LabWork.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "TQueue.h"

int main()
{
	TQueue<double> Q(5);
//	Q.ShowQueue();
	double a = 7;
	for (int i = 0; i <5; i++) {
		Q.Push(a);
	}
	Q.ShowQueue();
	while (!Q.IsEmpty()) {
		a = Q.Pop();
	}
	Q.ShowQueue();
	double e = 9, b = 7;
	Q.Push(e);
	Q.Push(b);
	double temp;
	temp = Q.Back();
	cout << endl << temp << endl;
	temp = Q.Top();
	cout << endl << temp << endl;
	e = Q.Pop();
	temp = Q.Back();
	cout << endl << temp << endl;
	temp = Q.Top();
	cout << endl << temp << endl;
    return 0;
}

