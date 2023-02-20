//
//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//	// Arr[300][x] : x = 0 :¹«Á¶°Ç 2Ä­  x = 1 : 1Ä­,2Ä­ ÀÚÀ¯·Ó°Ô ¿Ã¶ó°¨
//	int Arr[300][2] = {};
//	int stairs = 1;
//	cin >> stairs;
//
//	for (int i = 0; i < stairs; ++i)
//	{
//		int score = 0;
//		cin >> score;
//		if (i == 0)
//		{
//			Arr[0][1] = score;
//			continue;
//		}
//		if (i == 1)
//		{
//			Arr[1][0] = Arr[0][1] + score;
//			Arr[1][1] = score;
//			continue;
//		}
//		Arr[i][0] = Arr[i - 1][1] + score;
//
//		if (Arr[i - 2][1] > Arr[i - 2][0])
//			Arr[i][1] = Arr[i - 2][1] + score;
//		else
//			Arr[i][1] = Arr[i - 2][0] + score;
//	}
//
//	if (Arr[stairs - 1][0] > Arr[stairs - 1][1])
//		cout << Arr[stairs - 1][0];
//	else
//		cout << Arr[stairs - 1][1];
//
//
//	return 0;
//}
//
