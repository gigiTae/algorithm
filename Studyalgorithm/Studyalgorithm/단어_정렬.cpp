//#include <iostream>
//#include <vector>
//#include  <queue>
//using namespace std;
//
//int main(void)
//{
//	int TestCase = 0;
//	cin >> TestCase;
//
//	priority_queue<string, vector<string>, greater<string>> pq[50];
//
//	for (int i = 0; i < TestCase; ++i)
//	{
//		string str;
//		cin >> str;
//		pq[str.size() - 1].push(str);
//	}
//
//
//
//	for (int i = 0; i < 50; ++i)
//	{
//		vector<string> Outputsting;
//
//		while (!pq[i].empty())
//		{
//			bool IsSameWord = false;
//			for (int j = 0; j < Outputsting.size(); ++j)
//			{
//				if (Outputsting[j] == pq[i].top())
//					IsSameWord = true;
//			}
//
//			if (IsSameWord == false)
//			{
//				cout << pq[i].top() << '\n';
//				Outputsting.push_back(pq[i].top());
//			}
//			pq[i].pop();
//		}
//	}
//
//	return 0;
//}
//
