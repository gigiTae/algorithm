//#include <iostream>    
//#include <queue>
//
//
//using namespace std;
//
//struct Coordinate
//{
//	int x;
//	int y;
//
//};
//
//void Swap(Coordinate* left, Coordinate* Right)
//{
//	int leftX = left->x;
//	int leftY = left->y;
//
//	left->x = Right->x;
//	left->y = Right->y;
//
//	Right->x = leftX;
//	Right->y = leftY;
//
//	return;
//}
//
//int main(void)
//{
//	int TestCase = 0;
//	cin >> TestCase;
//
//	Coordinate* Cd = new Coordinate[TestCase];
//
//	for (int i = 0; i < TestCase; ++i)
//	{
//		cin >> Cd[i].x;
//		cin >> Cd[i].y;
//	}
//
//	for (int i = 0; i < TestCase; ++i)
//	{
//		int X = Cd[i].x;
//		int Y = Cd[i].y;
//		int Index = i;
//
//		for (int j = i + 1; j < TestCase; ++j)
//		{
//			if (X > Cd[j].x)
//			{
//				X = Cd[j].x;
//				Y = Cd[j].y;
//				Index = j;
//			}
//			else if (X == Cd[j].x && Y > Cd[j].y)
//			{
//				X = Cd[j].x;
//				Y = Cd[j].y;
//				Index = j;
//			}
//		}
//
//		if (Index != i)
//		{
//			Swap(&Cd[Index], &Cd[i]);
//		}
//	}
//
//
//	for (int i = 0; i < TestCase; ++i)
//	{
//		cout << Cd[i].x << " " << Cd[i].y << "\n";
//	}
//
//	return 0;
//}
//
