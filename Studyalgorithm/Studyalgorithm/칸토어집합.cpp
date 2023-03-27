//
//#include <iostream>
//#include <cmath>
//using namespace std;
//
//void Solve(int num)
//{
//	if (num == 0) {
//		cout << '-';
//		return;
//	}
//
//	Solve(num - 1);
//	double index = pow(3, num - 1);
//
//	for (int i = 0; i < index; ++i)
//		cout << ' ';
//	Solve(num - 1);
//}
//
//
//int main()
//{
//	cin.tie(NULL);
//	cout.tie(NULL);
//	ios::sync_with_stdio(false);
//
//	int N;
//	while (cin >> N) {
//		Solve(N);
//		cout << '\n';
//	}
//
//
//}