//#include <iostream>
//#include <map>
//#include <vector>
//
//using namespace std;
//
//
//
//int main(void)
//{
//	cin.tie(NULL);
//	cout.tie(NULL);
//	ios::sync_with_stdio(false);
//
//	int TestCase = 0;
//	cin >> TestCase;
//	vector<int> vec;
//	map<int, int> Info;
//	for (int i = 0; i < TestCase; ++i)
//	{
//		int number = 0;
//		cin >> number;
//		vec.push_back(number);
//
//		if (Info.find(number) == Info.end())
//			Info.insert(pair<int, int>(number, 0));
//	}
//
//	int ResultNumber = 0;
//	for (auto iter = Info.begin(); iter != Info.end(); ++iter)
//	{
//		iter->second = ResultNumber;
//		++ResultNumber;
//	}
//
//	for (int i = 0; i < TestCase; ++i)
//	{
//		int findnumber = vec[i];
//
//		int number = Info.find(findnumber)->second;
//
//		cout << number << ' ';
//	}
//
//
//
//	return 0;
//}
//
