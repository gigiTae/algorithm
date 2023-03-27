//
//#include <iostream>
//#include <vector>
//#include <queue>
//using namespace std;
//vector<int> vec[100001];
//int N;
//int ans[100001]{};
//bool visited[100001]{};
//queue<int> Q;
//
//void BFS()
//{
//	Q.push(1);
//	visited[1] = true;
//	while (!Q.empty())
//	{
//		int index = Q.front();
//		for (int i = 0; i < vec[index].size(); ++i) {
//			if (visited[vec[index][i]] == false) {
//				visited[vec[index][i]] = true;
//				ans[vec[index][i]] = index;
//				Q.push(vec[index][i]);
//			}
//		}
//		Q.pop();
//	}
//}
//
//int main()
//{
//	cin.tie(NULL);
//	cout.tie(NULL);
//	ios::sync_with_stdio(false);
//	cin >> N;
//	for (int i = 0; i < N - 1; ++i) {
//		int num1, num2;
//		cin >> num1 >> num2;
//		vec[num1].push_back(num2);
//		vec[num2].push_back(num1);
//	}
//	BFS();
//	for (int i = 2; i <= N; ++i) {
//		cout << ans[i] << '\n';
//	}
//}