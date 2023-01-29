//#include <iostream>      
//using namespace std;
//
//int main()
//{
//	int TestCase = 0;
//	cin >> TestCase;
//
//	for (int i = 0; i < TestCase; ++i)
//	{
//		int Height = 0;
//		int Width = 0;
//		int Number = 0;
//		cin >> Height >> Width >> Number;
//
//		int YY = Number % Height;
//		int XX = 1 + Number / Height;
//
//		if (YY == 0)
//		{
//			YY = Height;
//			--XX;
//		}
//		if (XX < 10)
//		{
//			cout << YY << 0 << XX << endl;
//		}
//		else
//		{
//			cout << YY << XX << endl;
//		}
//	}
//
//	return 0;
//}