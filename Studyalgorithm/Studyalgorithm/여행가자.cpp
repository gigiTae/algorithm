//#include <iostream>
//using namespace std;
//
//int N, M; // 도시의 수, 계획에 속한 도시들의 수
//int arr[201]{};
//
//
//int Find(int x)
//{
//	if (arr[x] < 0)
//		return x;
//
//	int y = Find(arr[x]);
//	arr[x] = y;
//	return y;
//}
//
//void Union(int x, int y)
//{
//	x = Find(x);
//	y = Find(y);
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
//	cin >> N >> M;
//
//	for (int i = 0; i < 201; ++i)
//		arr[i] = -1;
//
//	for (int i = 1; i <= N; ++i)
//		for (int j = 1; j <= N; ++j) {
//			int num = 0; cin >> num;
//			if (i == j)
//				continue;
//			if (num == 1)
//				Union(i, j);
//		}
//	int Visited = 0; cin >> Visited;
//
//	for (int i = 1; i < M; ++i)
//	{
//		int num = 0; cin >> num;
//		if (Find(Visited) != Find(num)) {
//			cout << "NO";
//			return 0;
//		}
//	}
//	cout << "YES";
//
//	return 0;
//}