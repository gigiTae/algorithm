//#include<iostream>
//#include<vector>
//
//using namespace std;
//vector<int> vec;
//int N;
//int ans1 = 0, ans2 = 0, ans3 = 0;
//
//void divide(int col, int row, int len)
//{
//	int check = vec[row * N + col];
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
//	if (IsSame == true && check == -1)
//		++ans1;
//	else if (IsSame == true && check == 0)
//		++ans2;
//	else if (IsSame == true && check == 1)
//		++ans3;
//	else
//	{
//		divide(col, row, len / 3);
//		divide(col + len / 3, row, len / 3);
//		divide(col + len * 2 / 3, row, len / 3);
//
//		divide(col, row + len / 3, len / 3);
//		divide(col + len / 3, row + len / 3, len / 3);
//		divide(col + len * 2 / 3, row + len / 3, len / 3);
//
//		divide(col, row + len * 2 / 3, len / 3);
//		divide(col + len / 3, row + len * 2 / 3, len / 3);
//		divide(col + len * 2 / 3, row + len * 2 / 3, len / 3);
//	}
//}
//
//int main(void)
//{
//	cin.tie(NULL);
//	cout.tie(NULL);
//	ios::sync_with_stdio(false);
//	cin >> N;
//	for (int i = 0; i < N * N; ++i)
//	{
//		int num;
//		cin >> num;
//		vec.push_back(num);
//	}
//
//	divide(0, 0, N);
//
//	cout << ans1 << '\n' << ans2 << '\n' << ans3;
//
//	return 0;
//}