//
//#include<iostream>
//#include<queue>
//
//using namespace std;
//
//struct info
//{
//	int emphasis;
//	bool Target;
//};
//
//int main()
//{
//	int TestCase;
//	cin >> TestCase;
//
//	for (int i = 0; i < TestCase; ++i)
//	{
//		int N, M;
//		cin >> N >> M;
//		int arr[10]{};
//		queue<info> q;
//		for (int j = 0; j < N; ++j)
//		{
//			info Info{};
//			cin >> Info.emphasis;
//			++arr[Info.emphasis];
//			if (j == M)
//				Info.Target = true;
//			else
//				Info.Target = false;
//			q.push(Info);
//		}
//
//		int index = 9;
//		int ans = 0;
//		while (true)
//		{
//			while (true)
//			{
//				if (arr[index] == 0)
//					--index;
//				else
//					break;
//			}
//
//			if (index == q.front().emphasis)
//			{
//
//				if (q.front().Target == true)
//				{
//					++ans;
//					break;
//				}
//
//				q.pop();
//				++ans;
//				--arr[index];
//			}
//			else
//			{
//				q.push(q.front());
//				q.pop();
//			}
//		}
//
//		cout << ans << '\n';
//	}
//
//	return 0;
//}