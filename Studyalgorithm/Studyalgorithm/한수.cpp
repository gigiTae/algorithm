//
//#include <iostream>      
//
//using namespace std;
//
//int main()
//{
//	int NumberRange = 0;
//	cin >> NumberRange;
//
//	int Result = 0;
//	int Units = 0;
//	int Tens = 0;
//	int Hundreads = 0;
//
//
//	for (int i = 1; i <= NumberRange; ++i)
//	{
//		if (i < 100)
//		{
//			++Result;
//		}
//		else
//		{
//			Hundreads = i / 100;
//			Tens = (i % 100) / 10;
//			Units = (i % 100) % 10;
//
//			if (Hundreads - Tens == Tens - Units)
//			{
//				++Result;
//			}
//
//		}
//	}
//
//	cout << Result;
//}