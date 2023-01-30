//#include <iostream>    
//using namespace std;
//bool Arr[10000] = { true, true };
//
//
//int FindPrevPrimeNum(int num)
//{
//	int ReturnNum = num - 1;
//	for (int i = ReturnNum; ; --ReturnNum)
//	{
//		if (Arr[ReturnNum] == false)
//			return ReturnNum;
//	}
//	return 0;
//}
//
//int main(void)
//{
//	cin.tie(0);
//	ios::sync_with_stdio(false);
//
//	int TestCase = 0;
//	cin >> TestCase;
//
//	for (int i = 2; i < 10000; ++i)
//	{
//		if (Arr[i] == false)
//		{
//			for (int j = 2; i * j <= 10000; ++j)
//			{
//				Arr[i * j] = true;
//			}
//		}
//	}
//
//	for (int i = 0; i < TestCase; ++i)
//	{
//		int Number = 0;
//		cin >> Number;
//		int Left = Number / 2;
//		int Right = Number / 2;
//		while (Arr[Right] != false)
//		{
//			Left = FindPrevPrimeNum(Left);
//
//			if (Arr[Number - Left] == false)
//				Right = Number - Left;
//		}
//
//		cout << Left << " " << Right << "\n";
//	}
//
//	return 0;
//}
