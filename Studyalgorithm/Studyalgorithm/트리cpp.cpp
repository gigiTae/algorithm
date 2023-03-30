//#include <iostream>
//#include <vector>
//using namespace std;
//
//int N, EraseNumber, RootNode;
//int parent[50];
//vector<int> child[50];
//int ans = 0;
//
//void DFS(int index)
//{
//	int c = 0;
//	for (int i = 0; i < child[index].size(); ++i) {
//		int next = child[index][i];
//		if (next == EraseNumber)
//			continue;
//		++c;
//		DFS(next);
//	}
//	if (c == 0)
//		++ans;
//}
//
//int main()
//{
//	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
//	cin >> N;
//	for (int i = 0; i < N; ++i) {
//		cin >> parent[i];
//		child[parent[i]].push_back(i);
//		if (parent[i] == -1)
//			RootNode = i;
//	}
//	cin >> EraseNumber;
//	if (RootNode == EraseNumber)
//		cout << 0;
//	else {
//		DFS(RootNode);
//		cout << ans;
//	}
//}
//
