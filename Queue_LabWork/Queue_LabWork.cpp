// Queue_LabWork.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "TQueue.h"

int main()
{
	TQueue<double> Q(5);
	Q.ShowQueue();
	double a = 17.3;
	Q.Push(a);
	Q.ShowQueue();
	a = Q.Pop();
	Q.ShowQueue();
	Q.Push(a);
	TQueue<double> Q1(Q);
	Q1.ShowQueue();
	Q1.Pop();
	for (int i = 0; i < 17; i++) {
		Q1.Push(a);
	}
	Q1.ShowQueue();
    return 0;
}

