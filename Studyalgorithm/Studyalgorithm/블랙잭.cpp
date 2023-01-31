//#include <iostream>
//using namespace std;
//
//
//int main()
//{
//	int Card = 0;
//	int Max = 0;
//	cin >> Card >> Max;
//
//	int* CardNumber = new int[Card];
//
//	for (int i = 0; i < Card; ++i)
//	{
//		cin >> CardNumber[i];
//	}
//
//	int SelectCard[3] = {};
//	int ApproachMax = Max;
//
//	for (int i = 0; i < Card; ++i)
//	{
//		SelectCard[0] = CardNumber[i];
//		for (int j = i + 1; j < Card; ++j)
//		{
//			SelectCard[1] = CardNumber[j];
//			for (int k = j + 1; k < Card; ++k)
//			{
//				SelectCard[2] = CardNumber[k];
//				int result = SelectCard[0] + SelectCard[1] + SelectCard[2];
//
//				if (Max == result)
//				{
//					cout << Max;
//					return 0;
//				}
//				else if (Max < result)
//				{
//					continue;
//				}
//				else if (ApproachMax > Max - result)
//					ApproachMax = Max - result;
//
//			}
//		}
//	}
//
//	cout << Max - ApproachMax;
//}