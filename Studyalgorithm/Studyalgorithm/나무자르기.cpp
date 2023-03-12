//
//#include <iostream>
//#include <vector>
//using namespace std;
//
//int main()
//{ 
//	cin.tie(NULL);
//	cout.tie(NULL);
//	ios::sync_with_stdio(false);
//
//	int N, M;
//	cin >> N >> M;
//	vector<long long> vec;
//	long long MaxH = 0;
//	for (int i = 0; i < N; ++i)
//	{
//		long long num;
//		cin >> num;
//		if (MaxH < num)
//			MaxH = num;
//		vec.push_back(num);
//	}
//
//	long long H = 0;
//	long long ans = 0;
//	while (true)
//	{
//		long long Home = 0;
//		long long Divide = (H + MaxH) / 2;
//		if (ans == Divide)
//		{
//			for (int i = 0; i < N; ++i)
//			{
//				if (H < vec[i])
//					Home += vec[i] - H;
//			}
//			if (Home < M) // 가능
//				++ans;
//			break;
//		}
//		for (int i = 0; i < N; ++i)
//		{
//			if (Divide < vec[i])
//				Home += vec[i] - Divide;
//		}
//		if (Home >= M) // 가능
//		{
//			H = Divide;
//		}
//		else //불가능
//		{
//			MaxH = Divide;
//		}
//		ans = Divide;
//	}
//
//	cout << ans;
//
//    return 0;
//}
//
