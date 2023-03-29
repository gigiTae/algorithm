//#include <iostream>
//#include <queue>
//using namespace std;
//
//int N, M; // row , col
//char arr[8][8]{};
//int ans = 0;
//
//void BFS()
//{
//	queue<pair<int, int>> Q;
//	bool visited[8][8]{};
//	for (int row = 0; row < N; ++row)
//		for (int col = 0; col < M; ++col) {
//			if (!visited[row][col] && arr[row][col] == '2') {
//				Q.push(make_pair(row, col));
//				visited[row][col] = true;
//				while (!Q.empty()) {
//					int Row = Q.front().first;
//					int Col = Q.front().second;
//					// up row-1
//					if (Row > 0 && !visited[Row - 1][Col] && arr[Row - 1][Col] == '0') {
//						visited[Row - 1][Col] = true;
//						Q.push(make_pair(Row - 1, Col));
//					}
//					// down row+1
//					if (Row + 1 < N && !visited[Row + 1][Col] && arr[Row + 1][Col] == '0') {
//						visited[Row + 1][Col] = true;
//						Q.push(make_pair(Row + 1, Col));
//					}
//					// left col-1
//					if (Col > 0 && !visited[Row][Col - 1] && arr[Row][Col - 1] == '0') {
//						visited[Row][Col - 1] = true;
//						Q.push(make_pair(Row, Col - 1));
//					}
//					// right col+1
//					if (Col + 1 < M && !visited[Row][Col + 1] && arr[Row][Col + 1] == '0') {
//						visited[Row][Col + 1] = true;
//						Q.push(make_pair(Row, Col + 1));
//					}
//					Q.pop();
//				}
//			}
//		}
//	int safe = 0;
//	for (int row = 0; row < N; ++row)
//		for (int col = 0; col < M; ++col) {
//			if (!visited[row][col] && arr[row][col] == '0')
//				++safe;
//		}
//	if (ans < safe)
//		ans = safe;
//}
//
//void DFS(int num, int index)
//{
//	if (num == 3) {
//		BFS();
//		return;
//	}
//	for (int row = 0; row < N; ++row)
//		for (int col = 0; col < M; ++col) {
//			if (index <= row * M + col && arr[row][col] == '0') {
//				arr[row][col] = '1';
//				DFS(num + 1, row * M + col);
//				arr[row][col] = '0';
//			}
//		}
//}
//
//
//int main()
//{
//	cin.tie(NULL);
//	cout.tie(NULL);
//	ios::sync_with_stdio(false);
//	cin >> N >> M;
//	for (int row = 0; row < N; ++row)
//		for (int col = 0; col < M; ++col)
//			cin >> arr[row][col];
//
//	DFS(0, 0);
//
//	cout << ans;
//
//}
