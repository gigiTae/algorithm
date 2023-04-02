//#include <iostream>
//#include <vector>
//#include <map>
//using namespace std;
//int N, S;
//int middle;
//vector<int> vec;
//vector<int> Left;
//map<int, int> Right;
//
//
//void LeftDP(int index, int sum)
//{
//	if (index == middle) {
//		Left.push_back(sum);
//		return;
//	}
//	LeftDP(index + 1, sum);
//	LeftDP(index + 1, sum + vec[index]);
//}
//
//void RightDP(int index, int sum)
//{
//	if (index == N) {
//		auto iter = Right.find(sum);
//		if (iter == Right.end())
//			Right.insert(make_pair(sum, 1));
//		else
//			iter->second += 1;
//		return;
//	}
//	RightDP(index + 1, sum);
//	RightDP(index + 1, sum + vec[index]);
//}
//
//void Solve()
//{
//	middle = N / 2;
//	LeftDP(0, 0);
//	RightDP(middle, 0);
//	long long ans = 0;
//	Right.find(0)->second--;
//
//	for (int i = 0; i < Left.size(); ++i) {
//		auto iter = Right.find(S - Left[i]);
//		if (iter != Right.end())
//			ans += iter->second;
//	}
//
//	for (int i = 1; i < Left.size(); ++i)
//		if (Left[i] == S)
//			++ans;
//
//	cout << ans;
//}
//
//int main()
//{
//	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
//	cin >> N >> S;
//	for (int i = 0; i < N; ++i)
//	{
//		int num; cin >> num;
//		vec.push_back(num);
//	}
//	Solve();
//
//}