//#include <iostream>
//#include <set>
//using namespace std;
//
//int main()
//{
//	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
//
//	set<string> S;
//	int TestCase; cin >> TestCase;
//	for (int i = 0; i < TestCase; ++i) {
//		string str1, str2;
//		cin >> str1 >> str2;
//		if (str2 == "enter")
//			S.insert(str1);
//		else
//			S.erase(S.find(str1));
//	}
//
//	for (auto iter = S.rbegin(); iter != S.rend(); ++iter)
//		cout << *iter << '\n';
//
//	return 0;
//}