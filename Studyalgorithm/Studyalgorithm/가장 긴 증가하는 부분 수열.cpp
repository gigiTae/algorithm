//
//#include <iostream>
//
//using namespace std;
//int arr[1001][2];
//
//
//int main()
//{
//	int A, ans = 1;
//	cin >> A;
//
//	for (int i = 0; i < A; ++i)
//	{
//		int num = 0;
//		cin >> num;
//		arr[i][0] = num; // 배열 값
//		arr[i][1] = 1;   // 수열의 길이
//
//		// 수열의 최대 길이 찾기
//		for (int j = 0; j < i; ++j)
//		{
//			if (arr[i][0] > arr[j][0] && arr[i][1] < arr[j][1] + 1)
//			{
//				arr[i][1] = arr[j][1] + 1;
//			}
//			if (arr[i][1] > ans)
//				ans = arr[i][1];
//		}
//	}
//
//	cout << ans;
//	return 0;
//}
//


