#pragma once

constexpr auto MAXSIZE = 4;;


class CircleQueue
{
public:
	int Front;   // 앞
	int Rear;    // 뒤
	int Size;    // 큐 사이즈
	int* Values; 

public:
	int  Index(int num);
	bool empty();
	bool isFull();
	void pop();
	void push(int num);

public:
	CircleQueue();
	~CircleQueue();

};
