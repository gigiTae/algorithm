//#include <iostream>
//
//
//using namespace std;
//
//struct Info
//{
//	int height;
//	int weight;
//
//	bool operator > (const Info _other)
//	{
//		if (height > _other.height && weight > _other.weight)
//			return true;
//		return false;
//	}
//};
//
//int main()
//{
//	int TestCase = 0;
//	cin >> TestCase;
//
//	Info* HumanInfo = new Info[TestCase];
//	for (int i = 0; i < TestCase; ++i)
//	{
//		int Weight = 0;
//		int	Height = 0;
//		cin >> Weight >> Height;
//		Info info = {};
//		info.weight = Weight;
//		info.height = Height;
//		HumanInfo[i] = info;
//	}
//
//	for (int i = 0; i < TestCase; ++i)
//	{
//		int Rank = 1;
//		Info MyInfo = HumanInfo[i];
//		for (int j = 0; j < TestCase; ++j)
//		{
//			if (i == j)
//				continue;
//
//			Info OtherInfo = HumanInfo[j];
//
//			if (OtherInfo > MyInfo)
//				++Rank;
//		}
//		cout << Rank << " ";
//	}
//	return 0;
//}