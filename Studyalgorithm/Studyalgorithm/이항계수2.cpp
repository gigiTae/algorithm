//#include<iostream>
//
//using namespace std;
//
//long long C[1001][1001]{};
//
//long long DP(int n, int k)
//{
//	if (k > n)
//		return 0;
//	else if (k == 0 || k == n)
//		return 1;
//	else
//	{
//		if (C[n][k] == 0)
//			C[n][k] = (DP(n - 1, k - 1) + DP(n - 1, k)) % 10007;
//		return C[n][k];
//	}
//
//}
//
//int main(void)
//{
//	int N, K;
//	cin >> N >> K;
//	cout << DP(N, K);
//
//	return 0;
//}