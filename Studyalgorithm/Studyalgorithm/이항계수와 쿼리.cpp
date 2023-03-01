//#include<iostream>
//#include<map>
//#define MOD 1000000007
//using namespace std;
//
//long long arr[4000001] = { 1,1 };
//
//map<int, long long> Mp;
//
//long long Calculate(int a, int b, int c)
//{
//	if (b == 1)
//		return a % c;
//	else if (Mp.find(b) != Mp.end())
//		return Mp.find(b)->second;
//	else if (b % 2 == 0)
//	{
//		long long num = Calculate(a, b / 2, c) % c;
//		long long value = (num * num) % c;
//		Mp.insert(make_pair(b, value));
//		return value;
//	}
//	else
//	{
//		long long num = Calculate(a, (b - 1) / 2, c) % c;
//		long long value = ((num * num) % c * a) % c;
//		Mp.insert(make_pair(b, value));
//		return value;
//	}
//	return  0;
//}
//
//int main(void)
//{
//	ios_base::sync_with_stdio(0);
//	cin.tie(0);
//	cout.tie(0);
//
//	for (int i = 2; i <= 4000000; ++i)
//	{
//		arr[i] = (arr[i - 1] * i) % MOD;
//	}
//	int M;
//	cin >> M;
//	for (int i = 0; i < M; ++i)
//	{
//		int N, K;
//		cin >> N >> K;
//		long long ans = arr[N];
//		// n!(r!(n−r)!)p−2(modp)
//		long long A = (arr[K] * arr[N - K]) % MOD;
//		ans = (ans * Calculate(A, MOD - 2, MOD)) % MOD;
//		Mp.clear();
//		cout << ans << '\n';
//	}
//
//	return 0;
//}