//#include<iostream>
//#include<deque>
//
//using namespace std;
//
//
//
//int main(void)
//{
//	int N, M;
//	cin >> N >> M;
//	int ans = 0;
//	deque<int> dq;
//	for (int i = 1; i <= N; ++i)
//	{
//		dq.push_back(i);
//	}
//
//	for (int i = 0; i < M; ++i)
//	{
//		int num = 0;
//		cin >> num;
//		if (num == dq.front())
//		{
//			dq.pop_front();
//			continue;
//		}
//
//		auto iter1 = dq.begin(), iter2 = --dq.end();
//		int leftcount = 1, rightcount = 0;
//		while (*iter1 != num)
//		{
//			++iter1;
//			++rightcount;
//		}
//		while (*iter2 != num)
//		{
//			--iter2;
//			++leftcount;
//		}
//		if (rightcount > leftcount)
//		{
//			// 역방향
//			while (dq.front() != num)
//			{
//				int number = dq.back();
//				dq.pop_back();
//				dq.push_front(number);
//				++ans;
//			}
//		}
//		else
//		{
//			// 정방향
//			while (dq.front() != num)
//			{
//				int number = dq.front();
//				dq.pop_front();
//				dq.push_back(number);
//				++ans;
//			}
//		}
//
//		dq.pop_front();
//	}
//	cout << ans;
//	return 0;
//}
