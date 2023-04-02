//#include <iostream>
//#include <vector>
//using namespace std;
//
//bool prime_number[1000001]{ true, true };
//void Init()
//{
//	for (int i = 2; i < 1000001; ++i)
//	{
//		if (prime_number[i] == false)
//		{
//			int num = 2;
//			while (true) {
//				if (i * num > 1000000)
//					break;
//				prime_number[i * num] = true;
//				++num;
//			}
//		}
//	}
//}
//
//int NextPrimeNumer(int num)
//{
//	while (true)
//	{
//		++num;
//		if (prime_number[num] == false)
//			return num;
//	}
//}
//
//int PrevPrimeNumber(int num)
//{
//	while (true)
//	{
//		--num;
//		if (prime_number[num] == false)
//			return num;
//	}
//}
//
//int Solve(int num)
//{
//	int ans = 0;
//	int front = 2;
//	int back = PrevPrimeNumber(num);
//
//	while (front != back)
//	{
//		if (front + back < num) {
//			front = NextPrimeNumer(front);
//		}
//		else {
//			back = PrevPrimeNumber(back);
//		}
//
//		if (front + back == num)
//			++ans;
//	}
//
//	return ans;
//}
//
//int main()
//{
//	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
//	Init();
//	int TestCase; cin >> TestCase;
//	for (int i = 0; i < TestCase; ++i) {
//		int N;
//		cin >> N;
//		cout << Solve(N) << '\n';
//	}
//
//}
//
