//
//#include <iostream>
//#include <set>
//#include <queue>
//using namespace std;
//
//int N, M, V;
//
//set<int>* arr[1001]{};
//bool DFSvisit[1001]{};
//bool BFSvisit[1001]{};
//
//void DFS(int index)
//{
//	cout << index << ' ';
//	DFSvisit[index] = true;
//
//	for (auto iter = arr[index]->begin(); iter != arr[index]->end(); ++iter)
//	{
//		if (DFSvisit[*iter] == false)
//			DFS(*iter);
//	}
//}
//
//void BFS(int index)
//{
//	queue<int> q;
//	q.push(index);
//	BFSvisit[index] = true;
//	cout << index << ' ';
//
//	while (!q.empty())
//	{
//		int f = q.front();
//		for (auto iter = arr[f]->begin(); iter != arr[f]->end(); ++iter)
//		{
//			if (BFSvisit[*iter] == false)
//			{
//				q.push(*iter);
//				BFSvisit[*iter] = true;
//				cout << *iter << ' ';
//			}
//		}
//		q.pop();
//	}
//}
//
//int main(void)
//{
//	cin.tie(NULL);
//	cout.tie(NULL);
//	ios::sync_with_stdio(false);
//
//	cin >> N >> M >> V;
//	for (int i = 1; i <= N; ++i)
//		arr[i] = new set<int>;
//
//	for (int i = 0; i < M; ++i)
//	{
//		int x1, x2;
//		cin >> x1 >> x2;
//		arr[x1]->insert(x2);
//		arr[x2]->insert(x1);
//	}
//
//	DFS(V);
//	cout << '\n';
//	BFS(V);
//}