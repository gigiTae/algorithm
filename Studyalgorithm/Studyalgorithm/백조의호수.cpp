//#include <iostream>
//#include <queue>
//using namespace std;
//
//int R, C; // row, col
//char arr[1500][1500]{};
//queue<pair<int, int>> ice;
//pair<int, int> LPos; // 백조 위치
//bool visited[1500][1500]{};
//bool visited2[1500][1500]{};
//queue<pair<int, int>> memory;
//
//bool BFS()
//{
//	queue<pair<int, int>> Q = memory;
//	queue<pair<int, int>> Empty;
//	memory = Empty;
//	visited[LPos.first][LPos.second] = true;
//	Q.push(make_pair(LPos.first, LPos.second));
//
//	while (!Q.empty()) {
//		int row = Q.front().first;
//		int col = Q.front().second;
//		// up row-1
//		if (row > 0 && arr[row - 1][col] != 'X' && !visited[row - 1][col]) {
//			if (arr[row - 1][col] == 'L')
//				return true;
//			Q.push(make_pair(row - 1, col));
//			visited[row - 1][col] = true;
//		}
//		if (row > 0 && arr[row - 1][col] == 'X' && !visited[row - 1][col]) {
//			memory.push(make_pair(row - 1, col));
//			visited[row - 1][col] = true;
//		}
//		// down row+1
//		if (row + 1 < R && arr[row + 1][col] != 'X' && !visited[row + 1][col]) {
//			if (arr[row + 1][col] == 'L')
//				return true;
//			Q.push(make_pair(row + 1, col));
//			visited[row + 1][col] = true;
//		}
//		if (row + 1 < R && arr[row + 1][col] == 'X' && !visited[row + 1][col]) {
//			memory.push(make_pair(row + 1, col));
//			visited[row + 1][col] = true;
//		}
//		// left col-1
//		if (col > 0 && arr[row][col - 1] != 'X' && !visited[row][col - 1]) {
//			if (arr[row][col - 1] == 'L')
//				return true;
//			Q.push(make_pair(row, col - 1));
//			visited[row][col - 1] = true;
//		}
//		if (col > 0 && arr[row][col - 1] == 'X' && !visited[row][col - 1]) {
//			memory.push(make_pair(row, col - 1));
//			visited[row][col - 1] = true;
//		}
//		// right col+1
//		if (col + 1 < C && arr[row][col + 1] != 'X' && !visited[row][col + 1]) {
//			if (arr[row][col + 1] == 'L')
//				return true;
//			Q.push(make_pair(row, col + 1));
//			visited[row][col + 1] = true;
//		}
//		if (col + 1 < C && arr[row][col + 1] == 'X' && !visited[row][col + 1]) {
//			memory.push(make_pair(row, col + 1));
//			visited[row][col + 1] = true;
//		}
//		Q.pop();
//	}
//	return false;
//}
//void NextDay()
//{
//	queue <pair<int, int>> next;
//	while (!ice.empty())
//	{
//		int row = ice.front().first;
//		int col = ice.front().second;
//		arr[row][col] = '.';
//		// up row-1
//		if (row > 0 && arr[row - 1][col] == 'X' && !visited2[row - 1][col]) {
//			visited2[row - 1][col] = true;
//			next.push(make_pair(row - 1, col));
//		}
//		// down row+1
//		if (row + 1 < R && arr[row + 1][col] == 'X' && !visited2[row + 1][col]) {
//			visited2[row + 1][col] = true;
//			next.push(make_pair(row + 1, col));
//		}
//		// left col-1
//		if (col > 0 && arr[row][col - 1] == 'X' && !visited2[row][col - 1]) {
//			visited2[row][col - 1] = true;
//			next.push(make_pair(row, col - 1));
//		}
//		// right col+1
//		if (col + 1 < C && arr[row][col + 1] == 'X' && !visited2[row][col + 1]) {
//			visited2[row][col + 1] = true;
//			next.push(make_pair(row, col + 1));
//		}
//		ice.pop();
//	}
//	ice = next;
//}
//
//void Solve()
//{
//	int ans = 0;
//	while (!BFS()) {
//		++ans;
//		// 하루가 지나서 빙하가 녹음
//		NextDay();
//	}
//
//	cout << ans;
//}
//
//int main()
//{
//	cin.tie(NULL);
//	cout.tie(NULL);
//	ios::sync_with_stdio(false);
//	cin >> R >> C;
//	for (int row = 0; row < R; ++row) {
//		string str; cin >> str;
//		for (int col = 0; col < C; ++col) {
//			arr[row][col] = str[col];
//			if (str[col] == 'L') { // 백조위치 기록
//				LPos.first = row;
//				LPos.second = col;
//			}
//
//			if (str[col] == '.' || str[col] == 'L') {
//				// left col-1
//				if (col > 0 && arr[row][col - 1] == 'X' && !visited2[row][col - 1]) {
//					visited2[row][col - 1] = true;
//					ice.push(make_pair(row, col - 1));
//				}
//				// up row-1
//				if (row > 0 && arr[row - 1][col] == 'X' && !visited2[row - 1][col]) {
//					visited2[row - 1][col] = true;
//					ice.push(make_pair(row - 1, col));
//				}
//			}
//			else if ((row > 0 && arr[row - 1][col] != 'X') ||
//				(col > 0 && arr[row][col - 1] != 'X')) {
//				visited2[row][col] = true;
//				ice.push(make_pair(row, col));
//			}
//		}
//	}
//
//	Solve();
//}