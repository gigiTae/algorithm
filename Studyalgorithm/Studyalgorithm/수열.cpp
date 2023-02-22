//
//#include<iostream>
//#include<vector>
//#include <set>
//using namespace std;
//
//int main()
//{
//	int N, K;
//	cin >> N >> K;
//	vector<int> vec;
//	set<int> s;
//	int sum = 0;
//	for (int i = 0; i < N; ++i)
//	{
//		int num = 0;
//		cin >> num;
//		vec.push_back(num);
//		if (i < K - 1)
//			sum += num;
//		else if (i == K - 1)
//		{
//			sum += num;
//			s.insert(sum);
//		}
//		else
//		{
//			sum += num - vec[i - K];
//			s.insert(sum);
//		}
//	}
//
//
//	cout << *(--s.end());
//}
