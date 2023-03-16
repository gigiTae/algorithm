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
//	bool Breaking;
//
//	Pos(int _row, int _col, bool tf)
//		:irow(_row)
//		, icol(_col)
//		, Breaking(tf)
//	{}
//};
//
//int N, M; // row , col
//bool arr[1000][1000]{};
//bool visited[1000][1000]{};  // 벽을 부수지 않음
//bool visited2[1000][1000]{}; // 벽을 부숨
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
//		if (now.Breaking == false)  // 벽을 부순 경우
//		{
//			// up row-1
//			if (now.irow > 0 && visited[now.irow - 1][now.icol] == false && arr[now.irow - 1][now.icol] == 0)
//			{
//				visited[now.irow - 1][now.icol] = true;
//				tmp.push(Pos(now.irow - 1, now.icol, false));
//			}
//			// down row+1
//			if (now.irow + 1 < N && visited[now.irow + 1][now.icol] == false && arr[now.irow + 1][now.icol] == 0)
//			{
//				visited[now.irow + 1][now.icol] = true;
//				tmp.push(Pos(now.irow + 1, now.icol, false));
//			}
//			// left col-1
//			if (now.icol > 0 && visited[now.irow][now.icol - 1] == false && arr[now.irow][now.icol - 1] == 0)
//			{
//				visited[now.irow][now.icol - 1] = true;
//				tmp.push(Pos(now.irow, now.icol - 1, false));
//			}
//			// right col+1
//			if (now.icol + 1 < M && visited[now.irow][now.icol + 1] == false && arr[now.irow][now.icol + 1] == 0)
//			{
//				visited[now.irow][now.icol + 1] = true;
//				tmp.push(Pos(now.irow, now.icol + 1, false));
//			}
//
//
//			// 벽을 부수는 경우
//			if (now.irow > 0 && visited[now.irow - 1][now.icol] == false && arr[now.irow - 1][now.icol] == 1)
//			{
//				visited2[now.irow - 1][now.icol] = true;
//				tmp.push(Pos(now.irow - 1, now.icol, true));
//			}
//			// down row+1
//			if (now.irow + 1 < N && visited[now.irow + 1][now.icol] == false && arr[now.irow + 1][now.icol] == 1)
//			{
//				visited2[now.irow + 1][now.icol] = true;
//				tmp.push(Pos(now.irow + 1, now.icol, true));
//			}
//			// left col-1
//			if (now.icol > 0 && visited[now.irow][now.icol - 1] == false && arr[now.irow][now.icol - 1] == 1)
//			{
//				visited2[now.irow][now.icol - 1] = true;
//				tmp.push(Pos(now.irow, now.icol - 1, true));
//			}
//			// right col+1
//			if (now.icol + 1 < M && visited[now.irow][now.icol + 1] == false && arr[now.irow][now.icol + 1] == 1)
//			{
//				visited2[now.irow][now.icol + 1] = true;
//				tmp.push(Pos(now.irow, now.icol + 1, true));
//			}
//		}
//		else
//		{			// up row-1
//			if (now.irow > 0 && visited2[now.irow - 1][now.icol] == false && arr[now.irow - 1][now.icol] == 0)
//			{
//				visited2[now.irow - 1][now.icol] = true;
//				tmp.push(Pos(now.irow - 1, now.icol, true));
//			}
//			// down row+1
//			if (now.irow + 1 < N && visited2[now.irow + 1][now.icol] == false && arr[now.irow + 1][now.icol] == 0)
//			{
//				visited2[now.irow + 1][now.icol] = true;
//				tmp.push(Pos(now.irow + 1, now.icol, true));
//			}
//			// left col-1
//			if (now.icol > 0 && visited2[now.irow][now.icol - 1] == false && arr[now.irow][now.icol - 1] == 0)
//			{
//				visited2[now.irow][now.icol - 1] = true;
//				tmp.push(Pos(now.irow, now.icol - 1, true));
//			}
//			// right col+1
//			if (now.icol + 1 < M && visited2[now.irow][now.icol + 1] == false && arr[now.irow][now.icol + 1] == 0)
//			{
//				visited2[now.irow][now.icol + 1] = true;
//				tmp.push(Pos(now.irow, now.icol + 1, true));
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
//	cin >> N >> M;
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
//	visited[0][0] = true;
//	Q.push(Pos(0, 0, false));
//	while (!Q.empty())
//	{
//		BFS();
//	}
//	if (NowClear == true)
//		cout << BFScount;
//	else
//		cout << -1;
//}
