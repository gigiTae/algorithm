//
//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//	int arr1[10] = {};
//
//	for (int i = 0; i < 10; ++i)
//	{
//		arr1[i] = 1;
//		if (i == 0)
//			arr1[i] = 0;
//	}
//
//	int N;
//	cin >> N;
//	for (int i = 0; i < N - 1; ++i)
//	{
//		int arr2[10] = {};
//		arr2[0] = arr1[1];
//		for (int i = 1; i < 9; ++i)
//		{
//			arr2[i] = (arr1[i - 1] + arr1[i + 1]) % 1000000000;
//		}
//		arr2[9] = arr1[8];
//
//		for (int j = 0; j < 10; ++j)
//		{
//			arr1[j] = arr2[j];
//		}
//	}
//
//	int ans = 0;
//
//	for (int j = 0; j < 10; ++j)
//	{
//		ans = (ans + arr1[j]) % 1000000000;
//	}
//
//	cout << ans;
//	return 0;
//}