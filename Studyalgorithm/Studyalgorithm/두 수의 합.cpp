//#include <iostream>
//#include <algorithm>
//#include <vector>
//using namespace std;
//
//int main()
//{
//	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
//	vector<int> vec;
//	int N, target;
//	cin >> N;
//	for (int i = 0; i < N; ++i) {
//		int num; cin >> num;
//		vec.push_back(num);
//	}
//	cin >> target;
//	sort(vec.begin(), vec.end());
//	int count = 0;
//	int front = 0;
//	int rear = N - 1;
//	while (front != rear)
//	{
//		if (target == vec[front] + vec[rear])
//			++count;
//
//		if (vec[front] + vec[rear] > target)
//			--rear;
//		else
//			++front;
//	}
//
//	cout << count;
//}
//
