//#include <iostream>	
//#include <queue>
//using namespace std;
//int arr[50][50]{};
//int N, M;
//int ans = 0;
//enum
//{
//	WATER,
//	LAND,
//};
//
//void BFS(int row, int col)
//{
//	queue<pair<int, int>> Q;
//	Q.push(make_pair(row, col));
//	bool Visited[50][50]{};
//	Visited[row][col] = true;
//	int Max = -1;
//	while (!Q.empty())
//	{
//		queue<pair<int, int>> tmp;
//		while (!Q.empty()) {
//			int NowRow = Q.front().first;
//			int NowCol = Q.front().second;
//			// up row-1
//			if (NowRow > 0 && Visited[NowRow - 1][NowCol] == false && arr[NowRow - 1][NowCol] == LAND) {
//				Visited[NowRow - 1][NowCol] = true;
//				tmp.push(make_pair(NowRow - 1, NowCol));
//			}
//			// down row+1
//			if (NowRow + 1 < N && Visited[NowRow + 1][NowCol] == false && arr[NowRow + 1][NowCol] == LAND) {
//				Visited[NowRow + 1][NowCol] = true;
//				tmp.push(make_pair(NowRow + 1, NowCol));
//			}
//			// left col-1
//			if (NowCol > 0 && Visited[NowRow][NowCol - 1] == false && arr[NowRow][NowCol - 1] == LAND) {
//				Visited[NowRow][NowCol - 1] = true;
//				tmp.push(make_pair(NowRow, NowCol - 1));
//			}
//			// right col+1
//			if (NowCol + 1 < M && Visited[NowRow][NowCol + 1] == false && arr[NowRow][NowCol + 1] == LAND) {
//				Visited[NowRow][NowCol + 1] = true;
//				tmp.push(make_pair(NowRow, NowCol + 1));
//			}
//			Q.pop();
//		}
//		Q = tmp;
//		++Max;
//	}
//
//	if (Max > ans)
//		ans = Max;
//}
//
//int main()
//{
//	cin >> N >> M; // row , col
//	for (int i = 0; i < N; ++i) {
//		string str;
//		cin >> str;
//		for (int j = 0; j < M; ++j) {
//			if (str[j] == 'W')// ¹Ù´Ù
//				arr[i][j] = WATER;
//			else
//				arr[i][j] = LAND;
//		}
//	}
//
//	for (int i = 0; i < N; ++i) {
//		for (int j = 0; j < M; ++j) {
//			if (arr[i][j] == LAND)
//				BFS(i, j);
//		}
//	}
//
//	cout << ans;
//}