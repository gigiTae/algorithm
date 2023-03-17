//
//#include <iostream>
//#include <vector>
//#include <queue>
//using namespace std;
//
//struct Pos
//{
//	int irow;
//	int icol;
//	int Breaking;
//
//	Pos(int _row, int _col, int _high)
//		:irow(_row)
//		, icol(_col)
//		, Breaking(_high)
//	{}
//};
//
//int N, M;
//int K; // row , col , 부수는 벽
//bool arr[1000][1000]{};
//bool visited[11][1000][1000]{};  // 벽을 부수지 않음
//bool NowClear = false;
//int BFScount = 1;
//queue<Pos> Q;
//
//void BFS()
//{
//	queue<Pos> tmp;
//	while (!Q.empty())
//	{
//		Pos now = Q.front();
//		if (now.irow == N - 1 && now.icol == M - 1) // 찾음
//		{
//			NowClear = true;
//			queue<Pos> clear;
//			Q = clear;
//			return;
//		}
//		// up row-1
//		if (now.irow > 0 && visited[now.Breaking][now.irow - 1][now.icol] == false && arr[now.irow - 1][now.icol] == 0)
//		{
//			visited[now.Breaking][now.irow - 1][now.icol] = true;
//			tmp.push(Pos(now.irow - 1, now.icol, now.Breaking));
//		}
//		// down row+1
//		if (now.irow + 1 < N && visited[now.Breaking][now.irow + 1][now.icol] == false && arr[now.irow + 1][now.icol] == 0)
//		{
//			visited[now.Breaking][now.irow + 1][now.icol] = true;
//			tmp.push(Pos(now.irow + 1, now.icol, now.Breaking));
//		}
//		// left col-1
//		if (now.icol > 0 && visited[now.Breaking][now.irow][now.icol - 1] == false && arr[now.irow][now.icol - 1] == 0)
//		{
//			visited[now.Breaking][now.irow][now.icol - 1] = true;
//			tmp.push(Pos(now.irow, now.icol - 1, now.Breaking));
//		}
//		// right col+1
//		if (now.icol + 1 < M && visited[now.Breaking][now.irow][now.icol + 1] == false && arr[now.irow][now.icol + 1] == 0)
//		{
//			visited[now.Breaking][now.irow][now.icol + 1] = true;
//			tmp.push(Pos(now.irow, now.icol + 1, now.Breaking));
//		}
//
//		if (now.Breaking < K) // 최대로 부술 수 있는 벽
//		{
//			// 벽을 부수는 경우
//			if (now.irow > 0 && visited[now.Breaking][now.irow - 1][now.icol] == false && arr[now.irow - 1][now.icol] == 1)
//			{
//				visited[now.Breaking][now.irow - 1][now.icol] = true;
//				visited[now.Breaking + 1][now.irow - 1][now.icol] = true;
//				tmp.push(Pos(now.irow - 1, now.icol, now.Breaking + 1));
//			}
//			// down row+1
//			if (now.irow + 1 < N && visited[now.Breaking][now.irow + 1][now.icol] == false && arr[now.irow + 1][now.icol] == 1)
//			{
//				visited[now.Breaking][now.irow + 1][now.icol] = true;
//				visited[now.Breaking + 1][now.irow + 1][now.icol] = true;
//				tmp.push(Pos(now.irow + 1, now.icol, now.Breaking + 1));
//			}
//			// left col-1
//			if (now.icol > 0 && visited[now.Breaking][now.irow][now.icol - 1] == false && arr[now.irow][now.icol - 1] == 1)
//			{
//				visited[now.Breaking][now.irow][now.icol - 1] = true;
//				visited[now.Breaking + 1][now.irow][now.icol - 1] = true;
//				tmp.push(Pos(now.irow, now.icol - 1, now.Breaking + 1));
//			}
//			// right col+1
//			if (now.icol + 1 < M && visited[now.Breaking][now.irow][now.icol + 1] == false && arr[now.irow][now.icol + 1] == 1)
//			{
//				visited[now.Breaking][now.irow][now.icol + 1] = true;
//				visited[now.Breaking + 1][now.irow][now.icol + 1] = true;
//				tmp.push(Pos(now.irow, now.icol + 1, now.Breaking + 1));
//			}
//		}
//		Q.pop();
//	}
//	Q = tmp;
//	++BFScount;
//}
//
//int main(void)
//{
//	cin.tie(NULL);
//	cout.tie(NULL);
//	ios::sync_with_stdio(false);
//
//	cin >> N >> M >> K;
//
//	for (int row = 0; row < N; ++row)
//	{
//		string str;
//		cin >> str;
//		for (int col = 0; col < M; ++col)
//		{
//			if (str[col] == '0')
//				arr[row][col] = 0;
//			else
//				arr[row][col] = 1;
//		}
//	}
//
//	visited[0][0][0] = true;
//	Q.push(Pos(0, 0, 0));
//	while (!Q.empty())
//	{
//		BFS();
//	}
//	if (NowClear == true)
//		cout << BFScount;
//	else
//		cout << -1;
//}
