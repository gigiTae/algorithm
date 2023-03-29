//#include <iostream>
//#include <queue>
//using namespace std;
//
//int N;
//int arr[20][20]{};
//pair<int, int> SharkPos;
//int SharkSize = 2;
//int SharkSizeUpCount = 0;
//int ans = 0;
//
//int BFS()
//{
//	bool visited[20][20]{};
//	queue<pair<int, int>> Q;
//	Q.push(SharkPos);
//	visited[SharkPos.first][SharkPos.second] = true;
//	int Time = 0;
//	while (!Q.empty())
//	{
//		queue<pair<int, int>> tmp;
//		while (!Q.empty())
//		{
//			int row = Q.front().first;
//			int col = Q.front().second;
//			if (arr[row][col] != 0 && arr[row][col] < SharkSize) { // ¸ÔÀÌ¸¦ Ã£À½
//				Q.pop();
//				while (!Q.empty())
//				{
//					int Row = Q.front().first;
//					int Col = Q.front().second;
//					if (arr[Row][Col] != 0 && arr[Row][Col] < SharkSize) {
//						if (Row < row) {
//							row = Row; col = Col;
//						}
//						else if (Row == row && Col < col) {
//							row = Row;
//							col = Col;
//						}
//					}
//					Q.pop();
//				}
//				arr[SharkPos.first][SharkPos.second] = 0;
//				arr[row][col] = 0;
//				++SharkSizeUpCount;
//				if (SharkSize == SharkSizeUpCount) {
//					++SharkSize;
//					SharkSizeUpCount = 0;
//				}
//				SharkPos = { row,col };
//				return Time;
//			}
//
//			// up row-1
//			if (row > 0 && arr[row - 1][col] <= SharkSize && !visited[row - 1][col]) {
//				visited[row - 1][col] = true;
//				tmp.push(make_pair(row - 1, col));
//			}
//			// left col-1
//			if (col > 0 && arr[row][col - 1] <= SharkSize && !visited[row][col - 1]) {
//				visited[row][col - 1] = true;
//				tmp.push(make_pair(row, col - 1));
//			}
//			// right col-1
//			if (col + 1 < N && arr[row][col + 1] <= SharkSize && !visited[row][col + 1]) {
//				visited[row][col + 1] = true;
//				tmp.push(make_pair(row, col + 1));
//			}
//			// down row+1
//			if (row + 1 < N && arr[row + 1][col] <= SharkSize && !visited[row + 1][col]) {
//				visited[row + 1][col] = true;
//				tmp.push(make_pair(row + 1, col));
//			}
//			Q.pop();
//		}
//		Q = tmp;
//		++Time;
//	}
//
//	return -1;
//}
//
//void Solve()
//{
//	// BFS·Î ¸ÔÀÌ Å½»ö
//	while (true)
//	{
//		int num = BFS();
//		if (num == -1)
//			break;
//		ans += num;
//	}
//}
//
//int main()
//{
//	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
//	cin >> N;
//	for (int i = 0; i < N; ++i)
//		for (int j = 0; j < N; ++j) {
//			cin >> arr[i][j];
//			if (arr[i][j] == 9)
//				SharkPos = { i,j };
//		}
//
//	Solve();
//	cout << ans;
//}
//
