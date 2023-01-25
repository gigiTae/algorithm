#pragma once

constexpr auto MAXCAPACITY = 8;;


class CircleQueue
{
private:
	int Front;   // 앞
	int Rear;    // 뒤
	int Capacity;    // 큐 용량
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
