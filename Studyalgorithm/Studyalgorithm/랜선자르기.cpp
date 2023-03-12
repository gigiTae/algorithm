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
//	int K, N;
//	cin >> K >> N;
//	vector <long long > vec;
//
//	long long MaxLen = 1;
//	long long PrevLen = 1;
//
//	for (int i = 0; i < K; ++i)
//	{
//		long long num;
//		cin >> num;
//		if (num > MaxLen)
//			MaxLen = num;
//		vec.push_back(num);
//	}
//	long long ans = 0;
//	while (true)
//	{
//		int Cut = 0;
//		int Divide = (MaxLen + PrevLen) / 2;
//		if (Divide == ans)
//		{
//			for (int i = 0; i < K; ++i)
//			{
//				Cut += vec[i] / (Divide + 1);
//			}
//			if (Cut >= N) // 가능 
//				++ans;
//			break;
//		}
//		for (int i = 0; i < K; ++i)
//		{
//			Cut += vec[i] / Divide;
//		}
//		if (Cut >= N) // 가능 
//			PrevLen = Divide;
//		else // 불가능
//			MaxLen = Divide;
//		ans = Divide;
//	}
//	cout << ans;
//
//	return 0;
//}
//
