#pragma once

constexpr auto MAXCAPACITY = 8;;


class CircleQueue
{
private:
	int Front;   // ��
	int Rear;    // ��
	int Capacity;    // ť �뷮
	int* Values; 

public:
	int  size();
	int  front();
	int  back();
	void pop();
	void push(int num);

private:
	bool empty();
	bool isFull();
public:
	CircleQueue();
	~CircleQueue();

};
