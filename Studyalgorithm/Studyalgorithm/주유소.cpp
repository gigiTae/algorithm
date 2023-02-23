//
//#include<iostream>
//#include<vector>
//
//using namespace std;
//
//struct Value
//{
//	long long price;
//	int cityNum;
//};
//
//int main()
//{
//	int city;
//	cin >> city;
//	vector < long long > leninfo;
//	vector<Value> vec;
//
//	for (int i = 1; i < city; ++i)
//	{
//		long long len;
//		cin >> len;
//		leninfo.push_back(len);
//	}
//
//	int BestPrice = 0;
//	for (int i = 0; i < city; ++i)
//	{
//		long long price;
//		cin >> price;
//		Value v;
//		v.cityNum = i;
//		v.price = price;
//		if (vec.empty())
//		{
//			BestPrice = price;
//			vec.push_back(v);
//		}
//		else if (BestPrice > price)
//		{
//			BestPrice = price;
//			vec.push_back(v);
//		}
//	}
//	long long ans = 0;
//	int index = 0;
//	for (int i = 0; i < city - 1; ++i)
//	{
//		if (vec.size() != index + 1 && vec[index + 1].cityNum == i)
//			++index;
//		ans += vec[index].price * leninfo[i];
//	}
//
//	cout << ans;
//	return 0;
//}