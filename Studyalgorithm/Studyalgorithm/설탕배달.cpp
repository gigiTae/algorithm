//#include <iostream>      
//using namespace std;
//
//int main()
//{
//
//	int GetKg = 0;
//	cin >> GetKg;
//	int five = GetKg / 5;
//	int three = 0;
//	for (; five >= 0; --five)
//	{
//		int LeftKg = GetKg - 5 * five;
//
//		if (LeftKg % 3 == 0)
//		{
//			three = LeftKg / 3;
//			break;
//		}
//	}
//
//	if (five == 0 && three == 0)
//	{
//		cout << -1;
//	}
//	else
//	{
//		cout << five + three;
//	}
//
//
//	return 0;
//}