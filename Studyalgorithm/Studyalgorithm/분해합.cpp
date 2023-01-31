//#include <iostream>
//
//#include <sstream>
//
//using namespace std;
//
//int main()
//{
//	int Number;
//	cin >> Number;
//
//	for (int i = Number - 100; i < Number; ++i)
//	{
//		int Result = i;
//		string strNumber = std::to_string(i);
//		for (int j = 0; j < strNumber.size(); ++j)
//		{
//			Result += strNumber[j] - 48;
//		}
//
//		if (Result == Number)
//		{
//			cout << i;
//			return 0;
//		}
//
//		if (i == Number - 1)
//		{
//			cout << 0;
//		}
//	}
//
//}