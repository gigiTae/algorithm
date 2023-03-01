//#include<iostream>
//#include<vector>
//using namespace std;
//
//int N;
//int white = 0, blue = 0;
//vector<bool> vec;
//
//void divide(int col, int row, int len)
//{
//	bool check = vec[row * N + col];
//	bool IsSame = true;
//	for (int i = row; i < row + len; ++i)
//	{
//		for (int j = col; j < col + len; ++j)
//		{
//			if (check != vec[i * N + j])
//				IsSame = false;
//		}
//	}
//
//	if (IsSame == true && check == false)
//		++white;
//	else if (IsSame == true && check == true)
//		++blue;
//	else
//	{
//		divide(col, row, len / 2);
//		divide(col + len / 2, row, len / 2);
//		divide(col, row + len / 2, len / 2);
//		divide(col + len / 2, row + len / 2, len / 2);
//	}
//
//}
//
//int main(void)
//{
//	cin.tie(NULL);
//	cout.tie(NULL);
//	ios::sync_with_stdio(false);
//	cin >> N;
//
//	// 0 하얀색 1 파란색
//	for (int i = 0; i < N * N; ++i)
//	{
//		bool b;
//		cin >> b;
//		vec.push_back(b);
//	}
//
//	divide(0, 0, N);
//
//	cout << white << '\n' << blue;
//
//
//	return 0;
//}
