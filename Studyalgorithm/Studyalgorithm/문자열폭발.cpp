//
//#include <iostream>
//#include <vector>
//#include <string>
//using namespace std;
//
//int main()
//{
//	cin.tie(NULL);
//	cout.tie(NULL);
//	ios::sync_with_stdio(false);
//
//	string str, boom;
//	cin >> str >> boom;
//
//	vector<char>  S;
//	for (int i = 0; i < (int)str.size(); ++i)
//	{
//		char c = str[i];
//		S.push_back(c);
//
//		if (boom.size() <= S.size())
//		{
//			string prev = {};
//
//			for (int e = boom.size(); 0 < e; --e)
//			{
//				prev += S[S.size() - e];
//			}
//			if (prev == boom)
//			{
//
//				for (int i = 0; i < prev.size(); ++i)
//					S.pop_back();
//			}
//		}
//
//	}
//
//	string ans = {};
//	for (int i = 0; i < S.size(); ++i)
//	{
//		ans += S[i];
//	}
//
//	if (ans.size() == 0)
//		cout << "FRULA";
//	else
//		cout << ans;
//}
