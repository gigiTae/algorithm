//#pragma once
//#include <iostream>
//#include <vector>
//#include <memory>
//
//class A
//{
//	int* data;
//
//public:
//	A(int a) {
//		std::cout << "�ڿ��� ȹ����!" << std::endl;
//		data = new int[a];
//	}
//	A(const A& a) = delete;
//
//	void some() { std::cout << "�Ϲ� �����Ϳ� �����ϰ� ��밡��!" << std::endl; }
//
//	~A() {
//		std::cout << "�ڿ��� ������!" << std::endl;
//		delete[] data;
//	}
//};
//
//
//int main()
//{
//	// C++ 14 make_unique �Լ� 
//	auto ptr = std::make_unique<A>(5);
//
//	// unique_ptr�� ���ҷ� ������ �����̳� 
//	std::vector<std::unique_ptr<A>> vec;
//
//	std::unique_ptr<A> a(new A(10));
//
//	// vec.push_back(a); -> ���ù����� ���� �߻� 
//	// �ᱹ unique_ptr�� ������ ������(��������� x)�� �ǹ��ϹǷ� push_back�� �Ұ����ϴ� 
//
//	// std::move �� ����ؼ� �������� �����Ѵ�. 
//	vec.push_back(std::move(a));
//
//	// emplac_back �� ��쿡�� unique_ptr �� �����ڸ� �־�����ϹǷ� 
//	//vec.emplace_back(5); <- �̷� ���� ������ �߻��Ѵ�. 
//	vec.emplace_back(new A(5));
//
//	return 0;
//}