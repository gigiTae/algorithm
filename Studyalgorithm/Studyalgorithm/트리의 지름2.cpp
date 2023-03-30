//#include <iostream>
//#include <vector>
//#include <queue>
//using namespace std;
//
//int V; // 트리의 정점 
//vector<pair<int, int>> edge[100001]{};
//bool visited[100001]{};
//int ans = 0;
//
//int BFS(int num) {
//	int MaxDistance = 0;
//	int MaxDistanceIndex = 0;
//
//	queue<pair<int, int>> Q;
//	visited[num] = true;
//	for (int i = 0; i < edge[num].size(); ++i) {
//		Q.push(make_pair(edge[num][i].first, edge[num][i].second));
//		visited[edge[num][i].first] = true;
//	}
//	while (!Q.empty())
//	{
//		int index = Q.front().first;
//		int value = Q.front().second;
//		if (value > MaxDistance) {
//			MaxDistance = value;
//			MaxDistanceIndex = index;
//		}
//
//		for (int i = 0; i < edge[index].size(); ++i) {
//			if (!visited[edge[index][i].first]) {
//				visited[edge[index][i].first] = true;
//				Q.push(make_pair(edge[index][i].first, edge[index][i].second + value));
//			}
//		}
//		Q.pop();
//	}
//	ans = MaxDistance;
//	return MaxDistanceIndex;
//}
//
//void Solve()
//{
//	//아무 점정에서 가장먼 정점 찾기
//	int vertex = BFS(1);
//
//	for (int i = 0; i <= V; ++i) {
//		visited[i] = false;
//	}
//	// 가장먼 정점에서 가장먼 정점 찾으면 지름
//	BFS(vertex);
//
//	cout << ans;
//}
//
//
//int main()
//{
//	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
//	cin >> V;
//	for (int i = 0; i < V; ++i) {
//		int index; cin >> index;
//		while (true) {
//			int input1, input2;
//			cin >> input1;
//			if (input1 == -1)
//				break;
//			cin >> input2;
//			edge[index].push_back(make_pair(input1, input2));
//		}
//	}
//
//	Solve();
//
//}
//
