//#include <iostream>
//
//using namespace std;
//
//int main(void)
//{
//	cin.tie(NULL);
//	ios::sync_with_stdio(false);
//
//	int TestCase = 0;
//	cin >> TestCase;
//
//	int* arr = new int[10001];
//	for (int i = 0; i < 10001; ++i)
//	{
//		arr[i] = 0;
//	}
//
//	for (int i = 0; i < TestCase; ++i)
//	{
//		int num = 0;
//		cin >> num;
//		++arr[num];
//	}
//
//	for (int i = 1; i < 10001; ++i)
//	{
//		int max = arr[i];
//		for (int j = 0; j < max; ++j)
//		{
//			cout << i << '\n';
//		}
//	}
//
//
//	return 0;
//}
//
