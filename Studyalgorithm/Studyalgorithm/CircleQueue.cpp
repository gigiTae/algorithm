#include "CircleQueue.h"
#include <iostream>


CircleQueue::CircleQueue()
	:Capacity(MAXCAPACITY)
	,Front(0)
	,Rear(0)
{
	Values = new int[Capacity];
}

CircleQueue::~CircleQueue()
{
	delete[] Values;
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
	if ((Rear + 1) % Capacity == Front)
		return true;
	else
		return false;
}

int CircleQueue::size()
{
	if (Front > Rear)
	{
		return (Capacity - Front + Rear);
	}
	else if(Front < Rear)
	{
		return (Rear - Front);
	}
	else
	{
		return 0;
	}
}

int CircleQueue::front()
{
	if (empty())
	{
		std::cout << "Queue is Empty" << std::endl;
		return 0;
	}
	return Values[Front];
}

int CircleQueue::back()
{
	if (empty())
	{
		std::cout << "Queue is Empty" << std::endl;
		return 0;
	}
	if (Rear == 0)
	{
		return Values[Capacity - 1];
	}
	return Values[Rear-1];
}

void CircleQueue::pop()
{
	if (empty())
	{
		std::cout << "Queue is Empty" << std::endl;
	}
	else
	{
		Front = (Front + 1) % Capacity;
	}
}

void CircleQueue::push(int num)
{
	if (!isFull())
	{
		Values[Rear] = num;
		Rear = (Rear + 1) % Capacity;
	}
	else
	{
		std::cout << "Queue is Full" << std::endl;
	}
}

