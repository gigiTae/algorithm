//#include <iostream>
//
//
//using namespace std;
//
//enum class COLOR
//{
//	WHITE,
//	BLACK,
//};
//
//struct Board
//{
//	COLOR color;
//};
//
//int main()
//{
//	int Col = 0;
//	int Row = 0;
//	cin >> Col >> Row;
//
//	Board* board = new Board[Col * Row];
//	for (int i = 0; i < Col * Row; ++i)
//	{
//		char c = {};
//		cin >> c;
//		if (c == 'W')
//			board[i].color = COLOR::WHITE;
//		else
//			board[i].color = COLOR::BLACK;
//	}
//
//	int Result = 64;
//	for (int col = 0; col <= Col - 8; ++col)
//	{
//		for (int row = 0; row <= Row - 8; ++row)
//		{
//			int coloring = 0;
//			// �������� ���
//			COLOR color = COLOR::WHITE;
//			for (int iCol = col; iCol < col + 8; ++iCol)
//			{
//				for (int iRow = row; iRow < row + 8; ++iRow)
//				{
//					// ������ ���
//					if (board[iRow + iCol * Row].color != color)
//						++coloring;
//
//					if (color == COLOR::WHITE)
//						color = COLOR::BLACK;
//					else
//						color = COLOR::WHITE;
//				}
//				if (color == COLOR::WHITE)
//					color = COLOR::BLACK;
//				else
//					color = COLOR::WHITE;
//			}
//			if (Result > coloring)
//				Result = coloring;
//
//			// �������� ������
//			coloring = 0;
//			color = COLOR::BLACK;
//			for (int iCol = col; iCol < col + 8; ++iCol)
//			{
//				for (int iRow = row; iRow < row + 8; ++iRow)
//				{
//					// ������ ���
//					if (board[iRow + iCol * Row].color != color)
//						++coloring;
//
//					if (color == COLOR::WHITE)
//						color = COLOR::BLACK;
//					else
//						color = COLOR::WHITE;
//				}
//				if (color == COLOR::WHITE)
//					color = COLOR::BLACK;
//				else
//					color = COLOR::WHITE;
//			}
//			if (Result > coloring)
//				Result = coloring;
//		}
//	}
//
//	cout << Result;
//
//	return 0;
//}