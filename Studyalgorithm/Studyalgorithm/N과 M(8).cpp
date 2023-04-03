//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//int N, M;
//vector<int> vec;
//vector<int> arr;
//
//void DP(int num, int index)
//{
//	if (num == M) {
//		for (int i = 0; i < arr.size(); ++i)
//			cout << arr[i] << ' ';
//		cout << '\n';
//		return;
//	}
//
//	for (int i = 0; i < N; ++i)
//	{
//		if (index > vec[i])
//			continue;
//		arr.push_back(vec[i]);
//		DP(num + 1, vec[i]);
//		arr.pop_back();
//	}
//}
//
//int main()
//{
//	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
//	cin >> N >> M;
//	for (int i = 0; i < N; ++i) {
//		int num; cin >> num;
//		vec.push_back(num);
//	}
//	sort(vec.begin(), vec.end());
//
//	DP(0, 0);
//}