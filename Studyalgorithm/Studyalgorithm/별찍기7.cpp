//
//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//	int num = 0;
//	cin >> num;
//	int width = num * 2 - 1;
//	int star = 0;
//	for (int j = 0; j < width; ++j)
//	{
//		for (int i = 1; i <= width; ++i)
//		{
//			if (i < num - star)
//				cout << ' ';
//			else if (i > num + star)
//				break;
//			else
//				cout << '*';
//		}
//		if (j != width - 1)
//			cout << endl;
//		if (j < num - 1)
//			++star;
//		else
//			--star;
//	}
//
//}
