//
//#include <iostream>
//#include <set>
//
//using namespace std;
//
//int N;
//bool arr1[25][25]{};
//bool arr2[25][25]{};
//multiset<int> s;
//int House = 0;
//int Count = 0;
//void DFS(int _row, int _col)
//{
//	arr2[_row][_col] = true;
//	++Count;
//	// 4방향 확인
//	if (_row - 1 > -1 && !arr2[_row - 1][_col] && arr1[_row - 1][_col]) // Up
//	{
//		DFS(_row - 1, _col);
//	}
//	if (_row + 1 < N && !arr2[_row + 1][_col] && arr1[_row + 1][_col]) // Down
//	{
//		DFS(_row + 1, _col);
//	}
//	if (_col - 1 > -1 && !arr2[_row][_col - 1] && arr1[_row][_col - 1]) // Left
//	{
//		DFS(_row, _col - 1);
//	}
//	if (_col + 1 < N && !arr2[_row][_col + 1] && arr1[_row][_col + 1]) // Right
//	{
//		DFS(_row, _col + 1);
//	}
//}
//
//
//
//int main(void)
//{
//	cin.tie(NULL);
//	cout.tie(NULL);
//	ios::sync_with_stdio(false);
//
//	cin >> N;
//
//	for (int row = 0; row < N; ++row)
//	{
//		string str;
//		cin >> str;
//		for (int col = 0; col < N; ++col)
//		{
//			if (str[col] == '1')
//				arr1[row][col] = 1;
//			else
//				arr1[row][col] = 0;
//		}
//	}
//
//	for (int row = 0; row < N; ++row)
//		for (int col = 0; col < N; ++col)
//		{
//			if (arr2[row][col] == false && arr1[row][col] == 1)
//			{
//				DFS(row, col);
//				s.insert(Count);
//				Count = 0;
//				++House;
//			}
//			else
//				arr2[row][col] = true;
//		}
//	cout << House << '\n';
//
//	for (auto iter = s.begin(); iter != s.end(); ++iter)
//		cout << *iter << '\n';
//
//}