//#include <iostream>
//#include <vector>
//using namespace std;
//
//struct Info
//{
//	int age;
//	int height;
//	int weight;
//	int power;
//
//	Info() :age(0), height(0), weight(0), power(0)
//	{
//		cout << "�⺻������ ȣ��\n";
//	}
//	Info(int age, int height, int weight, int power)
//		:age(age), height(height), weight(weight), power(power)
//	{
//		cout << "������ ȣ��\n";
//	}
//	Info(const Info& other) :age(other.age), height(other.height), weight(other.weight), power(other.power)
//	{
//		cout << "���� ������ ȣ��\n";
//	}
//	~Info()
//	{
//		cout << "�Ҹ��� ȣ��\n";
//	}
//	Info(const Info&& other) noexcept :age(other.age), height(other.height), weight(other.weight), power(other.power)
//	{
//		cout << "�̵� ������ ȣ��\n";
//	}
//
//};
//
//int main()
//{
//	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
//	vector<Info> vec;
//	//vec.emplace_back(1, 1, 1, 1);
//	vec.push_back(Info(1, 1, 1, 1));
//}
//
