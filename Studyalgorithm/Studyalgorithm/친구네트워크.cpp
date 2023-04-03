//#include <iostream>
//#include <vector>
//#include <map>
//using namespace std;
//int F;
//vector<int> vec;
//
//int Find(int num)
//{
//	if (vec[num] < 0)
//		return num;
//
//	int index = Find(vec[num]);
//	vec[num] = index;
//	return index;
//}
//
//void Union(int x, int y)
//{
//	x = Find(x);
//	y = Find(y);
//
//	if (x == y)
//		return;
//
//	if (vec[x] < vec[y]) {
//		vec[x] += vec[y];
//		vec[y] = x;
//	}
//	else {
//		vec[y] += vec[x];
//		vec[x] = y;
//	}
//}
//
//int main()
//{
//	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
//
//	int TestCase; cin >> TestCase;
//	for (int i = 0; i < TestCase; ++i) {
//		cin >> F;
//		vec.clear();
//		map<string, int> M;
//		for (int i = 0; i < F; ++i) {
//			string str1, str2;
//			cin >> str1 >> str2;
//			auto iter1 = M.find(str1);
//			if (iter1 == M.end()) {
//				M.insert(make_pair(str1, vec.size()));
//				vec.push_back(-1);
//				iter1 = M.find(str1);
//			}
//
//			auto iter2 = M.find(str2);
//			if (iter2 == M.end()) {
//				M.insert(make_pair(str2, vec.size()));
//				vec.push_back(-1);
//				iter2 = M.find(str2);
//			}
//
//			Union(iter1->second, iter2->second);
//			cout << vec[Find(iter1->second)] * -1 << '\n';
//		}
//
//
//	}
//
//	return 0;
//}