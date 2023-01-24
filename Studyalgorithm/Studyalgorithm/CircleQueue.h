#pragma once

constexpr auto MAXSIZE = 8;;

class CircleQueue
{
public:
	int front;
	int rear;
	int size;
	int* values;

public:
	CircleQueue();
	~CircleQueue();

};

