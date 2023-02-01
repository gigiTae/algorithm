//#include <iostream>
//#include <map>
//
//using namespace std;
//
//int main()
//{
//	cin.tie(NULL);
//	ios::sync_with_stdio(false);
//
//	int NeverHeard = 0, NeverSeen = 0;
//	int NeverHeardSeen = 0;
//
//	map < string, bool > Person;
//
//	cin >> NeverHeard >> NeverSeen;
//
//	for (int i = 0; i < NeverHeard; ++i)
//	{
//		string str;
//		cin >> str;
//
//		Person.insert(pair<string, bool>(str, false));
//	}
//
//	for (int i = 0; i < NeverSeen; ++i)
//	{
//		string str;
//		cin >> str;
//		if (Person.find(str) != Person.end())
//		{
//			Person.find(str)->second = true;
//			++NeverHeardSeen;
//		}
//	}
//	cout << NeverHeardSeen << '\n';
//	for (auto iter = Person.begin(); iter != Person.end(); ++iter)
//	{
//		if (iter->second == true)
//		{
//			cout << iter->first << '\n';
//		}
//	}
//
//	return 0;
//}