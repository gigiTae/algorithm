//#include <iostream>
//#include <set>
//
//using namespace std;
//
//int main()
//{
//	cin.tie(NULL);
//	cout.tie(NULL);
//	ios::sync_with_stdio(false);
//
//	string str = {};
//	cin >> str;
//	set<string> substring;
//
//	int Result = 0;
//	// i : 문자열 길이  j : 문자열 인덱스 x : char
//	for (int i = 0; i < str.size(); ++i)
//	{
//		string InputString = {};
//		for (int j = i; j < str.size(); ++j)
//		{
//			InputString += str[j];
//			if (substring.find(InputString) == substring.end())
//			{
//				substring.insert(InputString);
//				++Result;
//			}
//		}
//	}
//
//	cout << Result;
//	return 0;
//}