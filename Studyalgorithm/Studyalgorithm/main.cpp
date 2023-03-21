
#include <iostream>
#include <vector>
#include <map>

using namespace std;
vector<pair<int, int>> Edge[501];
int N, M; // 도시, 버스
int Cost[501]{};
bool IsLimite = true;
bool Visited[501]{};
multimap<int, int> mm;

void BellmanFord(int index)
{
	mm.insert(make_pair(0, index));

	while (!mm.empty())
	{
		auto iter = mm.begin();
		int ParentVertex = iter->second;
		int ParentCost = iter->first;
		if (Visited[ParentVertex] == true)
		{
			mm.erase(iter);
			continue;
		}
		Visited[ParentVertex] = true;
		for (int i = 0; i < Edge[ParentVertex].size(); ++i)
		{
			int ChildVertex = Edge[ParentVertex][i].first;
			int ChildCost = Edge[ParentVertex][i].second;

			if (Cost[ChildVertex] == 0 && Visited[ChildVertex] == false)
			{
				Cost[ChildVertex] = ParentCost + ChildCost;
				mm.insert(make_pair(Cost[ChildVertex], ChildVertex));
			}
			else if (Cost[ChildVertex] > ParentCost + ChildCost)
			{
				Cost[ChildVertex] = ParentCost + ChildCost;
				mm.insert(make_pair(Cost[ChildVertex], ChildVertex));
			}
		}
		mm.erase(iter);
	}

	for (int i = 0; i <= 500; ++i)
		Visited[i] = false;

	mm.insert(make_pair(0, index));
	while (!mm.empty())
	{
		auto iter = mm.begin();
		int ParentVertex = iter->second;
		int ParentCost = iter->first;
		if (Visited[ParentVertex] == true)
		{
			mm.erase(iter);
			continue;
		}
		Visited[ParentVertex] = true;
		for (int i = 0; i < Edge[ParentVertex].size(); ++i)
		{
			int ChildVertex = Edge[ParentVertex][i].first;
			int ChildCost = Edge[ParentVertex][i].second;

			if (Cost[ChildVertex] == 0)
			{
				Cost[ChildVertex] = ParentCost + ChildCost;
				mm.insert(make_pair(Cost[ChildVertex], ChildVertex));
			}
			else if (Cost[ChildVertex] > ParentCost + ChildCost)
			{
				Cost[ChildVertex] = ParentCost + ChildCost;
				mm.insert(make_pair(Cost[ChildVertex], ChildVertex));
			}
		}
		mm.erase(iter);
	}
}

int main()
{
	cin >> N >> M;
	for (int i = 0; i < M; ++i)
	{
		int A, B, C;
		cin >> A >> B >> C;
		Edge[A].push_back(make_pair(B, C));
		Edge[B].push_back(make_pair(A, C));
	}

	BellmanFord(1);


}
