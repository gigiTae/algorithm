//
//#include <iostream>
//#include <vector>
//using namespace std;
//
//
//int M, N, K; // M 가로 N 세로 K 배추
//vector<bool> vec;  // 배추 밭
//vector<bool> check; // 지렁이 확인
//
//void DFS(int x, int y)
//{
//	check[y * M + x] = true;
//
//	// up y-1
//	if (y > 0 && check[(y - 1) * M + x] == false && vec[(y - 1) * M + x] == true)
//		DFS(x, y - 1);
//	// down y+1
//	if (y + 1 < N && check[(y + 1) * M + x] == false && vec[(y + 1) * M + x] == true)
//		DFS(x, y + 1);
//	// left x-1
//	if (x > 0 && check[y * M + x - 1] == false && vec[y * M + x - 1] == true)
//		DFS(x - 1, y);
//	// right x+1
//	if (x + 1 < M && check[y * M + x + 1] == false && vec[y * M + x + 1] == true)
//		DFS(x + 1, y);
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
//
//	for (int i = 0; i < TestCase; ++i)
//	{
//
//		cin >> M >> N >> K;
//		vec.clear();
//		vec.assign(M * N, false);
//		check.clear();
//		check.assign(M * N, false);
//		for (int i = 0; i < K; ++i)
//		{
//			int X, Y;
//			cin >> X >> Y; // X 가로 Y 세로
//			vec[Y * M + X] = true;
//		}
//		int ans = 0;
//		for (int y = 0; y < N; ++y)
//		{
//			for (int x = 0; x < M; ++x)
//			{
//				if (vec[y * M + x] == true && check[y * M + x] == false)
//				{
//					++ans;
//					DFS(x, y);
//				}
//				check[y * M + x] = true;
//
//			}
//		}
//		cout << ans << '\n';
//	}
//
//
//}