//#include <iostream>    
//using namespace std;
//
//bool IsPrimeNumber(int num)
//{
//	if (num == 2)
//		return true;
//	else if (num == 1)
//		return false;
//
//	for (int i = 2; i < num; ++i)
//	{
//		if (num % i == 0)
//			return false;
//		else if (num - 1 == i)
//		{
//			return true;
//		}
//	}
//}
//
//int main()
//{
//	int Start = 0;
//	int End = 0;
//	cin >> Start >> End;
//
//	int SumPrimeNumber = 0;
//	int MinimumNumber = 0;
//
//	for (int i = Start; i <= End; ++i)
//	{
//		if (IsPrimeNumber(i))
//		{
//			SumPrimeNumber += i;
//			if (MinimumNumber == 0)
//				MinimumNumber = i;
//		}
//	}
//	if (MinimumNumber == 0)
//		cout << -1;
//	else
//	{
//		cout << SumPrimeNumber << endl << MinimumNumber;
//	}
//
//	return 0;
//}