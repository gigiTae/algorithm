//#include <iostream>
//#include <vector>
//#define NON 1000000
//using namespace std;
//
//int main()
//{
//	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
//	int N, S; cin >> N >> S;
//	vector<int> vec;
//	for (int i = 0; i < N; ++i) {
//		int num; cin >> num;
//		vec.push_back(num);
//	}
//
//	int minimum_len = NON;
//	int front = 0;
//	int rear = 0;
//	int len = 0;
//	int sum = 0;
//
//	while (true)
//	{
//		if (sum <= S) {
//			sum += vec[rear];
//			++rear;
//			++len;
//		}
//		else {
//			sum -= vec[front];
//			++front;
//			--len;
//		}
//
//		if (sum >= S && minimum_len > len)
//			minimum_len = len;
//
//		if (rear == vec.size() && sum <= S)
//			break;
//	}
//
//	// 정답 출력
//	if (minimum_len == NON)
//		cout << 0;
//	else
//		cout << minimum_len;
//}
//
