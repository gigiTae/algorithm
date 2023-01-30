//#include <iostream>    
//using namespace std;
//void Swap(int* Arr, int num1, int num2)
//{
//	int Num = Arr[num1];
//	Arr[num1] = Arr[num2];
//	Arr[num2] = Num;
//	return;
//}
//
//int main(void)
//{
//	int TestCase = 0;
//	cin >> TestCase;
//
//	int* PrevArr = new int[TestCase];
//	for (int i = 0; i < TestCase; ++i)
//	{
//		cin >> PrevArr[i];
//	}
//	for (int i = 0; i < TestCase; ++i)
//	{
//		int Number = PrevArr[i];
//		int Index = i;
//		for (int j = i + 1; j < TestCase; ++j)
//		{
//			if (Number > PrevArr[j])
//			{
//				Number = PrevArr[j];
//				Index = j;
//			}
//		}
//		if (Index != i)
//		{
//			Swap(PrevArr, i, Index);
//		}
//	}
//	for (int i = 0; i < TestCase; ++i)
//	{
//		cout << PrevArr[i] << endl;
//	}
//
//	delete[] PrevArr;
//
//	return 0;
//}
