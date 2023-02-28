//
//#include<iostream>
//#include<queue>
//using namespace std;
//
//
//int main()
//{
//	queue<int> S;
//
//	int N, K;
//	cin >> N >> K;
//
//	for (int i = 0; i < N; ++i)
//	{
//		S.push(i + 1);
//	}
//	cout << '<';
//	while (!S.empty())
//	{
//		for (int i = 0; i < K; ++i)
//		{
//			const int num = S.front();
//			S.pop();
//
//			if (i == K - 1)
//			{
//				cout << num;
//				if (!S.empty())
//					cout << ", ";
//			}
//			else
//				S.push(num);
//		}
//	}
//	cout << '>';
//
//	return 0;
//}