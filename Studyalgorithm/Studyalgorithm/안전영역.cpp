//#include <iostream>
//#include<queue>
//using namespace std;
//int N, MaxHigh = 0, ans = 1;
//
//int arr[100][100]{};
//
//void BFS(int high)
//{
//	bool visited[100][100]{};
//	int count = 0;
//	queue<pair<int, int>> Q;
//	for (int row = 0; row < N; ++row)
//		for (int col = 0; col < N; ++col) {
//			if (visited[row][col] == false && arr[row][col] > high) {
//				++count;
//				visited[row][col] = true;
//				Q.push(make_pair(row, col));
//				while (!Q.empty())
//				{
//					int Row = Q.front().first;
//					int Col = Q.front().second;
//					// up row-1
//					if (Row > 0 && !visited[Row - 1][Col] && arr[Row - 1][Col] > high) {
//						visited[Row - 1][Col] = true;
//						Q.push(make_pair(Row - 1, Col));
//					}
//					// down row+1
//					if (Row + 1 < N && !visited[Row + 1][Col] && arr[Row + 1][Col] > high) {
//						visited[Row + 1][Col] = true;
//						Q.push(make_pair(Row + 1, Col));
//					}
//					// left col-1
//					if (Col > 0 && !visited[Row][Col - 1] && arr[Row][Col - 1] > high) {
//						visited[Row][Col - 1] = true;
//						Q.push(make_pair(Row, Col - 1));
//					}
//					// right col+1
//					if (Col + 1 < N && !visited[Row][Col + 1] && arr[Row][Col + 1] > high) {
//						visited[Row][Col + 1] = true;
//						Q.push(make_pair(Row, Col + 1));
//					}
//					Q.pop();
//				}
//			}
//		}
//	if (count > ans)
//		ans = count;
//}
//
//int main()
//{
//	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
//	cin >> N;
//	for (int i = 0; i < N; ++i)
//		for (int j = 0; j < N; ++j) {
//			cin >> arr[i][j];
//			if (MaxHigh < arr[i][j])
//				MaxHigh = arr[i][j];
//		}
//
//	for (int i = 1; i < MaxHigh; ++i)
//		BFS(i);
//
//	cout << ans;
//}
//
//
