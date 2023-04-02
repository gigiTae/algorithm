//#include <iostream>
//using namespace std;
//
//bool prime_number[4000001]{ true, true };
//int N;
//int ans = 0;
//
//int NextPrimeNumber(int num)
//{
//	if (num == N)
//		return -1;
//
//	while (true)
//	{
//		++num;
//		if (prime_number[num] == false)
//			return num;
//
//		if (num == N)
//			return -1;
//	}
//}
//
//void Solve()
//{
//	int front = 2;
//	int rear = 2;
//	int sum = 0;
//
//	while (true)
//	{
//		if (sum >= N) {
//			sum -= front;
//			front = NextPrimeNumber(front);
//		}
//		else {
//			sum += rear;
//			rear = NextPrimeNumber(rear);
//		}
//		if (sum == N)
//			++ans;
//		if (rear == -1 && sum < N)
//			return;
//	}
//
//}
//
//int main()
//{
//	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
//	cin >> N;
//	//  에라토스테네스의 체
//	for (int i = 2; i <= N; ++i)
//	{
//		if (prime_number[i] == false) {
//			int num = 2;
//			while (i * num <= N) {
//				prime_number[i * num] = true;
//				++num;
//			}
//		}
//	}
//	if (N == 1)
//		cout << 0;
//	else {
//		Solve();
//		cout << ans;
//	}
//}
//
