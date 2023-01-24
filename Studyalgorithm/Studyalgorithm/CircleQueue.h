#pragma once

constexpr auto MAXSIZE = 4;;


class CircleQueue
{
public:
	int Front;   // ��
	int Rear;    // ��
	int Size;    // ť ������
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
