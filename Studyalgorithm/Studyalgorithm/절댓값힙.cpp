//
//#include <iostream>
//#include <set>
//using namespace std;
//
//struct Abs
//{
//	int num;
//	char IsPositive; // 1:양수 0: 음수 
//
//
//
//	bool operator <(const Abs& _other)const
//	{
//		if (num < _other.num)
//			return true;
//		else if (num > _other.num)
//			return false;
//		else if (IsPositive < _other.IsPositive)
//			return true;
//		else
//			return false;
//	}
//};
//
//
//int main()
//{
//	cin.tie(NULL);
//	cout.tie(NULL);
//	ios::sync_with_stdio(false);
//
//	multiset<Abs> S;
//
//	int N;
//	cin >> N;
//	for (int i = 0; i < N; ++i)
//	{
//		int num;
//		cin >> num;
//		if (num != 0)
//		{
//			Abs a;
//			a.num = abs(num);
//			if (num > 0)
//				a.IsPositive = 1;
//			else
//				a.IsPositive = 0;
//
//			S.insert(a);
//		}
//		else
//		{
//			if (S.empty())
//				cout << 0 << '\n';
//			else
//			{
//				auto iter = S.begin();
//				int num = iter->num;
//				if (iter->IsPositive == 0)
//					num *= -1;
//				cout << num << '\n';
//				S.erase(iter);
//			}
//
//		}
//	}
//	return 0;
//}
//
