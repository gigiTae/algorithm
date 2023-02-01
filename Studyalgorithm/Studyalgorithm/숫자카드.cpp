//#include <iostream>
//#include <set>
//
//using namespace std;
//
//
//int main()
//{
//	cin.tie(NULL);
//	ios::sync_with_stdio(false);
//
//	int MyCard = 0;
//	cin >> MyCard;
//	set<int> Deck;
//
//	for (int i = 0; i < MyCard; ++i)
//	{
//		int Number = 0;
//		cin >> Number;
//		Deck.insert(Number);
//	}
//
//	int CheckCard = 0;
//	cin >> CheckCard;
//	for (int i = 0; i < CheckCard; ++i)
//	{
//		int CheckNumber = 0;
//		cin >> CheckNumber;
//
//		if (Deck.find(CheckNumber) == Deck.end())
//		{
//			cout << 0 << ' ';
//		}
//		else
//			cout << 1 << ' ';
//	}
//
//
//
//	return 0;
//}