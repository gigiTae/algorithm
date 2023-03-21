//#include <iostream>
//
//using namespace std;
//
//int w, h;
//bool Visited[50][50]{};
//bool Map[50][50]{};
//
//void DFS(int row, int col)
//{
//	// Àç±ÍÇü½Ä DFS
//	Visited[row][col] = true;
//	// left up  row-1, col-1
//	if (row > 0 && col > 0 && !Visited[row - 1][col - 1] && Map[row - 1][col - 1])
//		DFS(row - 1, col - 1);
//	// middle up row-1
//	if (row > 0 && !Visited[row - 1][col] && Map[row - 1][col])
//		DFS(row - 1, col);
//	// right up row-1 col +1
//	if (row > 0 && col + 1 < w && !Visited[row - 1][col + 1] && Map[row - 1][col + 1])
//		DFS(row - 1, col + 1);
//	// left col-1
//	if (col > 0 && !Visited[row][col - 1] && Map[row][col - 1])
//		DFS(row, col - 1);
//	// right col+1
//	if (col + 1 < w && !Visited[row][col + 1] && Map[row][col + 1])
//		DFS(row, col + 1);
//	// left down row+1 col-1
//	if (row + 1 < h && col > 0 && !Visited[row + 1][col - 1] && Map[row + 1][col - 1])
//		DFS(row + 1, col - 1);
//	// middle down row+1
//	if (row + 1 < h && !Visited[row + 1][col] && Map[row + 1][col])
//		DFS(row + 1, col);
//	// right down row+1 col+1
//	if (row + 1 < h && col + 1 < w && !Visited[row + 1][col + 1] && Map[row + 1][col + 1])
//		DFS(row + 1, col + 1);
//}
//
//int main(void)
//{
//	ios_base::sync_with_stdio(false);
//	cin.tie(nullptr);
//	cout.tie(nullptr);
//
//	while (true)
//	{
//		cin >> w >> h;
//		if (w == 0)
//			break;
//		int ans = 0;
//		for (int row = 0; row < h; ++row)
//			for (int col = 0; col < w; ++col)
//			{
//				cin >> Map[row][col];
//				Visited[row][col] = false;
//			}
//
//		for (int row = 0; row < h; ++row)
//			for (int col = 0; col < w; ++col)
//			{
//				if (Visited[row][col] == false && Map[row][col])
//				{
//					++ans;
//					DFS(row, col);
//				}
//			}
//
//		cout << ans << '\n';
//	}
//
//
//	return 0;
//}