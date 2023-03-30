//#include <iostream>
//#include <vector>
//#include <map>
//#include <set>
//using namespace std;
//int N, ans = 0;
//
//struct Info
//{
//	pair<int, int> parent;
//	vector<pair<int, int>> child;
//	Info() :parent(make_pair(0, 0)) {}
//};
//map<int, Info> M;
//
//int Find(int num)
//{
//	auto iter = M.find(num);
//	multiset<int, greater<int>> S;
//	S.insert(0); S.insert(0);
//
//	for (int i = 0; i < iter->second.child.size(); ++i) {
//		S.insert(Find(iter->second.child[i].first));
//	}
//
//	int Return = iter->second.parent.second;
//	auto iter2 = S.begin();
//	int val1 = *iter2++;
//	int val2 = *iter2;
//	if (val1 + val2 > ans)
//		ans = val1 + val2;
//
//	return Return + val1;
//}
//
//
//void Solve()
//{
//	Find(1);
//	cout << ans;
//}
//
//int main()
//{
//	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
//	cin >> N;
//	for (int i = 1; i <= N; ++i) {
//		Info info;
//		M.insert(make_pair(i, info));
//	}
//
//	for (int i = 0; i < N - 1; ++i) {
//		int num1, num2, num3; cin >> num1 >> num2 >> num3;
//		// 자식노드 추가
//		auto iter = M.find(num1);
//		iter->second.child.push_back(make_pair(num2, num3));
//		// 부모노드 추가
//		auto iter2 = M.find(num2);
//		iter2->second.parent.first = num1;
//		iter2->second.parent.second = num3;
//	}
//
//	Solve();
//}
//
