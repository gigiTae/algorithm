//#include <iostream>
//#include <algorithm>
//#include <vector>
//using namespace std;
//int N, C;
//vector<int> vec;
//vector<long long> Left;
//vector<long long> Right;
//int middle = N / 2;
//
//void DpLeft(int index, long long sum)
//{
//	if (index == middle) {
//		Left.push_back(sum);
//		return;
//	}
//	DpLeft(index + 1, sum + vec[index]);
//	DpLeft(index + 1, sum);
//}
//void DpRight(int index, long long sum)
//{
//	if (index == N) {
//		Right.push_back(sum);
//		return;
//	}
//	DpRight(index + 1, sum + vec[index]);
//	DpRight(index + 1, sum);
//}
//
//
//void Solve()
//{
//	middle = N / 2;
//	int ans = 0;
//	DpLeft(0, 0);
//	DpRight(middle, 0);
//	sort(Left.begin(), Left.end());
//	sort(Right.begin(), Right.end());
//
//	auto right_index = Right.size() - 1;
//	// 투포인터를 다시 응용할 수 있지 않을까?
//	for (int i = 0; i < Left.size(); ++i)
//	{
//		if (right_index == -1)
//			break;
//		while (true)
//		{
//			if (Left[i] + Right[right_index] <= C) {
//				ans += right_index + 1;
//				break;
//			}
//			--right_index;
//			if (right_index == -1)
//				break;
//		}
//
//	}
//
//	cout << ans;
//}
//
//int main()
//{
//	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
//	cin >> N >> C;
//	for (int i = 0; i < N; ++i) {
//		int num = 0; cin >> num;
//		vec.push_back(num);
//	}
//
//	Solve();
//}