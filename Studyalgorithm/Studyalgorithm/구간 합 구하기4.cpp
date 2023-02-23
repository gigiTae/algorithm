//
//#include<iostream>
//#include<vector>
//using namespace std;
//
//int main()
//{
//	cout.tie(NULL);
//	cin.tie(NULL);
//	ios::sync_with_stdio(false);
//	int N, M;
//	cin >> N >> M;
//	vector<long long> vec;
//	long long Prevnum = 0;
//	vec.push_back(0);
//	for (int i = 0; i < N; ++i)
//	{
//		long long num = 0;
//		cin >> num;
//		num += Prevnum;
//		vec.push_back(num);
//		Prevnum = num;
//	}
//
//	for (int i = 0; i < M; ++i)
//	{
//		long long start, end;
//		cin >> start >> end;
//		long long ans = vec[end] - vec[start - 1];
//
//		cout << ans << '\n';
//	}
//
//}
