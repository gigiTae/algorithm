//#include <iostream>    
//using namespace std;
//
//int main()
//{
//	int TestCase = 0;
//	cin >> TestCase;
//	int CountPrimeNum = 0;
//
//	for (int i = 0; i < TestCase; ++i)
//	{
//		int Number = 0;
//		cin >> Number;
//		if (Number == 2)
//		{
//			++CountPrimeNum;
//			continue;
//		}
//		for (int i = 2; i < Number; ++i)
//		{
//			if (Number % i == 0)
//				break;
//			else if (Number - 1 == i)
//			{
//				++CountPrimeNum;
//			}
//		}
//	}
//	cout << CountPrimeNum;
//	return 0;
//}