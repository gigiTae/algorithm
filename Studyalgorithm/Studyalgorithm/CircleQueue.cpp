#include "CircleQueue.h"
#include <iostream>


CircleQueue::CircleQueue()
	:Size(MAXSIZE)
	,Front(0)
	,Rear(0)
{
	Values = new int[Size];
}

CircleQueue::~CircleQueue()
{
	delete[] Values;
}


int CircleQueue::Index(int num)
{
	int Number =Values[Front + num];
	return Number;
}

bool CircleQueue::empty()
{
	if (Front == Rear)
		return true;
	else
		return false;
}

bool CircleQueue::isFull()
{
	if ((Rear + 1) % Size == Front)
		return true;
	else
		return false;
}

void CircleQueue::pop()
{
	if (empty())
	{
		std::cout << "Queue is Empty";
	}
	else
	{
		Front = (Front + 1) % Size;
	}
}

void CircleQueue::push(int num)
{
	if (!isFull())
	{
		Values[Rear] = num;
		Rear = (Rear + 1) % Size;
	}
	else
	{
		std::cout << "Queue is Full";
	}
}

