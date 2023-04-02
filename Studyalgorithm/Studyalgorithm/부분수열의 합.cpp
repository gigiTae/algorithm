//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//int N, S;
//vector<int> vec;
//int ans = 0;
//void Solve(int index, int sum)
//{
//	if (index == N) {
//		if (sum == S)
//			++ans;
//		return;
//	}
//
//	Solve(index + 1, sum + vec[index]);
//	Solve(index + 1, sum);
//}
//
//int main()
//{
//	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
//	cin >> N >> S;
//	for (int i = 0; i < N; ++i) {
//		int num; cin >> num;
//		vec.push_back(num);
//	}
//	sort(vec.begin(), vec.end());
//	Solve(0, 0);
//	if (S == 0)
//		--ans;
//	cout << ans;
//}