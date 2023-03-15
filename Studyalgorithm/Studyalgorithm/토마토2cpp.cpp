//
//#include <iostream>
//#include <queue>
//using namespace std;
//
//int M, N, H; // 가로 col , 세로 row, 높이 H 
//int Day = -1;
//int info[100][100][100]{}; // -1 빈칸 0 익지 않은 토마토 1 익은 토마토
//
//
//struct Pos
//{
//	int irow;
//	int icol;
//	int ihigh;
//
//	Pos(int _row, int _col, int _high)
//		:irow(_row)
//		, icol(_col)
//		, ihigh(_high)
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
//		if (now.irow > 0 && info[now.irow - 1][now.icol][now.ihigh] == 0)
//		{
//			tmp.push(Pos(now.irow - 1, now.icol, now.ihigh));
//			info[now.irow - 1][now.icol][now.ihigh] = 1;
//		}
//		// down(row+1)
//		if (now.irow + 1 < N && info[now.irow + 1][now.icol][now.ihigh] == 0)
//		{
//			tmp.push(Pos(now.irow + 1, now.icol, now.ihigh));
//			info[now.irow + 1][now.icol][now.ihigh] = 1;
//		}
//		// left(col-1)
//		if (now.icol > 0 && info[now.irow][now.icol - 1][now.ihigh] == 0)
//		{
//			tmp.push(Pos(now.irow, now.icol - 1, now.ihigh));
//			info[now.irow][now.icol - 1][now.ihigh] = 1;
//		}
//		// right(co1+1)
//		if (now.icol + 1 < M && info[now.irow][now.icol + 1][now.ihigh] == 0)
//		{
//			tmp.push(Pos(now.irow, now.icol + 1, now.ihigh));
//			info[now.irow][now.icol + 1][now.ihigh] = 1;
//		}
//		// high+1
//		if (now.ihigh + 1 < H && info[now.irow][now.icol][now.ihigh + 1] == 0)
//		{
//			tmp.push(Pos(now.irow, now.icol, now.ihigh + 1));
//			info[now.irow][now.icol][now.ihigh + 1] = 1;
//		}
//		// high-1
//		if (now.ihigh > 0 && info[now.irow][now.icol][now.ihigh - 1] == 0)
//		{
//			tmp.push(Pos(now.irow, now.icol, now.ihigh - 1));
//			info[now.irow][now.icol][now.ihigh - 1] = 1;
//		}
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
//	cin >> M >> N >> H;
//	for (int h = 0; h < H; ++h)
//		for (int i = 0; i < N; ++i)
//			for (int j = 0; j < M; ++j)
//			{
//				cin >> info[i][j][h]; // i:row  j:col
//				if (info[i][j][h] == 1)
//					Q.push(Pos(i, j, h));
//			}
//	while (!Q.empty())
//	{
//		BFS();
//	}
//
//	bool Clear = true;
//	for (int h = 0; h < H; ++h)
//		for (int i = 0; i < N; ++i)
//			for (int j = 0; j < M; ++j)
//			{
//				if (info[i][j][h] == 0)
//				{
//					Clear = false;
//				}
//			}
//	if (Clear == true)
//		cout << Day;
//	else
//		cout << -1;
//
//
//}
