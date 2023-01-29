//#include <iostream>      
//using namespace std;
//
//int main()
//{
//	string str = {};
//	cin >> str;
//	int StringLenghth = (int)str.size();
//
//	for (int i = 0; i < str.size(); ++i)
//	{
//		if (i + 2 < str.size())
//		{
//			if (str[i] == 'd' && str[i + 1] == 'z' && str[i + 2] == '=')
//			{
//				--StringLenghth;
//				--StringLenghth;
//				++i;
//				++i;
//			}
//		}
//		if (i + 1 < str.size())
//		{
//			if (str[i] == 'c' && str[i + 1] == '=')
//			{
//				--StringLenghth;
//				++i;
//			}
//			else if (str[i] == 'c' && str[i + 1] == '-')
//			{
//				--StringLenghth;
//				++i;
//			}
//			else if (str[i] == 'd' && str[i + 1] == '-')
//			{
//				--StringLenghth;
//				++i;
//			}
//			else if (str[i] == 'l' && str[i + 1] == 'j')
//			{
//				--StringLenghth;
//				++i;
//			}
//			else if (str[i] == 'n' && str[i + 1] == 'j')
//			{
//				--StringLenghth;
//				++i;
//			}
//			else if (str[i] == 's' && str[i + 1] == '=')
//			{
//				--StringLenghth;
//				++i;
//			}
//			else if (str[i] == 'z' && str[i + 1] == '=')
//			{
//				--StringLenghth;
//				++i;
//			}
//		}
//	}
//
//	cout << StringLenghth;
//
//	return 0;
//}