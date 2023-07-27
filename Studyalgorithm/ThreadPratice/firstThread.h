
// 첫 쓰레드
#include <iostream>
#include <thread>
using std::thread;

void func1() {
	for (int i = 0; i < 10; ++i)
		std::cout << "쓰레드 1 작동중! \n";
}

void func2() {
	for (int i = 0; i < 10; ++i)
		std::cout << "쓰레드 2 작동중! \n";
}

void func3() {
	for (int i = 0; i < 10; ++i)
		std::cout << "쓰레드 3 작동중! \n";
}

//int main()
//{
//	thread t1(func1); thread t2(func2); thread t3(func3);
//
//	// join : 해당하는 쓰레드들이 실행을 종료한면 리턴하는 함수
//	// 따라서 t1.join() 의 경우 t1이 종료하기 전 까지 리턴하지 않습니다.
//	//t1.join(); t2.join(); t3.join();
//
//	// detach : 해당 쓰레드를 실행 시킨 후 알아서 백그라운드에서 돌아가게 된다.
//	t1.detach(); t2.detach(), t3.detach();
//
//	return 0;
//}