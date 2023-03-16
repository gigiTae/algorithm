//
//#include <iostream>
//#include <vector>
//#include <set>
//#include <queue>
//
//using namespace std;
//
//struct Vec
//{
//	int X1;
//	int X2;
//
//	Vec(int x1, int x2)
//		:X1(x1)
//		, X2(x2)
//	{}
//};
//
//enum COLOR
//{
//	NONE,
//	BLACK,
//	RED,
//};
//queue<Vec> Q;
//vector<set<int>*> vec;
//bool IsTree = true;
//
//int Visited[20001]{}; // 0 방문 x   1 BLACK   2 RED
//void BFS()
//{
//	queue<Vec> tmp;
//	while (!Q.empty())
//	{
//		Vec v = Q.front();
//		bool check = false;
//		if (Visited[v.X1] == 0 && Visited[v.X2] == 0) // 첫방문
//		{
//			Visited[v.X1] = 1; // 블랙
//			Visited[v.X2] = 2; // 레드
//			check = true;
//		}
//		else if (Visited[v.X1] == 0)
//		{
//			if (Visited[v.X2] == 1)
//				Visited[v.X1] = 2;
//			else
//				Visited[v.X1] = 1;
//		}
//		else if (Visited[v.X1] == 1) // 블랙
//		{
//			if (Visited[v.X2] == 1) //이분 x
//			{
//				queue<Vec> Clear;
//				Q = Clear;
//				IsTree = false;
//				return;
//			}
//			else if (Visited[v.X2] == 0)
//			{
//				Visited[v.X2] = 2;
//				check = true;
//			}
//		}
//		else // 레드
//		{
//			if (Visited[v.X2] == 2) //이분 x
//			{
//				queue<Vec> Clear;
//				Q = Clear;
//				IsTree = false;
//				return;
//			}
//			else if (Visited[v.X2] == 0)
//			{
//				Visited[v.X2] = 1;
//				check = true;
//			}
//		}
//		if (check == true)
//		{
//			for (auto iter = vec[v.X2]->begin(); iter != vec[v.X2]->end(); ++iter)
//			{
//				Q.push(Vec(v.X2, *iter));
//			}
//		}
//
//		Q.pop();
//	}
//	Q = tmp;
//}
//
//int main(void)
//{
//	cin.tie(NULL);
//	cout.tie(NULL);
//	ios::sync_with_stdio(false);
//
//	int TestCase;
//	cin >> TestCase;
//	for (int i = 0; i < TestCase; ++i)
//	{
//		if (i != 0)
//		{
//			for (int i = 0; i <= 20000; ++i)
//				Visited[i] = 0;
//		}
//		IsTree = true;
//		int V, E; // V 정점 E 간선
//		cin >> V >> E;
//		vec.clear();
//		for (int j = 0; j <= V; ++j)
//		{
//			set<int>* s = new set<int>;
//			vec.push_back(s);
//
//		}
//		for (int j = 0; j < E; ++j)
//		{
//			int num1, num2;
//			cin >> num1 >> num2;
//			vec[num1]->insert(num2);
//			vec[num2]->insert(num1);
//		}
//
//		for (int j = 0; j < vec.size(); ++j)
//		{
//			if (IsTree == false)
//				break;
//			if (vec[j] != 0)
//			{
//				set<int>* sPtr = vec[j];
//				for (auto iter = sPtr->begin(); iter != sPtr->end(); ++iter)
//				{
//					Q.push(Vec(j, *iter));
//				}
//
//				while (!Q.empty())
//				{
//					BFS();
//				}
//
//			}
//		}
//		if (IsTree == true)
//			cout << "YES\n";
//		else
//			cout << "NO\n";
//	}
//
//}
