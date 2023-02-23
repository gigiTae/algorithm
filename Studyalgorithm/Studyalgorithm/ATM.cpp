//
//#include<iostream>
//#include<map>
//using namespace std;
//
//int main()
//{
//	cin.tie(NULL);
//	cout.tie(NULL);
//	ios::sync_with_stdio(false);
//
//	int N;
//	cin >> N;
//	map<int, int> ATM;
//
//	for (int i = 0; i < N; ++i)
//	{
//		int num = 0;
//		cin >> num;
//
//		if (ATM.find(num) == ATM.end())
//			ATM.insert(make_pair(num, 1));
//		else
//			++ATM.find(num)->second;
//	}
//
//	int sum = 0, ans = 0;
//	for (auto iter = ATM.begin(); iter != ATM.end(); ++iter)
//	{
//		int Repeat = iter->second;
//		for (int i = 0; i < Repeat; ++i)
//		{
//			sum += iter->first;
//			ans += sum;
//		}
//	}
//
//	cout << ans;
//	return 0;
//}
