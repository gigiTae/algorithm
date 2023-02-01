//#include <iostream>
//#include <set>
//
//using namespace std;
//
//int main()
//{
//	int a = 1, b = 1, c = 1;
//	while (true)
//	{
//		cin >> a >> b >> c;
//		if (a == 0 && b == 0 && c == 0)
//			break;
//
//		set<int> number;
//		number.insert(a);
//		number.insert(b);
//		number.insert(c);
//
//		int Num[3] = {};
//		int i = 0;
//		for (auto iter = number.begin(); iter != number.end(); ++iter)
//		{
//			Num[i++] = *iter;
//		}
//
//		if (Num[2] * Num[2] == Num[0] * Num[0] + Num[1] * Num[1])
//			cout << "right" << '\n';
//		else
//			cout << "wrong" << '\n';
//	}
//
//	return 0;
//}