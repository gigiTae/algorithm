//#include <iostream>
//
//using namespace std;
//
//
//long long  arr[101];
//
//long long  Fadoban(long long num)
//{
//	if (num < 4)
//		return 1;
//	else  if (num == 4 || num == 5)
//		return 2;
//
//	if (arr[num] == 0)
//		arr[num] = Fadoban(num - 2) + Fadoban(num - 3);
//	return arr[num];
//}
//
//int main()
//{
//	int TestCase = 0;
//	cin >> TestCase;
//	for (int i = 0; i < TestCase; ++i)
//	{
//		long long  number = 0;
//		cin >> number;
//		cout << Fadoban(number) << '\n';
//	}
//
//}
//
//
