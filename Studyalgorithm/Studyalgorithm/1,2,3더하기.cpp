//#include <iostream>
//using namespace std;
//
//int ans[11]{ 0,1 };
//
//void find(int num, int sum)
//{
//	if (sum == num) {
//		++ans[num];
//		return;
//	}
//	else {
//		for (int i = 1; i <= 3; ++i) {
//			if (sum + i <= num)
//				find(num, sum + i);
//		}
//	}
//}
//
//int main()
//{
//	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
//	int TestCase;
//	cin >> TestCase;
//
//	for (int i = 2; i < 11; ++i) {
//		find(i, 0);
//	}
//
//	for (int i = 0; i < TestCase; ++i) {
//		int num; cin >> num;
//		cout << ans[num] << '\n';
//	}
//
//}
