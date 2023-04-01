//#include <iostream>
//#include <vector>
//#include <cmath>
//
//#define MAX 2000000011
//using namespace std;
//
//int main()
//{
//	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
//	int N;
//	cin >> N;
//	vector<long long> S;
//	for (int i = 0; i < N; ++i)
//	{
//		long long num;
//		cin >> num;
//		S.push_back(num);
//	}
//
//	long long mininum = MAX;
//	long long left = 0;
//	long long right = 0;
//	auto left_iter = S.begin();
//	auto right_iter = --S.end();
//	while (right_iter != left_iter)
//	{
//		long long tmp = *left_iter + *right_iter;
//		if (mininum > abs(tmp)) {
//			mininum = abs(tmp);
//			left = *left_iter;
//			right = *right_iter;
//		}
//
//		if (tmp == 0)
//			break;
//		else if (tmp < 0)
//			++left_iter;
//		else
//			--right_iter;
//	}
//
//	cout << left << ' ' << right;
//}
//
