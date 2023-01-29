//#include <iostream>      
//#include <vector>
//
//using namespace std;
//
//
//int main()
//{
//	string BigNumber1 = {}, BigNumber2{};
//	cin >> BigNumber1 >> BigNumber2;
//
//	int Idx1 = (int)BigNumber1.size() - 1;
//	int Idx2 = (int)BigNumber2.size() - 1;
//	bool AddOne = false;
//
//	vector<int> Vec;
//
//
//	while (true)
//	{
//		int Sum = 0;
//		if (AddOne == true)
//			++Sum;
//
//		if (Idx1 != -1)
//		{
//			Sum += BigNumber1[Idx1] - 48;
//			--Idx1;
//		}
//		if (Idx2 != -1)
//		{
//			Sum += BigNumber2[Idx2] - 48;
//			--Idx2;
//		}
//
//		if (Sum == 0 && Idx1 == -1 && Idx2)
//			break;
//
//		if (Sum > 9)
//			AddOne = true;
//		else
//			AddOne = false;
//
//		Vec.push_back(Sum % 10);
//	}
//
//	for (int i = (int)Vec.size() - 1; i > -1; --i)
//	{
//		cout << Vec[i];
//	}
//
//	return 0;
//}