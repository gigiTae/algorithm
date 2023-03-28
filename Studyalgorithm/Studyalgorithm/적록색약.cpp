//#include <iostream>
//#include <queue>
//using namespace std;
//
//char arr[100][100]{};
//bool visited1[100][100]{};
//bool visited2[100][100]{};
//int N;
//
//void BFS1()
//{
//	int ans = 0;
//	queue<pair<int, int>> Q;
//	for (int row = 0; row < N; ++row)
//		for (int col = 0; col < N; ++col) {
//			if (visited1[row][col] == false) {
//				++ans;
//				visited1[row][col] = true;
//				Q.push(make_pair(row, col));
//				while (!Q.empty()) {
//					char Color = arr[Q.front().first][Q.front().second];
//					int Row = Q.front().first;
//					int Col = Q.front().second;
//					// up row-1
//					if (Row > 0 && arr[Row - 1][Col] == Color && !visited1[Row - 1][Col]) {
//						Q.push(make_pair(Row - 1, Col));
//						visited1[Row - 1][Col] = true;
//					}
//					// down row+1
//					if (Row + 1 < N && arr[Row + 1][Col] == Color && !visited1[Row + 1][Col]) {
//						Q.push(make_pair(Row + 1, Col));
//						visited1[Row + 1][Col] = true;
//					}
//					// left col-1
//					if (Col > 0 && arr[Row][Col - 1] == Color && !visited1[Row][Col - 1]) {
//						Q.push(make_pair(Row, Col - 1));
//						visited1[Row][Col - 1] = true;
//					}
//					// right col+1
//					if (Col + 1 < N && arr[Row][Col + 1] == Color && !visited1[Row][Col + 1]) {
//						Q.push(make_pair(Row, Col + 1));
//						visited1[Row][Col + 1] = true;
//					}
//					Q.pop();
//				}
//			}
//		}
//	cout << ans << ' ';
//}
//void BFS2()
//{
//	int ans = 0;
//	queue<pair<int, int>> Q;
//	for (int row = 0; row < N; ++row)
//		for (int col = 0; col < N; ++col) {
//			if (visited2[row][col] == false) {
//				++ans;
//				visited2[row][col] = true;
//				Q.push(make_pair(row, col));
//				while (!Q.empty()) {
//					char Color = arr[Q.front().first][Q.front().second];
//					int Row = Q.front().first;
//					int Col = Q.front().second;
//					if (Color == 'B') {
//						// up row-1
//						if (Row > 0 && arr[Row - 1][Col] == Color && !visited2[Row - 1][Col]) {
//							Q.push(make_pair(Row - 1, Col));
//							visited2[Row - 1][Col] = true;
//						}
//						// down row+1
//						if (Row + 1 < N && arr[Row + 1][Col] == Color && !visited2[Row + 1][Col]) {
//							Q.push(make_pair(Row + 1, Col));
//							visited2[Row + 1][Col] = true;
//						}
//						// left col-1
//						if (Col > 0 && arr[Row][Col - 1] == Color && !visited2[Row][Col - 1]) {
//							Q.push(make_pair(Row, Col - 1));
//							visited2[Row][Col - 1] = true;
//						}
//						// right col+1
//						if (Col + 1 < N && arr[Row][Col + 1] == Color && !visited2[Row][Col + 1]) {
//							Q.push(make_pair(Row, Col + 1));
//							visited2[Row][Col + 1] = true;
//						}
//					}
//					else {
//						if (Row > 0 && arr[Row - 1][Col] != 'B' && !visited2[Row - 1][Col]) {
//							Q.push(make_pair(Row - 1, Col));
//							visited2[Row - 1][Col] = true;
//						}
//						// down row+1
//						if (Row + 1 < N && arr[Row + 1][Col] != 'B' && !visited2[Row + 1][Col]) {
//							Q.push(make_pair(Row + 1, Col));
//							visited2[Row + 1][Col] = true;
//						}
//						// left col-1
//						if (Col > 0 && arr[Row][Col - 1] != 'B' && !visited2[Row][Col - 1]) {
//							Q.push(make_pair(Row, Col - 1));
//							visited2[Row][Col - 1] = true;
//						}
//						// right col+1
//						if (Col + 1 < N && arr[Row][Col + 1] != 'B' && !visited2[Row][Col + 1]) {
//							Q.push(make_pair(Row, Col + 1));
//							visited2[Row][Col + 1] = true;
//						}
//					}
//					Q.pop();
//				}
//			}
//		}
//	cout << ans;
//}
//
//int main()
//{
//	cin.tie(NULL);
//	cout.tie(NULL);
//	ios::sync_with_stdio(false);
//	cin >> N;
//
//	for (int row = 0; row < N; ++row) {
//		string str; cin >> str;
//		for (int col = 0; col < N; ++col) {
//			arr[row][col] = str[col];
//		}
//	}
//
//	BFS1();
//	BFS2();
//}
