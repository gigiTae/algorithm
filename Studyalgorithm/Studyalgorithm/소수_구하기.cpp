//#include <iostream>    
//using namespace std;
//bool Arr[1000001] = { false, true };
//
//int main(void)
//{
//	cin.tie(0);
//	ios::sync_with_stdio(false);
//
//	int Start = 0;
//	int End = 0;
//	cin >> Start >> End;
//	for (int i = 2; i < End; ++i)
//	{
//		if (Arr[i] == false)
//		{
//			for (int j = 2; i * j <= End; ++j)
//			{
//				Arr[i * j] = true;
//			}
//		}
//
//	}
//
//	for (int i = Start; i <= End; ++i)
//	{
//		if (Arr[i] == false)
//		{
//			cout << i << "\n";
//		}
//	}
//
//
//	return 0;
//}