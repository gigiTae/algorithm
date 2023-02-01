//#include <iostream>
//#include <set>
//
//using namespace std;
//
//int main()
//{
//	cin.tie(NULL);
//	ios::sync_with_stdio(false);
//
//	set<int> ASet;
//
//	int A_Element = 0, B_Element = 0;
//	cin >> A_Element >> B_Element;
//	int A_Result = A_Element, B_Result = B_Element;
//
//	for (int i = 0; i < A_Element; ++i)
//	{
//		int Element = 0;
//		cin >> Element;
//		ASet.insert(Element);
//	}
//
//	for (int i = 0; i < B_Element; ++i)
//	{
//		int Element = 0;
//		cin >> Element;
//
//		if (ASet.find(Element) != ASet.end())
//		{
//			--A_Result;
//			--B_Result;
//		}
//	}
//
//	cout << A_Result + B_Result;
//
//	return 0;
//}