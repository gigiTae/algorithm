//#include <iostream>
//#include <vector>
//
//enum
//{
//	BIG,
//	SMALL,
//};
//
//
//using namespace std;
//int N, M;
//
//vector<int> Big[101];
//vector<int> Small[101];
//vector<int> ans(101, 99);
//bool Visited[101][101]{};
//
//void BFS(int index, int number, bool BS)
//{
//	if (BS == BIG)
//	{
//		for (int i = 0; i < Big[number].size(); ++i)
//		{
//			if (Visited[index][Big[number][i]] == false)
//			{
//				Visited[index][Big[number][i]] = true;
//				--ans[index];
//				BFS(index, Big[number][i], BS);
//			}
//		}
//	}
//	else if (BS = SMALL)
//	{
//		for (int i = 0; i < Small[number].size(); ++i)
//		{
//			if (Visited[index][Small[number][i]] == false)
//			{
//				Visited[index][Small[number][i]] = true;
//				--ans[index];
//				BFS(index, Small[number][i], BS);
//			}
//		}
//	}
//}
//
//int main()
//{
//	cin >> N >> M;
//	for (int i = 0; i < M; ++i)
//	{
//		int a, b; //  ¹«°Ô a > b 
//		cin >> a >> b;
//		Big[b].push_back(a);
//		Small[a].push_back(b);
//	}
//
//	for (int i = 1; i <= N; ++i)
//	{
//		Visited[i][i] = true;
//		BFS(i, i, BIG);
//		BFS(i, i, SMALL);
//		cout << ans[i] - 100 + N << '\n';
//	}
//}