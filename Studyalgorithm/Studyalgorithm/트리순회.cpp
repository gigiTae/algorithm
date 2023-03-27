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
//// ������ȸ
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
//// ������ȸ
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
//// ������ȸ
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
//	// ������ȸ
//	PreorderTraversal(0);
//	cout << '\n';
//	// ������ȸ
//	InorderTraversal(0);
//	cout << '\n';
//	// ������ȸ
//	PostorderTraversal(0);
//}