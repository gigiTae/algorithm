//#include <iostream>
//#include <vector>
//#include <queue>
//#include <set>
//using namespace std;
//int N;
//vector<pair<int, int>> Info[100001];
//bool visited[100001]{};
//multiset<long long, greater<long long>> ans;
//int BFS(int num)
//{
//	multiset<long long, greater<long long>> S;
//	visited[num] = true;
//	long long MaxDistance = 0;
//	int MaxDistanceIndex = 0;
//	queue<pair<int, long long>> Q;
//	for (int i = 0; i < Info[num].size(); ++i) {
//		Q.push(make_pair(Info[num][i].first, Info[num][i].second));
//		visited[Info[num][i].first] = true;
//	}
//	while (!Q.empty()) {
//		int index = Q.front().first;
//		long long Dist = Q.front().second;
//		if (MaxDistance < Dist) {
//			MaxDistance = Dist;
//			MaxDistanceIndex = index;
//		}
//		S.insert(Dist);
//		for (int i = 0; i < Info[index].size(); ++i) {
//			if (!visited[Info[index][i].first]) {
//				visited[Info[index][i].first] = true;
//				Q.push(make_pair(Info[index][i].first, Dist + Info[index][i].second));
//			}
//		}
//		Q.pop();
//	}
//	auto iter = S.begin();
//	ans.insert(*(++iter));
//	return MaxDistanceIndex;
//}
//
//void Solve()
//{
//	int index = BFS(1);
//	for (int i = 1; i <= N; ++i)
//		visited[i] = false;
//	int other = BFS(index);
//	for (int i = 1; i <= N; ++i)
//		visited[i] = false;
//	BFS(other);
//}
//int main()
//{
//	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
//	cin >> N;
//	for (int i = 1; i < N; ++i) {
//		int vertex1, vertex2, value;
//		cin >> vertex1 >> vertex2 >> value;
//		Info[vertex1].push_back(make_pair(vertex2, value));
//		Info[vertex2].push_back(make_pair(vertex1, value));
//	}
//
//	Solve();
//	cout << *ans.begin();
//}
//
