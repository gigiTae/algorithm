//#include <iostream>
//using namespace std;
//int arr[500000]{};
//int n, m;
//
//int Find(int num)
//{
//	if (arr[num] < 0)
//		return num;;
//
//	int index = Find(arr[num]);
//	arr[num] = index;
//	return index;
//}
//
//
//void Union(int x, int y)
//{
//	x = Find(x);
//	y = Find(y);
//
//	if (x == y)
//		return;
//
//	if (arr[x] < arr[y]) {
//		arr[x] += arr[y];
//		arr[y] = x;
//	}
//	else {
//		arr[y] += arr[x];
//		arr[x] = y;
//	}
//}
//
//int main()
//{
//	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
//	cin >> n >> m;
//	// ÃÊ±âÈ­
//	for (int i = 0; i < n; ++i)
//		arr[i] = -1;
//
//	bool IsCheck = false;
//	for (int i = 0; i < m; ++i) {
//		int num1, num2; cin >> num1 >> num2;
//		if (!IsCheck && Find(num1) == Find(num2)) {
//			cout << i + 1;
//			IsCheck = true;
//			return 0;
//		}
//		Union(num1, num2);
//	}
//	if (!IsCheck)
//		cout << 0;
//	return 0;
//}