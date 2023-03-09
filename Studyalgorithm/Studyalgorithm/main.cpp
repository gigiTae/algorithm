#include <iostream>
#include "RedBlackTree.h"
#include <random>
#include <map>

using namespace std;

int main()
{ 
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(false);
	// 시드값을 얻기 위한 random_device 생성.
	std::random_device rd;

	// random_device 를 통해 난수 생성 엔진을 초기화 한다.
	std::mt19937 gen(rd());

	// 0 부터 99 까지 균등하게 나타나는 난수열을 생성하기 위해 균등 분포 정의.
	std::uniform_int_distribution<int> dis(0, 10000);  

	RedBlackTree t;
	map<int, int> c;
	
	for (int i = 0; i < 1000; ++i)
	{
		int num = dis(gen);
		t.insert(num);
	}
	for (auto iter = t.rbegin(); iter != t.begin(); --iter)
	{
		cout << *iter << '\n';
	 }

	int a = 0;

    return 0;
}

