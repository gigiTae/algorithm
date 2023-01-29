//#include <iostream>      
//using namespace std;
//
//int main()
//{
//	string str{};
//	cin >> str;
//	int Time = 0;
//
//	for (int i = 0; i < str.size(); ++i)
//	{
//		if (str[i] < 80)
//		{
//			int Second = ((str[i] - 65) / 3) + 3;
//			Time += Second;
//		}
//		else if (str[i] < 84)
//		{
//			Time += 8;
//		}
//		// T, U, V
//		else if (str[i] == 84 || str[i] == 85 || str[i] == 86)
//		{
//			Time += 9;
//		}
//		else
//		{
//			Time += 10;
//		}
//	}
//	cout << Time;
//
//
//	return 0;
//}