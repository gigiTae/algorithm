//#include <iostream>
//#include <queue>
//using namespace std;
//
//int N, M; // row , col
//bool arr[100][100]{};
//bool tmp[100][100]{};
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
//			if (!arr[Row - 1][Col])
//				Q.push(make_pair(Row - 1, Col));
//			else
//				tmp[Row - 1][Col] = 0;
//
//			visited[Row - 1][Col] = true;
//		}
//		// down row+1
//		if (Row + 1 < N && !visited[Row + 1][Col]) {
//			if (!arr[Row + 1][Col])
//				Q.push(make_pair(Row + 1, Col));
//			else
//				tmp[Row + 1][Col] = 0;
//
//			visited[Row + 1][Col] = true;
//		}
//		// left col-1
//		if (Col > 0 && !visited[Row][Col - 1]) {
//			if (!arr[Row][Col - 1])
//				Q.push(make_pair(Row, Col - 1));
//			else
//				tmp[Row][Col - 1] = 0;
//
//			visited[Row][Col - 1] = true;
//		}
//		// right col+1
//		if (Col + 1 < M && !visited[Row][Col + 1]) {
//			if (!arr[Row][Col + 1])
//				Q.push(make_pair(Row, Col + 1));
//			else
//				tmp[Row][Col + 1] = 0;
//
//			visited[Row][Col + 1] = true;;
//		}
//		Q.pop();
//	}
//
//	for (int row = 1; row < N - 1; ++row)
//		for (int col = 1; col < M - 1; ++col)
//			if (tmp[row][col] == 1)
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
//		if (BFS()) {// 치즈가 모두 녹음 -> 몇덩이리 남은지 확인
//			cout << ans << '\n';
//			int ans2 = 0;
//			for (int row = 1; row < N - 1; ++row)
//				for (int col = 1; col < M - 1; ++col)
//					if (arr[row][col] == 1)
//						++ans2;
//			cout << ans2;
//			break;
//		}
//
//		for (int row = 0; row < N; ++row)
//			for (int col = 0; col < M; ++col)
//				arr[row][col] = tmp[row][col];
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