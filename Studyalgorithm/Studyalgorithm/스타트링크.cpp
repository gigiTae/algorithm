//#include <iostream>	
//#include <queue>
//using namespace std;
//
//int F, S, G, U, D;
//bool Visited[1000001]{};
//void BFS()
//{
//	queue<int> Q;
//	Q.push(S);
//	Visited[S] = true;
//	int ans = -1;
//	while (!Q.empty()) {
//		queue<int> tmp;
//		++ans;
//		while (!Q.empty()) {
//			int index = Q.front();
//			if (index == G) {
//				cout << ans;
//				return;
//			}
//			if (index + U <= F && Visited[index + U] == false) {
//				Visited[index + U] = true;
//				tmp.push(index + U);
//			}
//			if (index - D > 0 && Visited[index - D] == false) {
//				Visited[index - D] = true;
//				tmp.push(index - D);
//			}
//			Q.pop();
//		}
//		Q = tmp;
//	}
//
//	cout << "use the stairs";
//}
//
//int main()
//{
//	cin.tie(NULL);
//	cout.tie(NULL);
//	ios::sync_with_stdio(false);
//
//	cin >> F >> S >> G >> U >> D;
//	// F�� �ǹ� ���� S�� ��ŸƮ��ũ G��
//	// ���� U��ŭ�̵�, �Ʒ��� D��ŭ �̵�
//
//	BFS();
//
//}