//#include <iostream>
//#include <set>
//using namespace std;
//
///*
//1. 간선 정렬
//2. DFS 함수
//3. 방문한 순번
//4. 방문여부
//*/
//
//set<int>* arr[100001]{};
//bool IsVisted[100001]{};
//int Count[100001]{};
//int Call = 1;
//
//int N, M, R;
//
//void DFS(int index)
//{
//	IsVisted[index] = true;
//	Count[index] = Call;
//	++Call;
//	if (arr[index]->empty())
//		return;
//	auto iter = arr[index]->begin();
//	while (iter != arr[index]->end())
//	{
//		if (IsVisted[*iter] == false)
//		{
//			DFS(*iter);
//		}
//		else
//			++iter;
//	}
//
//}
//
//int main(void)
//{
//	cin.tie(NULL);
//	cout.tie(NULL);
//	ios::sync_with_stdio(false);
//
//	cin >> N >> M >> R; // 정점, 간선, 시작 정정
//
//	for (int i = 1; i <= N; ++i)
//	{
//		arr[i] = new set<int>;
//	}
//
//	for (int i = 0; i < M; ++i)
//	{
//		int pos1, pos2;
//		cin >> pos1 >> pos2;
//		arr[pos1]->insert(pos2);
//		arr[pos2]->insert(pos1);
//	}
//
//	DFS(R);
//
//	for (int i = 1; i <= N; ++i)
//	{
//		cout << Count[i] << '\n';
//	}
//
//	return 0;
//}
//
//
//ㅁ