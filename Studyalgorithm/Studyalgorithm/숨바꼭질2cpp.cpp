//
//#include <iostream>
//#include <queue>
//using namespace std;
//
///*
//���� N ���� K
//
//����ȭ�� �ʿ��Ұ� ����
//*/
//
//int N, K;
//int Count = 0;
//int ans = 0;
//queue<int> Q;
//bool Visited[100001]{};
//
//void BFS()
//{
//	queue<int> tmp;
//	while (!Q.empty())
//	{
//		int NowPos = Q.front();
//		Visited[NowPos] = true;
//		if (NowPos == K)
//		{
//			while (!Q.empty())
//			{
//				if (Q.front() == K)
//					++ans;
//				Q.pop();
//			}
//
//			return;
//		}
//		// X-1 �ڷ� �̵�  
//		if (NowPos > 0 && Visited[NowPos - 1] == false)
//			tmp.push(NowPos - 1);
//		// X+1 ������ �̵�
//		if (Visited[NowPos + 1] == false)
//			tmp.push(NowPos + 1);
//		// 2X  2�� �̵�
//		if (NowPos * 2 < 100001 && Visited[NowPos * 2] == false)
//			tmp.push(NowPos * 2);
//
//		Q.pop();
//	}
//	++Count;
//	Q = tmp;
//}
//
//
//int main(void)
//{
//	cin.tie(NULL);
//	cout.tie(NULL);
//	ios::sync_with_stdio(false);
//
//	cin >> N >> K;
//
//	Visited[N] = true;
//	Q.push(N);
//	while (!Q.empty())
//	{
//		BFS();
//	}
//
//
//
//	cout << Count << '\n';
//	cout << ans;
//
//}