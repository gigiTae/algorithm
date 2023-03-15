//
//#include <iostream>
//#include <queue>
//using namespace std;
//
//int M, N; // 가로 col , 세로 row
//int Day = -1;
//int info[1000][1000]{}; // -1 빈칸 0 익지 않은 토마토 1 익은 토마토
//
//
//struct Pos
//{
//	int irow;
//	int icol;
//
//	Pos(int _row, int _col)
//		:irow(_row)
//		, icol(_col)
//	{}
//};
//
//queue<Pos> Q;
//
//void BFS()
//{
//	queue<Pos> tmp;
//	while (!Q.empty())
//	{
//		Pos now = Q.front();
//
//		// up(row-1)
//		if (now.irow > 0 && info[now.irow - 1][now.icol] == 0)
//		{
//			tmp.push(Pos(now.irow - 1, now.icol));
//			info[now.irow - 1][now.icol] = 1;
//		}
//		// down(row+1)
//		if (now.irow + 1 < N && info[now.irow + 1][now.icol] == 0)
//		{
//			tmp.push(Pos(now.irow + 1, now.icol));
//			info[now.irow + 1][now.icol] = 1;
//		}
//		// left(col-1)
//		if (now.icol > 0 && info[now.irow][now.icol - 1] == 0)
//		{
//			tmp.push(Pos(now.irow, now.icol - 1));
//			info[now.irow][now.icol - 1] = 1;
//		}
//		// right(co1+1)
//		if (now.icol + 1 < M && info[now.irow][now.icol + 1] == 0)
//		{
//			tmp.push(Pos(now.irow, now.icol + 1));
//			info[now.irow][now.icol + 1] = 1;
//		}
//
//		Q.pop();
//	}
//	Q = tmp;
//	++Day;
//}
//
//int main(void)
//{
//	cin.tie(NULL);
//	cout.tie(NULL);
//	ios::sync_with_stdio(false);
//
//	cin >> M >> N;
//	for (int i = 0; i < N; ++i)
//		for (int j = 0; j < M; ++j)
//		{
//			cin >> info[i][j]; // i:row  j:col
//			if (info[i][j] == 1)
//				Q.push(Pos(i, j));
//		}
//
//	while (!Q.empty())
//	{
//		BFS();
//	}
//
//	bool Clear = true;
//	for (int i = 0; i < N; ++i)
//		for (int j = 0; j < M; ++j)
//		{
//			if (info[i][j] == 0)
//			{
//				Clear = false;
//			}
//		}
//	if (Clear == true)
//		cout << Day;
//	else
//		cout << -1;
//
//
//}
