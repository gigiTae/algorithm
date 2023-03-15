//
//#include <iostream>
//#include <queue>
//using namespace std;
//
//int N, M;
//int ans = 0;
//int arr[101]{};
//bool visited[101]{};
//
//queue<int> Q;
//
//void BFS()
//{
//	queue<int> tmp;
//	while (!Q.empty())
//	{
//		int num = Q.front();
//		if (num == 100)  // ����
//		{
//			queue<int> emp;
//			Q = emp;
//			return;
//		}
//		else if (arr[num] == 0)
//		{
//			for (int i = 1; i <= 6; ++i) // �ֻ��� ������
//			{
//				if (num + i <= 100 && visited[num + i] == false)
//				{
//					visited[num + i] = true;
//					tmp.push(num + i);
//				}
//			}
//		}
//		else // �������� �ö󰡱�
//		{
//			for (int i = 1; i <= 6; ++i) // �ֻ��� ������
//			{
//				if (arr[num] + i <= 100 && visited[arr[num] + i] == false)
//				{
//					visited[arr[num] + i] = true;
//					tmp.push(arr[num] + i);
//				}
//			}
//		}
//		Q.pop();
//	}
//	Q = tmp;
//	++ans;
//}
//
//int main(void)
//{
//	cin.tie(NULL);
//	cout.tie(NULL);
//	ios::sync_with_stdio(false);
//	cin >> N >> M;
//	for (int i = 0; i < N; ++i)
//	{
//		int num1, num2;
//		cin >> num1 >> num2;
//		arr[num1] = num2;
//	}
//	for (int j = 0; j < M; ++j)
//	{
//		int num1, num2;
//		cin >> num1 >> num2;
//		arr[num1] = num2;
//	}
//	Q.push(1);
//	visited[1] = true;
//
//	while (!Q.empty())
//	{
//		BFS();
//	}
//
//	cout << ans;
//
//}
