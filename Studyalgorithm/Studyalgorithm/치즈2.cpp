//#include <iostream>
//#include <queue>
//using namespace std;
//
//int N, M; // row , col
//int arr[100][100]{};
//int tmp[100][100]{};
//
//bool BFS()
//{
//	queue<pair<int, int>> Q;
//	bool visited[100][100]{};
//	Q.push(make_pair(0, 0));
//	visited[0][0] = true;
//	while (!Q.empty())
//	{
//		int Row = Q.front().first;
//		int Col = Q.front().second;
//		// up row-1
//		if (Row > 0 && !visited[Row - 1][Col]) {
//			if (!arr[Row - 1][Col]) {
//				Q.push(make_pair(Row - 1, Col));
//				visited[Row - 1][Col] = true;
//			}
//			else
//				--tmp[Row - 1][Col];
//		}
//		// down row+1
//		if (Row + 1 < N && !visited[Row + 1][Col]) {
//			if (!arr[Row + 1][Col]) {
//				Q.push(make_pair(Row + 1, Col));
//				visited[Row + 1][Col] = true;
//			}
//			else
//				--tmp[Row + 1][Col];
//		}
//		// left col-1
//		if (Col > 0 && !visited[Row][Col - 1]) {
//			if (!arr[Row][Col - 1]) {
//				Q.push(make_pair(Row, Col - 1));
//				visited[Row][Col - 1] = true;
//			}
//			else
//				--tmp[Row][Col - 1];
//		}
//		// right col+1
//		if (Col + 1 < M && !visited[Row][Col + 1]) {
//			if (!arr[Row][Col + 1]) {
//				Q.push(make_pair(Row, Col + 1));
//				visited[Row][Col + 1] = true;;
//			}
//			else
//				--tmp[Row][Col + 1];
//		}
//		Q.pop();
//	}
//
//
//	for (int row = 1; row < N - 1; ++row)
//		for (int col = 1; col < M - 1; ++col) {
//			if (tmp[row][col] < 0)
//				arr[row][col] = 0;
//		}
//
//
//	for (int row = 1; row < N - 1; ++row)
//		for (int col = 1; col < M - 1; ++col)
//			if (arr[row][col] == 1)
//				return false;
//
//	return true;
//}
//
//void Solve()
//{
//	int ans = 0;
//	while (true)
//	{
//		++ans;
//		for (int row = 0; row < N; ++row)
//			for (int col = 0; col < M; ++col)
//				tmp[row][col] = arr[row][col];
//		if (BFS()) {
//			cout << ans;
//			break;
//		}
//	}
//}
//
//
//int main()
//{
//	cin.tie(NULL);
//	cout.tie(NULL);
//	ios::sync_with_stdio(false);
//
//	cin >> N >> M;
//	for (int i = 0; i < N; ++i)
//		for (int j = 0; j < M; ++j)
//			cin >> arr[i][j];
//
//	Solve();
//}