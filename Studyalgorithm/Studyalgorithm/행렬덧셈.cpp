//#include <iostream>    
//using namespace std;
//
//int main(void)
//{
//	int Col = 0;
//	int Row = 0;
//
//	cin >> Col >> Row;
//
//	int* Matrix1 = new int[Col * Row];
//	int* Matrix2 = new int[Col * Row];
//
//	for (int i = 0; i < Row * Col; ++i)
//	{
//		int Number = 0;
//		cin >> Number;
//		Matrix1[i] = Number;
//	}
//	for (int i = 0; i < Row * Col; ++i)
//	{
//		int Number = 0;
//		cin >> Number;
//		Matrix2[i] = Number;
//	}
//
//	for (int i = 0; i < Col; ++i)
//	{
//		for (int j = 0; j < Row; ++j)
//		{
//			cout << Matrix1[j + i * Row] + Matrix2[j + i * Row] << " ";
//		}
//		cout << endl;
//	}
//
//	delete[] Matrix1;
//	delete[] Matrix2;
//
//	return 0;
//}
