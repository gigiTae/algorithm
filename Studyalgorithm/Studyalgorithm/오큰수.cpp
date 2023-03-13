//
//#include <iostream>
//#include <map>
//using namespace std;
//
//int arr[1000000]{};
//
//int main()
//{
//	cin.tie(NULL);
//	cout.tie(NULL);
//	ios::sync_with_stdio(false);
//
//	multimap<int, int> M;
//
//	int N;
//	cin >> N;
//	for (int i = 0; i < N; ++i)
//	{
//		int num;
//		cin >> num;
//		if (i != 0)
//		{
//			auto iter = M.begin();
//			while (!M.empty() && num > iter->first)
//			{
//				arr[iter->second] = num;
//				iter = M.erase(iter);
//			}
//		}
//		M.insert(make_pair(num, i));
//	}
//
//	for (auto iter = M.begin(); iter != M.end(); ++iter)
//		arr[iter->second] = -1;
//
//	for (int i = 0; i < N; ++i)
//		cout << arr[i] << ' ';
//
//
//}
