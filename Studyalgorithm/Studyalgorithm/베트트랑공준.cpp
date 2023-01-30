//#include <iostream>    
//using namespace std;
//bool Arr[246913] = { false, true };
//
//int main(void)
//{
//	cin.tie(0);
//	ios::sync_with_stdio(false);
//
//	for (int i = 2; i < 246913; ++i)
//	{
//		if (Arr[i] == false)
//		{
//			for (int j = 2; i * j <= 246913; ++j)
//			{
//				Arr[i * j] = true;
//			}
//		}
//
//	}
//
//	int Number = 0;
//	int PrimeNumber = 0;
//	while (true)
//	{
//		cin >> Number;
//		if (Number == 0)
//			break;
//
//		for (int i = Number + 1; i <= Number * 2; ++i)
//		{
//			if (Arr[i] == false)
//			{
//				++PrimeNumber;
//			}
//		}
//
//		cout << PrimeNumber << "\n";
//		PrimeNumber = 0;
//	}
//
//
//
//	return 0;
//}