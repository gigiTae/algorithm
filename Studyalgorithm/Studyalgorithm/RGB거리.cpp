//#include <iostream>
//#include <set>
//
//using namespace std;
//
//int main()
//{
//
//	int r = 0, g = 0, b = 0;
//	int arr[3] = { 0,0,0 };
//	int N;
//	cin >> N;
//
//	for (int i = 0; i < N; ++i)
//	{
//		cin >> r >> g >> b;
//		int PrevArr[3] = { arr[0], arr[1], arr[2] };
//
//		if (PrevArr[1] > PrevArr[2])
//			arr[0] = PrevArr[2] + r;
//		else
//			arr[0] = PrevArr[1] + r;
//
//		if (PrevArr[0] > PrevArr[2])
//			arr[1] = PrevArr[2] + g;
//		else
//			arr[1] = PrevArr[0] + g;
//
//		if (PrevArr[0] > PrevArr[1])
//			arr[2] = PrevArr[1] + b;
//		else
//			arr[2] = PrevArr[0] + b;
//	}
//
//	set<int> S;
//	S.insert(arr[0]);
//	S.insert(arr[1]);
//	S.insert(arr[2]);
//
//	cout << *S.begin();
//
//
//
//	return 0;
//}
