//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <set>
//
//using namespace std;
//
//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <set>
//
//using namespace std;
//
//int N, M;
//vector<int> vec;
//vector<int> arr;
//vector<int> index;
//set<string> S;
//
//void DP(int num)
//{
//	if (num == M) {
//		string str;
//		for (int i = 0; i < arr.size(); ++i) {
//			str += arr[i];
//			str += 'a';
//		}
//		if (S.find(str) != S.end())
//			return;
//
//		for (int i = 0; i < arr.size(); ++i)
//			cout << arr[i] << ' ';
//		cout << '\n';
//		S.insert(str);
//		return;
//	}
//
//	for (int i = 0; i < N; ++i)
//	{
//		bool next = false;
//		for (int j = 0; j < index.size(); ++j)
//		{
//			if (index[j] == i)
//				next = true;
//		}
//		if (next)
//			continue;
//
//		arr.push_back(vec[i]);
//		index.push_back(i);
//		DP(num + 1);
//		arr.pop_back();
//		index.pop_back();
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