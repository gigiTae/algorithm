//
//
//#include <iostream>
//#include <vector>
//#include <map>
//using namespace std;
//
//struct edge
//{
//	int direct;
//	int value;
//
//	edge(int _direct, int _value)
//		:direct(_direct)
//		, value(_value)
//	{}
//};
//
//int N, E, v1, v2;
//vector<edge> vec[801];
//long long Value_1[801]{};
//bool Visited1[801]{};
//multimap<long long, int> M;
//
//void BFS(int index)
//{
//	M.insert(make_pair(0, index));
//	while (!M.empty())
//	{
//		auto iter = M.begin();
//		int nowindex = iter->second;
//		long long nowvalue = iter->first;
//
//		if (Visited1[nowindex] == true)
//		{
//			M.erase(iter);
//			continue;
//		}
//		Visited1[nowindex] = true;
//		for (int i = 0; i < vec[nowindex].size(); ++i)
//		{
//			int direct = vec[nowindex][i].direct;
//			long long value = vec[nowindex][i].value;
//			if (Value_1[direct] == 0)
//			{
//				Value_1[direct] = value + nowvalue;
//				if (Visited1[direct] == false)
//					M.insert(make_pair(Value_1[direct], direct));
//			}
//			else if (Value_1[direct] > value + nowvalue)
//			{
//				Value_1[direct] = value + nowvalue;
//				if (Visited1[direct] == false)
//					M.insert(make_pair(Value_1[direct], direct));
//			}
//		}
//		M.erase(iter);
//	}
//}
//
//
//int main(void)
//{
//	cin >> N >> E;
//
//
//
//	for (int i = 0; i < E; ++i)
//	{
//		int a, b, c;
//		cin >> a >> b >> c;
//		vec[a].push_back(edge(b, c));
//		vec[b].push_back(edge(a, c));
//	}
//	cin >> v1 >> v2;
//	 1에서 v1, v2 가는 경로중 짧은 경로 다익스트라
//	BFS(1);
//	 v1,v2 로 가는 최소비용 다익스트라
//	long long V1 = Value_1[v1];
//	long long V2 = Value_1[v2];
//	 최단 경로의 길이 출력  v1->v2 최소	비용
//
//	for (int i = 1; i <= 800; ++i)
//	{
//		Value_1[i] = 0;
//		Visited1[i] = false;
//	}
//	BFS(v1);
//	long long v1toN = Value_1[N];
//	long long v1tov2 = Value_1[v2];
//
//	for (int i = 1; i <= 800; ++i)
//	{
//		Value_1[i] = 0;
//		Visited1[i] = false;
//	}
//	BFS(v2);
//	long long v2toN = Value_1[N];
//	long long v2tov1 = Value_1[v1];
//
//	if ((V1 == 0 && v1 != 1) || V2 == 0 || v2tov1 == 0 ||
//		v1toN == 0 || (v2toN == 0 && v2 != N))
//		cout << -1;
//	else if (v1 == 1 && v2 == N)
//	{
//		cout << v1tov2;
//	}
//	else if (v1 == 1)
//	{
//		cout << v1tov2 + v2toN;
//	}
//	else if (v2 == N)
//	{
//		cout << V1 + v1toN;
//	}
//	else
//	{
//		long long num1 = V1 + v1tov2 + v2toN;
//		long long num2 = V2 + v2tov1 + v1toN;
//		if (num1 > num2)
//			cout << num2;
//		else
//			cout << num1;
//	}
//	return 0;
//}
//
