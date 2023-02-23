//
//#include<iostream>
//#include<vector>
//
//using namespace std;
//
//int main()
//{
//	cin.tie(NULL);
//	cout.tie(NULL);
//	ios::sync_with_stdio(false);
//
//	int N, M;
//	cin >> N >> M;
//
//	vector<long long> vec;
//	long long* arr = new long long[N];
//	for (int i = 0; i < N; ++i)
//	{
//		arr[i] = 0;
//	}
//
//	for (int col = 0; col < N; ++col)
//	{
//		long long sum = 0;
//		for (int row = 0; row < N; ++row)
//		{
//			int num;
//			cin >> num;
//			sum += num;
//			arr[row] += sum;
//			vec.push_back(arr[row]);
//		}
//	}
//
//	for (int i = 0; i < M; ++i)
//	{
//		int col1, col2, row1, row2;
//		cin >> col1 >> row1 >> col2 >> row2;
//		--row1, --col1, --row2, --col2;
//
//		// 정답 구하기
//		long long ans = 0;
//		ans += vec[col2 * N + row2];
//		if (col1 > 0)
//			ans -= vec[(col1 - 1) * N + row2];
//
//		if (row1 > 0)
//			ans -= vec[col2 * N + row1 - 1];
//
//		if (col1 > 0 && row1 > 0)
//			ans += vec[(col1 - 1) * N + row1 - 1];
//
//		cout << ans << '\n';
//	}
//
//	return 0;
//}
