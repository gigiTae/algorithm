//#include <iostream>
//using namespace std;
//
//int arr[1001] = { 0, 1, 2,1,1 };
//
//int DP(int num)
//{
//	if (arr[num] != 0)
//		return arr[num];
//
//	if (DP(num - 1) == 1 && DP(num - 3) == 1 && DP(num - 4) == 1) {
//		arr[num] = 2;
//		return arr[num];
//	}
//	else {
//		arr[num] = 1;
//		return arr[num];
//	}
//}
//
//int main()
//{
//	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
//
//
//	int N; cin >> N;
//
//	if (DP(N) == 1)
//		cout << "SK";
//	else
//		cout << "CY";
//}