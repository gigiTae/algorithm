//
//#include <iostream>
//#include <vector>
//#define INF 2147483647
//
//using namespace std;
//struct edge
//{
//	int start;
//	int destination;
//	int cost;
//
//	edge(int start, int destination, int cost)
//		:start(start), destination(destination), cost(cost) {}
//};
//int N, M;
//vector<edge> EdgeList;
//long long Dist[501]{};
//
//void Bellman_Ford(int start_point)
//{
//	Dist[start_point] = 0;
//	for (int j = 0; j < N - 1; ++j)
//	{
//		for (int i = 0; i < EdgeList.size(); ++i)
//		{
//			edge info = EdgeList[i];
//			if (Dist[info.start] == INF)
//				continue;
//			if (Dist[info.destination] > info.cost + Dist[info.start])
//				Dist[info.destination] = info.cost + Dist[info.start];
//		}
//	}
//
//	for (int i = 0; i < EdgeList.size(); ++i)
//	{
//		edge info = EdgeList[i];
//		if (Dist[info.start] == INF)
//			continue;
//		if (Dist[info.destination] > info.cost + Dist[info.start])
//		{
//			cout << -1;
//			return;
//		}
//	}
//
//	for (int i = 2; i <= N; ++i)
//	{
//		if (Dist[i] == INF)
//			cout << -1 << '\n';
//		else
//			cout << Dist[i] << '\n';
//	}
//}
//
//int main()
//{
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//
//	cin >> N >> M;
//	for (int i = 0; i < M; ++i)
//	{
//		int a, b, c;
//		cin >> a >> b >> c;
//		EdgeList.push_back(edge(a, b, c));
//	}
//	for (int i = 1; i <= 500; ++i)
//		Dist[i] = INF;
//
//	Bellman_Ford(1);
//
//
//}
