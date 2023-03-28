//#include <iostream>
//#include <string>
//#include <set>
//using namespace std;
//
//
//
//int main()
//{
//	cin.tie(NULL);
//	cout.tie(NULL);
//	ios::sync_with_stdio(false);
//
//	int TestCase;
//	cin >> TestCase;
//	for (int i = 0; i < TestCase; ++i) {
//		set<string> S;
//		int n; cin >> n;
//		bool IsConst = true;
//		for (int j = 0; j < n; ++j) {
//			string str;
//			cin >> str;
//			S.insert(str);
//			auto iter = ++S.find(str);
//			if (iter != S.end()) {
//				string Next = *iter;
//				for (int i = 0; i < str.size(); ++i) {
//					if (str[i] != Next[i])
//						break;
//					if (i == str.size() - 1)
//						IsConst = false;
//				}
//			}
//
//			if (IsConst == true) { // 일관성이 없으면 스킵
//				while (!str.empty())
//				{
//					str.pop_back();
//					if (S.find(str) != S.end())
//						IsConst = false;
//				}
//			}
//
//		}
//
//		if (IsConst)
//			cout << "YES" << '\n';
//		else
//			cout << "NO" << '\n';
//	}
//}
