
//#include <iostream>
//#include <queue>
//using namespace std;
//
//bool visited[300][300]{};
//int I;
//int row1, col1, row2, col2;
//int ans = 0;
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
//		Pos nowpos = Q.front();
//		if (nowpos.irow == row2 && nowpos.icol == col2)
//		{
//			queue<Pos> emp;
//			Q = emp;
//			return;
//		}
//
//		// 나이트 이동 방향 
//		// row-1, col-2
//		if (nowpos.irow > 0 && nowpos.icol > 1 && !visited[nowpos.irow - 1][nowpos.icol - 2])
//		{
//			tmp.push(Pos(nowpos.irow - 1, nowpos.icol - 2));
//			visited[nowpos.irow - 1][nowpos.icol - 2] = true;
//		}
//		// row-2, col-1
//		if (nowpos.irow > 1 && nowpos.icol > 0 && !visited[nowpos.irow - 2][nowpos.icol - 1])
//		{
//			tmp.push(Pos(nowpos.irow - 2, nowpos.icol - 1));
//			visited[nowpos.irow - 2][nowpos.icol - 1] = true;
//		}
//		// row-1, col+2
//		if (nowpos.irow > 0 && nowpos.icol + 2 < I && !visited[nowpos.irow - 1][nowpos.icol + 2])
//		{
//			tmp.push(Pos(nowpos.irow - 1, nowpos.icol + 2));
//			visited[nowpos.irow - 1][nowpos.icol + 2] = true;
//		}
//		// row-2, col+1
//		if (nowpos.irow > 1 && nowpos.icol + 1 < I && !visited[nowpos.irow - 2][nowpos.icol + 1])
//		{
//			tmp.push(Pos(nowpos.irow - 2, nowpos.icol + 1));
//			visited[nowpos.irow - 2][nowpos.icol + 1] = true;
//		}
//		// row+1, col-2
//		if (nowpos.irow + 1 < I && nowpos.icol > 1 && !visited[nowpos.irow + 1][nowpos.icol - 2])
//		{
//			tmp.push(Pos(nowpos.irow + 1, nowpos.icol - 2));
//			visited[nowpos.irow + 1][nowpos.icol - 2] = true;
//		}
//		// row+2, col-1
//		if (nowpos.irow + 2 < I && nowpos.icol > 0 && !visited[nowpos.irow + 2][nowpos.icol - 1])
//		{
//			tmp.push(Pos(nowpos.irow + 2, nowpos.icol - 1));
//			visited[nowpos.irow + 2][nowpos.icol - 1] = true;
//		}
//		// row+1, col+2
//		if (nowpos.irow + 1 < I && nowpos.icol + 2 < I && !visited[nowpos.irow + 1][nowpos.icol + 2])
//		{
//			tmp.push(Pos(nowpos.irow + 1, nowpos.icol + 2));
//			visited[nowpos.irow + 1][nowpos.icol + 2] = true;
//		}
//		// row+2, col+1
//		if (nowpos.irow + 2 < I && nowpos.icol + 1 < I && !visited[nowpos.irow + 2][nowpos.icol + 1])
//		{
//			tmp.push(Pos(nowpos.irow + 2, nowpos.icol + 1));
//			visited[nowpos.irow + 2][nowpos.icol + 1] = true;
//		}
//		Q.pop();
//	}
//	Q = tmp;
//	++ans;
//}
//
//int main(void)
//{
//	cin.tie(NULL);
//	cout.tie(NULL);
//	ios::sync_with_stdio(false);
//
//	int TestCase;
//	cin >> TestCase;
//	for (int i = 0; i < TestCase; ++i)
//	{
//		ans = 0;
//		cin >> I;
//		for (int x = 0; x < I; ++x)
//			for (int y = 0; y < I; ++y)
//				visited[x][y] = false;
//		cin >> row1 >> col1 >> row2 >> col2;
//		Q.push(Pos(row1, col1));
//		while (!Q.empty())
//		{
//			BFS();
//		}
//		cout << ans << '\n';
//	}
//
//}
//ㅁ