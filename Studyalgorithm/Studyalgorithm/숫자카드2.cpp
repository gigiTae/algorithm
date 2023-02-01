//#include <iostream>
//#include <map>
//#include <sstream>
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
//
//	map<int, int> Deck;
//	for (int i = 0; i < MyCard; ++i)
//	{
//		int Number = 0;
//		cin >> Number;
//		if (Deck.find(Number) == Deck.end())
//		{
//			Deck.insert(pair<int, int>(Number, 1));
//		}
//		else
//		{
//			++Deck.find(Number)->second;
//		}
//	}
//
//	int FindCard = 0;
//	cin >> FindCard;
//	for (int i = 0; i < FindCard; ++i)
//	{
//		int Number = 0;
//		cin >> Number;
//		if (Deck.find(Number) == Deck.end())
//		{
//			cout << 0 << ' ';
//		}
//		else
//		{
//			cout << Deck.find(Number)->second << ' ';
//		}
//	}
//
//
//	return 0;
//}