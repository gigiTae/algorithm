//
//#include <iostream>
//#include<set>
//#include<vector>
//using namespace std;
//
//int L, C;
//set<char> s;
//vector<char> str;
//
//void Print()
//{
//	for (int i = 0; i < str.size(); ++i)
//	{
//		cout << str[i];
//	}
//	cout << '\n';
//}
//
//
//void DFS(int num, int index)
//{
//	if (num == L)
//	{
//		int aeiou = 0, other = 0;
//		for (int i = 0; i < str.size(); ++i)
//		{
//			if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
//				++aeiou;
//			else
//				++other;
//		}
//
//		if (aeiou > 0 && other > 1)
//			Print();
//	}
//	else
//	{
//
//		auto iter = s.begin();
//		for (int i = 0; i < index; ++i)
//			++iter;
//
//		for (; iter != s.end(); ++iter)
//		{
//			++index;
//			char c = *iter;
//			str.push_back(c);
//			DFS(num + 1, index);
//			str.pop_back();
//		}
//	}
//}
//
//
//int main()
//{
//	cin.tie(NULL);
//	cout.tie(NULL);
//	ios::sync_with_stdio(false);
//	cin >> L >> C;
//
//	for (int i = 0; i < C; ++i)
//	{
//		char c;
//		cin >> c;
//		s.insert(c);
//	}
//
//
//	DFS(0, 0);
//
//	return 0;
//}
//
