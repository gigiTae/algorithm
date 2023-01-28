//
//#include <iostream>      
//
//using namespace std;
//
//int main()
//{
//	int TestCase = 0;
//	int StudentNumber = 0;
//
//	float OverAverageStudent = 0.f;
//	float AverageScore = 0.f;
//
//	cout << fixed;
//	cout.precision(3);
//
//	cin >> TestCase;
//
//	for (int i = 0; i < TestCase; ++i)
//	{
//		cin >> StudentNumber;
//		int* Score = new int[StudentNumber];
//		for (int j = 0; j < StudentNumber; ++j)
//		{
//			cin >> Score[j];
//			AverageScore += (float)Score[j];
//		}
//		AverageScore = AverageScore / (float)StudentNumber;
//
//		for (int j = 0; j < StudentNumber; ++j)
//		{
//			if (Score[j] > AverageScore)
//			{
//				++OverAverageStudent;
//			}
//		}
//
//		cout << OverAverageStudent / StudentNumber * 100 << "%" << endl;
//
//		OverAverageStudent = 0;
//		AverageScore = 0;
//		delete[] Score;
//	}
//
//}