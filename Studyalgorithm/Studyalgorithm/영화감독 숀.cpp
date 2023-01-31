//#include <iostream>
//#include <string>
//
//using namespace std;
//
//int main()
//{
//	int Series = 0;
//	cin >> Series;
//
//	int SeriesNumber = 665;
//	int Idx = 0;
//	int Result = 0;
//	while (Idx != Series)
//	{
//		++SeriesNumber;
//		string str = std::to_string(SeriesNumber);
//		for (int i = 0; i < str.size() - 2; ++i)
//		{
//			if (str[i] == '6' && str[i + 1] == '6' && str[i + 2] == '6')
//			{
//				++Idx;
//				Result = SeriesNumber;
//				break;
//			}
//		}
//	}
//	cout << Result;
//	return 0;
//}