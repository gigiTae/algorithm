//
//#include <iostream>
//#include <set>
//using namespace std;
//
//int main(void)
//{
//	cin.tie(NULL);
//	cout.tie(NULL);
//	ios::sync_with_stdio(false);
//
//	int TestCase;
//	cin >> TestCase;
//	for (int i = 0; i < TestCase; ++i)
//	{
//		set<int> S;
//		int N;
//		cin >> N;
//		for (int j = 0; j < N; ++j)
//		{
//			int num;
//			cin >> num;
//			S.insert(num);
//		}
//		int ans = 0;
//		for (auto iter = S.begin(); iter != S.end(); ++iter)
//		{
//			int num1 = *iter;
//			auto iter2 = iter;
//			++iter2;
//			while (iter2 != S.end())
//			{
//				int num2 = *iter2;
//				if (S.find(2 * num2 - num1) != S.end())
//				{
//					++ans;
//				}
//				++iter2;
//			}
//		}
//		cout << ans << '\n';
//
//	}
//}
