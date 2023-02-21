//
//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//int arr[1000001] = { 0, 0, 0, 0 };
//
//int main()
//{
//	int num = 0;
//	cin >> num;
//	vector<int> vec;
//	vec.push_back(1);
//	int i = 1;
//	if (num != 1)
//	{
//		while (arr[num] == 0)
//		{
//			vector<int> vec2;
//			for (auto iter = vec.begin(); iter != vec.end(); ++iter)
//			{
//				int X = *iter;
//				if (2 * X < 1000001 && arr[2 * X] == 0)
//				{
//					arr[2 * X] = i;
//					vec2.push_back(2 * X);
//				}
//				if (3 * X < 1000001 && arr[3 * X] == 0)
//				{
//					arr[3 * X] = i;
//					vec2.push_back(3 * X);
//				}
//				if (X + 1 < 1000001 && arr[X + 1] == 0)
//				{
//					arr[X + 1] = i;
//					vec2.push_back(X + 1);
//				}
//			}
//			vec.clear();
//			vec = vec2;
//			++i;
//		}
//	}
//
//	cout << arr[num];
//
//	return 0;
//}
