//#pragma once
//
//#include <iostream>
//#include <thread>
//#include <vector>
//using std::thread;
//using std::vector;
//
//#define DIVDE 10000000
//// 피보나치 수열을 멀티쓰레드를 사용해서  빨리 구하기 
//// 
//int arr[10000]{ 0,1 };
//
//int Fibonacci(int index)
//{
//	if (index == 0 || index == 1)
//		return arr[index];
//	else if (arr[index] != 0)
//	{
//		thread::id this_id = std::this_thread::get_id();
//		printf("id : %x ---- %d 값이 구해져있습니다 \n", this_id, index);
//		return arr[index];
//	}
//	else
//	{
//		arr[index] = (Fibonacci(index - 1) + Fibonacci(index - 2)) % DIVDE;
//
//		thread::id this_id = std::this_thread::get_id();
//		printf("id : %x  ---- %d 값 : %d 입니다 \n", this_id, index, arr[index]);
//
//		return arr[index];
//	}
//}
//
//int main()
//{
//	vector<thread> workers;
//
//	for (int i = 0; i < 4; ++i)
//	{
//		workers.push_back(thread(Fibonacci, 10));
//
//	}
//
//	for (int i = 0; i < 4; ++i)
//	{
//		workers[i].join();
//	}
//
//}