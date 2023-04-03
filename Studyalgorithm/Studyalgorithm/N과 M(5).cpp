//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//int N, M;
//vector<int> vec;
//vector<int> arr;
//
//void DP(int num)
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
//		if (find(arr.begin(), arr.end(), vec[i]) != arr.end())
//			continue;
//		arr.push_back(vec[i]);
//		DP(num + 1);
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
//	DP(0);
//}