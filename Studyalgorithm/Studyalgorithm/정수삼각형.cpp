//
//#include <iostream>
//#include <set>
//using namespace std;
//
//int main()
//{
//	int n = 0;
//	int PrevArr[500] = {};
//	int Arr[500] = {};
//	cin >> n;
//	for (int i = 1; i <= n; ++i)
//	{
//		for (int j = 0; j < i; ++j)
//		{
//			int num = 0;
//			cin >> num;
//
//			if (j == 0)
//				Arr[j] = PrevArr[j] + num;
//			else if (j == i - 1)
//				Arr[j] = PrevArr[j - 1] + num;
//			else
//			{
//				if (PrevArr[j] > PrevArr[j - 1])
//					Arr[j] = PrevArr[j] + num;
//				else
//					Arr[j] = PrevArr[j - 1] + num;
//			}
//		}
//
//		for (int j = 0; j < i; ++j)
//		{
//			PrevArr[j] = Arr[j];
//		}
//	}
//
//	set<int> S;
//	for (int i = 0; i < n; ++i)
//	{
//		S.insert(PrevArr[i]);
//	}
//
//	cout << *(--S.end());
//
//
//	return 0;
//}
//
