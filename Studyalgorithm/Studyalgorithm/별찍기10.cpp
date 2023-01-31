//#include <iostream>
//using namespace std;
//
//
//void star(int col, int row, int num)
//{
//	if ((col / num) % 3 == 1 && (row / num) % 3 == 1)
//	{
//		cout << ' ';
//	}
//	else
//	{
//		if (num / 3 == 0)
//			cout << "*";
//		else
//			star(col, row, num / 3);
//	}
//}
//int main()
//{
//	int Number = 0;
//	cin >> Number;
//
//	for (int Col = 0; Col < Number; ++Col)
//	{
//		for (int Row = 0; Row < Number; ++Row)
//		{
//			star(Col, Row, Number);
//		}
//		cout << '\n';
//	}
//}