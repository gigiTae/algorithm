//#pragma once
//
//#include <iostream>
//#include <thread>
//#include <vector>
//using std::thread;
//using std::vector;
//
//#define DIVDE 10000000
//// �Ǻ���ġ ������ ��Ƽ�����带 ����ؼ�  ���� ���ϱ� 
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
//		printf("id : %x ---- %d ���� �������ֽ��ϴ� \n", this_id, index);
//		return arr[index];
//	}
//	else
//	{
//		arr[index] = (Fibonacci(index - 1) + Fibonacci(index - 2)) % DIVDE;
//
//		thread::id this_id = std::this_thread::get_id();
//		printf("id : %x  ---- %d �� : %d �Դϴ� \n", this_id, index, arr[index]);
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