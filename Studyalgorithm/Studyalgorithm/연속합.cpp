//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//	int Repeat = 0;
//	cin >> Repeat;
//	int Maximum = 0;
//	int PrevSum = 0;
//	int Sum = 0;
//
//	for (int i = 0; i < Repeat; ++i)
//	{
//		int num = 0;
//		cin >> num;
//		if (i == 0)
//		{
//			Maximum = num;
//			PrevSum = num;
//			continue;
//		}
//		if (num < 0)
//		{
//			if (PrevSum > num)
//				PrevSum += num;
//			else
//			{
//				PrevSum = num;
//			}
//		}
//		else
//		{
//			if (PrevSum < 0)
//				PrevSum = 0;
//			PrevSum += num;
//		}
//
//		if (Maximum < PrevSum)
//			Maximum = PrevSum;
//
//	}
//
//	cout << Maximum;
//
//}
//
//
//
