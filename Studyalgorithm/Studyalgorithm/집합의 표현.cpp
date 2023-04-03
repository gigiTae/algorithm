//#include <iostream>
//
//using namespace std;
//
//int N, M;
//int arr[1000001]{};
//
//int Find(int num)
//{
//	if (arr[num] < 0)
//		return num;
//	else {
//		int index = Find(arr[num]);
//		arr[num] = index;
//		return index;
//	}
//}
//
//void Union(int x, int y)
//{
//	x = Find(x);
//	y = Find(y);
//	if (x == y)
//		return;
//	else if (arr[x] < arr[y]) {
//		arr[x] += arr[y];
//		arr[y] = x;
//	}
//	else {
//		arr[y] += arr[x];
//		arr[x] = y;
//	}
//}
//
//
//int main()
//{
//	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
//	cin >> N >> M;
//	for (int i = 0; i <= N; ++i)
//		arr[i] = -1;
//
//	for (int i = 0; i < M; ++i) {
//		int num1, num2, num3;
//		cin >> num1 >> num2 >> num3;
//		if (num1 == 0) {
//			Union(num2, num3);
//		}
//		else if (Find(num2) == Find(num3))
//			cout << "YES" << '\n';
//		else
//			cout << "NO" << '\n';
//	}
//}