//
//#include <iostream>
//#include <vector>
//#include <queue>
//using namespace std;
//
//pair<int, int> Info[26]{};
//
//int N;
//
//// 전위순회
//void PreorderTraversal(int num)
//{
//	char a = 'A' + num;
//	cout << a;
//	if (Info[num].first != '.')
//		PreorderTraversal(Info[num].first - 'A');
//	if (Info[num].second != '.')
//		PreorderTraversal(Info[num].second - 'A');
//}
//
//// 중위순회
//void InorderTraversal(int num)
//{
//	char a = 'A' + num;
//	if (Info[num].first != '.')
//		InorderTraversal(Info[num].first - 'A');
//	cout << a;
//	if (Info[num].second != '.')
//		InorderTraversal(Info[num].second - 'A');
//}
//
//// 후위순회
//void PostorderTraversal(int num)
//{
//	char a = 'A' + num;
//	if (Info[num].first != '.')
//		PostorderTraversal(Info[num].first - 'A');
//	if (Info[num].second != '.')
//		PostorderTraversal(Info[num].second - 'A');
//	cout << a;
//}
//
//int main()
//{
//	cin.tie(NULL);
//	cout.tie(NULL);
//	ios::sync_with_stdio(false);
//	cin >> N;
//	for (int i = 0; i < N; ++i) {
//		char C[3];
//		cin >> C[0] >> C[1] >> C[2];
//		C[0] -= 'A';
//		Info[C[0]].first = C[1];
//		Info[C[0]].second = C[2];
//	}
//
//	// 전위순회
//	PreorderTraversal(0);
//	cout << '\n';
//	// 중위순회
//	InorderTraversal(0);
//	cout << '\n';
//	// 후위순회
//	PostorderTraversal(0);
//}