//#include <iostream>
//#include <set>
//
//using namespace std;
//
//
//int main()
//{
//	cin.tie(NULL);
//	ios::sync_with_stdio(false);
//
//	set<string> str;
//	int MyString = 0;
//	int CheckString = 0;
//
//	cin >> MyString >> CheckString;
//
//	for (int i = 0; i < MyString; ++i)
//	{
//		string Inputstr{};
//		cin >> Inputstr;
//
//		str.insert(Inputstr);
//	}
//
//	int IsSameWord = 0;
//
//	for (int i = 0; i < CheckString; ++i)
//	{
//		string Inputstr{};
//		cin >> Inputstr;
//
//		if (str.find(Inputstr) != str.end())
//			++IsSameWord;
//	}
//
//	cout << IsSameWord;
//
//
//
//	return 0;
//}