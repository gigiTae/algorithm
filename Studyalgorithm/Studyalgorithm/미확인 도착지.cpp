//#include <iostream>
//#include <vector>
//#include <map>
//#include <set>
//using namespace std;
//struct Info
//{
//	int cost;
//	bool pass;
//	Info()
//		:cost(0)
//		, pass(false)
//	{}
//	Info(int cost, bool pass)
//		:cost(cost), pass(pass) {}
//
//	bool operator <(const Info& other)const {
//		if (cost < other.cost)
//			return true;
//		else if (cost == other.cost && pass > other.pass)
//			return true;
//		return false;
//	}
//};
//
//int n, m, t; // 교차로, 도로, 목적지 후보
//int s, g, h; // 예술가들 출발지, g와 h 사이에 있는 도로를 지나감
//vector<pair<int, int>> Edge[2001]; // first 간선 second value
//vector<int> TargetList;
//Info CostInfo[2001]{};
//bool Visited[2001]{};
//multimap<Info, int> M;
//
//void dijkstra(int num)
//{
//	M.insert(make_pair(Info(0, false), num));
//
//	while (!M.empty())
//	{
//		auto iter = M.begin();
//		Info ParentInfo = iter->first;
//		int ParentIndex = iter->second;
//		if (Visited[ParentIndex] == true)
//		{
//			M.erase(iter);
//			continue;
//		}
//		Visited[ParentIndex] = true;
//		//방문한 경우
//		for (int i = 0; i < Edge[ParentIndex].size(); ++i)
//		{
//			int ChildIndex = Edge[ParentIndex][i].first;
//			int ChildCost = Edge[ParentIndex][i].second;
//			if (CostInfo[ChildIndex].cost == 0)
//			{
//				CostInfo[ChildIndex].cost = ParentInfo.cost + ChildCost;
//				if (ParentInfo.pass == true || (ParentIndex == g && ChildIndex == h) || (ParentIndex == h && ChildIndex == g))
//					CostInfo[ChildIndex].pass = true;
//				else
//					CostInfo[ChildIndex].pass = false;
//				M.insert(make_pair(CostInfo[ChildIndex], ChildIndex));
//			}
//			else if (CostInfo[ChildIndex].cost > ParentInfo.cost + ChildCost)
//			{
//				CostInfo[ChildIndex].cost = ParentInfo.cost + ChildCost;
//				if (ParentInfo.pass == true || (ParentIndex == g && ChildIndex == h) || (ParentIndex == h && ChildIndex == g))
//					CostInfo[ChildIndex].pass = true;
//				else
//					CostInfo[ChildIndex].pass = false;
//				M.insert(make_pair(CostInfo[ChildIndex], ChildIndex));
//			}
//			else if (CostInfo[ChildIndex].pass == false && CostInfo[ChildIndex].cost == ParentInfo.cost + ChildCost)
//			{
//				if (ParentInfo.pass == true || (ParentIndex == g && ChildIndex == h) || (ParentIndex == h && ChildIndex == g))
//					CostInfo[ChildIndex].pass = true;
//				M.insert(make_pair(CostInfo[ChildIndex], ChildIndex));
//			}
//		}
//		M.erase(iter);
//	}
//}
//
//int main() {
//
//	cin.tie(NULL);
//	cout.tie(NULL);
//	ios::sync_with_stdio(false);
//
//	int TestCase;
//	cin >> TestCase;
//	for (int i = 0; i < TestCase; ++i)
//	{
//		// 초기화
//		for (int j = 0; j <= 2000; ++j)
//		{
//			Edge[j].clear();
//			CostInfo[j].cost = 0;
//			CostInfo[j].pass = false;
//			Visited[j] = false;
//		}
//		TargetList.clear(); {};
//
//		// 대입
//		cin >> n >> m >> t >> s >> g >> h;
//		for (int j = 0; j < m; ++j)
//		{
//			int a, b, d; // a와 b 사이의 길이 d의 양방향 도로
//			cin >> a >> b >> d;
//			Edge[a].push_back(make_pair(b, d));
//			Edge[b].push_back(make_pair(a, d));
//		}
//		for (int j = 0; j < t; ++j)
//		{
//			int target;
//			cin >> target;
//			TargetList.push_back(target);
//		}
//		dijkstra(s);
//		set<int> s;
//		for (int i = 0; i < TargetList.size(); ++i)
//		{
//			int number = TargetList[i];
//			if (CostInfo[number].pass == true && CostInfo[number].cost != 0)
//				s.insert(number);
//		}
//		for (auto iter = s.begin(); iter != s.end(); ++iter)
//			cout << *iter << ' ';
//		cout << '\n';
//	}
//
//}