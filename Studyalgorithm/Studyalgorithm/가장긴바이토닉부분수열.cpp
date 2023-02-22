//#include<iostream>
//
//using namespace std;
//
//
//// arr[num][x]  x=0 대입값 x=1 증가수열 x=2 감소수열
//int arr[1001][3]{};
//int main()
//{
//
//	int ans = 1;
//	int N;
//	cin >> N;
//
//	for (int i = 0; i < N; ++i)
//	{
//		cin >> arr[i][0];
//
//		arr[i][1] = 1;
//		arr[i][2] = 1;
//		if (i == 0)
//			continue;
//
//		for (int j = 0; j < i; ++j)
//		{
//			if (arr[i][0] > arr[j][0] && arr[i][1] < arr[j][1] + 1)
//			{
//				arr[i][1] = arr[j][1] + 1;
//			}
//			if (arr[i][0] < arr[j][0])
//			{
//				if (arr[j][1] > arr[j][2] && arr[i][2] < arr[j][1] + 1)
//					arr[i][2] = arr[j][1] + 1;
//				else if (arr[i][2] < arr[j][2] + 1)
//					arr[i][2] = arr[j][2] + 1;
//			}
//		}
//		if (ans < arr[i][1])
//			ans = arr[i][1];
//
//		if (ans < arr[i][2])
//			ans = arr[i][2];
//	}
//
//	cout << ans;
//}