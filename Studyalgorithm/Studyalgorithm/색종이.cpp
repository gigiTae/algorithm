//#include <iostream>    
//using namespace std;
//
//int main(void)
//{
//	bool WhitePaper[100][100] = {};
//
//	int BlackPaper = 0;
//	cin >> BlackPaper;
//
//	for (int i = 0; i < BlackPaper; ++i)
//	{
//		int x = 0, y = 0;
//		cin >> x >> y;
//		for (int i = y; i < y + 10; ++i)
//		{
//			for (int j = x; j < x + 10; ++j)
//			{
//				WhitePaper[i][j] = true;
//			}
//		}
//	}
//
//	int BlackArea = 0;
//	for (int y = 0; y < 100; ++y)
//	{
//		for (int x = 0; x < 100; ++x)
//		{
//			if (WhitePaper[x][y] == true)
//				++BlackArea;
//		}
//	}
//
//	cout << BlackArea;
//
//	return 0;
//}
