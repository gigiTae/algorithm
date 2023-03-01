//#include<iostream>
//#include<vector>
//using namespace std;
//
//int N;
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
//		cout << '0';
//	else if (IsSame == true && check == true)
//		cout << '1';
//	else
//	{
//		cout << '(';
//		divide(col, row, len / 2);
//		divide(col + len / 2, row, len / 2);
//		divide(col, row + len / 2, len / 2);
//		divide(col + len / 2, row + len / 2, len / 2);
//		cout << ')';
//	}
//}
//
//int main(void)
//{
//	cin.tie(NULL);
//	cout.tie(NULL);
//	ios::sync_with_stdio(false);
//	cin >> N;
//
//	// 0 하얀색 1 검정색
//	for (int i = 0; i < N; ++i)
//	{
//		string str;
//		cin >> str;
//		for (int j = 0; j < str.size(); ++j)
//		{
//			if (str[j] == '0')
//				vec.push_back(0);
//			else
//				vec.push_back(1);
//		}
//	}
//
//	divide(0, 0, N);
//
//
//
//	return 0;
//}