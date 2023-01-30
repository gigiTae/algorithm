//#include <iostream>    
//using namespace std;
//
//
//int main(void)
//{
//	int Student = 0;
//	int Award = 0;
//	cin >> Student >> Award;
//
//	int* Score = new int[Student];
//
//	for (int i = 0; i < Student; ++i)
//	{
//		cin >> Score[i];
//	}
//
//	for (int i = 0; i < Student; ++i)
//	{
//		int Worst = Score[i];
//		int Index = i;
//
//		for (int y = i + 1; y < Student; ++y)
//		{
//			if (Worst > Score[y])
//			{
//				Worst = Score[y];
//				Index = y;
//			}
//		}
//
//		if (i != Index)
//		{
//			Score[Index] = Score[i];
//			Score[i] = Worst;
//		}
//	}
//
//	cout << Score[Student - Award];
//
//	return 0;
//}
