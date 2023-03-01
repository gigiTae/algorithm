//#include<iostream>
//#include<map>
//using namespace std;
//
//map<int, long long> M;
//
//int Calculate(int a, int b, int c)
//{
//	if (b == 1)
//		return a % c;
//	else if (M.find(b) != M.end())
//		return M.find(b)->second;
//	else if (b % 2 == 0)
//	{
//		long long num = Calculate(a, b / 2, c) % c;
//		long long value = (num * num) % c;
//		M.insert(make_pair(b, value));
//		return value;
//	}
//	else
//	{
//		long long num = Calculate(a, (b - 1) / 2, c) % c;
//		long long value = ((num * num) % c * a) % c;
//		M.insert(make_pair(b, value));
//		return value;
//	}
//	return  0;
//}
//
//long long factorial(int num)
//{
//	long long result = 1;
//	for (int i = 1; i <= num; ++i)
//	{
//		result = (result * i) % 1000000007;
//	}
//	return result;
//}
//
//
//int main(void)
//{
//	int N, K;
//	cin >> N >> K;
//	long long ans = factorial(N);
//	// n!(r!(n−r)!)p−2(modp)
//	long long A = (factorial(K) * factorial(N - K)) % 1000000007;
//	ans = (ans * Calculate(A, 1000000005, 1000000007)) % 1000000007;
//
//	cout << ans;
//
//	return 0;
//}