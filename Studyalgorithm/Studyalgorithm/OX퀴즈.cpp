//
//#include <iostream>      
//
//using namespace std;
//
//int main()
//{
//	int TestCase = 0;
//	string str{};
//	cin >> TestCase;
//	int FinalScore = 0;
//	int PrevScore = 0;
//	for (int i = 0; i < TestCase; ++i)
//	{
//		cin >> str;
//		for (int j = 0; j < (int)str.size(); ++j)
//		{
//			if (str[j] == 79)
//			{
//				++PrevScore;
//				FinalScore += PrevScore;
//			}
//			else
//			{
//				PrevScore = 0;
//			}
//		}
//
//		cout << FinalScore << endl;
//		FinalScore = 0;
//		PrevScore = 0;
//	}
//
//}