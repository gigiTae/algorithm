//#include <iostream>    
//using namespace std;
//
//int GetResult(int _floor, int RoomNumber)
//{
//
//
//	if (_floor == 0)
//	{
//		return RoomNumber;
//	}
//	else if (RoomNumber == 1)
//	{
//		return 1;
//	}
//
//	return GetResult(_floor - 1, RoomNumber) + GetResult(_floor, RoomNumber - 1);
//}
//
//int main()
//{
//	int TestCase = 0;
//	cin >> TestCase;
//
//	for (int i = 0; i < TestCase; ++i)
//	{
//		int floor = 0;
//		int RoomNumber = 0;
//		int Result = 0;
//		cin >> floor >> RoomNumber;
//
//		Result = GetResult(floor, RoomNumber);
//
//		cout << Result << endl;
//	}
//
//
//	return 0;
//}