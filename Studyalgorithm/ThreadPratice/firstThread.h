
// ù ������
#include <iostream>
#include <thread>
using std::thread;

void func1() {
	for (int i = 0; i < 10; ++i)
		std::cout << "������ 1 �۵���! \n";
}

void func2() {
	for (int i = 0; i < 10; ++i)
		std::cout << "������ 2 �۵���! \n";
}

void func3() {
	for (int i = 0; i < 10; ++i)
		std::cout << "������ 3 �۵���! \n";
}

//int main()
//{
//	thread t1(func1); thread t2(func2); thread t3(func3);
//
//	// join : �ش��ϴ� ��������� ������ �����Ѹ� �����ϴ� �Լ�
//	// ���� t1.join() �� ��� t1�� �����ϱ� �� ���� �������� �ʽ��ϴ�.
//	//t1.join(); t2.join(); t3.join();
//
//	// detach : �ش� �����带 ���� ��Ų �� �˾Ƽ� ��׶��忡�� ���ư��� �ȴ�.
//	t1.detach(); t2.detach(), t3.detach();
//
//	return 0;
//}