#include <iostream>
#include "CircleQueue.h"


int main()
{
	CircleQueue Queue;
	Queue.push(20);
	Queue.push(2);
	Queue.pop();
	Queue.push(5);
	Queue.push(5);
	Queue.push(300);
	std::cout << Queue.Index(0) << std::endl;
	std::cout << Queue.Index(2) << std::endl;



	return 0;
}
