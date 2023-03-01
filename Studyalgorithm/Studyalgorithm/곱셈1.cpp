//#include<iostream>
//#include<map>
//using namespace std;
//
//int A, B, C;
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
//
//int main(void)
//{
//	cin >> A >> B >> C;
//
//	cout << Calculate(A, B, C);
//	return 0;
//}