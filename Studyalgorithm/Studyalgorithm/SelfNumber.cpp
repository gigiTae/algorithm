//
//#include <iostream>      
//
//using namespace std;
//
//int main()
//{
//	bool SelfNumber[10000]{};
//	for (int i = 1; i < 9999; ++i)
//	{
//		int Number = i + i / 1000 + (i % 1000) / 100 + ((i % 1000) % 100) / 10 + ((i % 1000) % 100) % 10;
//
//		if (Number <= 10000)
//			SelfNumber[Number - 1] = true;
//	}
//
//	for (int i = 0; i < 10000; ++i)
//	{
//		if (SelfNumber[i] == false)
//		{
//			cout << i + 1 << endl;
//		}
//	}
//}