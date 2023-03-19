//#include <iostream>
//
//using namespace std;
//
//int N, M, ans;
//int IsConnected[1001]{};
//
//int main(void)
//{
//	ios_base::sync_with_stdio(false);
//	cin.tie(nullptr);
//	cout.tie(nullptr);
//	cin >> N >> M;
//	ans = N;
//	for (int i = 0; i < M; ++i)
//	{
//		int num1, num2;
//		cin >> num1 >> num2;
//		int connect1 = IsConnected[num1];
//		int connect2 = IsConnected[num2];
//		if (connect1 == 0 && connect2 == 0)
//		{
//			--ans;
//			if (num1 > num2)
//			{
//				IsConnected[num1] = num2;
//				IsConnected[num2] = num2;
//			}
//			else
//			{
//				IsConnected[num1] = num1;
//				IsConnected[num2] = num1;
//			}
//		}
//		else if (connect1 == connect2)
//			continue;
//		else if (connect1 != 0 && connect2 != 0 && connect1 != connect2)
//		{
//			--ans;
//			if (connect1 > connect2)
//			{
//				for (int j = 1; j <= 1000; ++j)
//				{
//					if (IsConnected[j] == connect1)
//						IsConnected[j] = connect2;
//				}
//			}
//			else
//			{
//				for (int j = 1; j <= 1000; ++j)
//				{
//					if (IsConnected[j] == connect2)
//						IsConnected[j] = connect1;
//				}
//			}
//		}
//		else if (connect1 == 0)
//		{
//			--ans;
//			if (num1 > connect2)
//			{
//				IsConnected[num1] = connect2;
//			}
//			else
//			{
//				IsConnected[num1] = num1;
//				for (int j = 1; j <= 1000; ++j)
//				{
//					if (IsConnected[j] == connect2)
//						IsConnected[j] = num1;
//				}
//			}
//		}
//		else if (connect2 == 0)
//		{
//			--ans;
//			if (num2 > connect1)
//			{
//				IsConnected[num2] = connect1;
//			}
//			else
//			{
//				IsConnected[num2] = num2;
//				for (int j = 1; j <= 1000; ++j)
//				{
//					if (IsConnected[j] == connect1)
//						IsConnected[j] = num2;
//				}
//			}
//		}
//	}
//
//
//	cout << ans;
//
//	return 0;
//}