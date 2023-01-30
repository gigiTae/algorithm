//#include <iostream>    
//using namespace std;
//
//int main(void)
//{
//	int Col = 9;
//	int Row = 9;
//	int* Matrix1 = new int[Col * Row];
//
//	int MaxNumber = 0;
//	int MaxIdx = 0;
//
//	for (int i = 0; i < Row * Col; ++i)
//	{
//		int Number = 0;
//		cin >> Number;
//		if (Number > MaxNumber)
//		{
//			MaxNumber = Number;
//			MaxIdx = i;
//		}
//		Matrix1[i] = Number;
//	}
//
//	int MaxCol = 1 + MaxIdx / Row;
//	int MaxRow = 1 + MaxIdx % Row;
//
//	cout << MaxNumber << endl << MaxCol << " " << MaxRow;
//	delete[] Matrix1;
//
//
//	return 0;
//}
