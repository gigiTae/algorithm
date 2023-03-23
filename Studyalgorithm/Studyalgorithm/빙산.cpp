//#include <iostream>
//#include <vector>
//#include <queue>
//using namespace std;
//
//
//int N, M; // row, col
//int arr[300][300]{};
//int tmp[300][300]{};
//int Row = 0, Col = 0;
//
//void update()
//{
//
//	for (int row = 1; row < N - 1; ++row)
//		for (int col = 1; col < M - 1; ++col)
//		{
//			if (arr[row][col] != 0)
//			{
//				int next = arr[row][col];
//				// up row-1
//				if (next > 0 && arr[row - 1][col] == 0)
//					--next;
//				// down row+1
//				if (next > 0 && arr[row + 1][col] == 0)
//					--next;
//				// left col-1
//				if (next > 0 && arr[row][col - 1] == 0)
//					--next;
//				// right col+1
//				if (next > 0 && arr[row][col + 1] == 0)
//					--next;
//				tmp[row][col] = next;
//			}
//			else
//				tmp[row][col] = 0;
//		}
//
//	for (int row = 1; row < N - 1; ++row)
//		for (int col = 1; col < M - 1; ++col) {
//			arr[row][col] = tmp[row][col];
//			if (arr[row][col] != 0) {
//				Row = row; Col = col;
//			}
//		}
//}
//
//bool BFS(int row, int col)
//{
//	queue<pair<int, int>> Q;
//	Q.push(make_pair(row, col));
//	bool Visitied[300][300]{};
//	Visitied[row][col] = true;
//	while (!Q.empty()) {
//		int NowRow = Q.front().first;
//		int NowCol = Q.front().second;
//		// up row-1
//		if (Visitied[NowRow - 1][NowCol] == false && arr[NowRow - 1][NowCol] != 0) {
//			Q.push(make_pair(NowRow - 1, NowCol));
//			Visitied[NowRow - 1][NowCol] = true;
//		}
//		// down row+1
//		if (Visitied[NowRow + 1][NowCol] == false && arr[NowRow + 1][NowCol] != 0) {
//			Q.push(make_pair(NowRow + 1, NowCol));
//			Visitied[NowRow + 1][NowCol] = true;
//		}
//		// left col-1
//		if (Visitied[NowRow][NowCol - 1] == false && arr[NowRow][NowCol - 1] != 0) {
//			Q.push(make_pair(NowRow, NowCol - 1));
//			Visitied[NowRow][NowCol - 1] = true;
//		}
//		// right col+1
//		if (Visitied[NowRow][NowCol + 1] == false && arr[NowRow][NowCol + 1] != 0) {
//			Q.push(make_pair(NowRow, NowCol + 1));
//			Visitied[NowRow][NowCol + 1] = true;
//		}
//		Q.pop();
//	}
//
//	for (int i = 1; i < N - 1; ++i)
//		for (int j = 1; j < M - 1; ++j) {
//			if (Visitied[i][j] == false && arr[i][j] != 0)
//				return false;
//		}
//	return true;
//}
//
//void Solve() {
//	int ans = 0;
//	while (true)
//	{
//		++ans;
//		Row = 0; Col = 0;
//		update();
//		if (Row == 0 && Col == 0) {
//			cout << '0';
//			return;
//		}
//		else {
//			if (!BFS(Row, Col)) {
//				cout << ans;
//				return;
//			}
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
//	cin >> N >> M;
//	for (int i = 0; i < N; ++i)
//		for (int j = 0; j < M; ++j)
//			cin >> arr[i][j];
//	Solve();
//
//}