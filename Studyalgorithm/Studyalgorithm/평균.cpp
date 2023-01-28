//
//#include <iostream>      
//
//using namespace std;
//
//int main()
//{
//	int NumOfSubject = 0;
//	float BesScore = 0.f;
//	float Average = 0.f;
//	cin >> NumOfSubject;
//
//	float* Score = new float[NumOfSubject];
//
//	for (int i = 0; i < NumOfSubject; ++i)
//	{
//		cin >> Score[i];
//
//		if (Score[i] > BesScore)
//		{
//			BesScore = Score[i];
//		}
//	}
//
//	for (int i = 0; i < NumOfSubject; ++i)
//	{
//		Average += Score[i] / BesScore * 100;
//	}
//
//	cout << Average / (float)NumOfSubject;
//
//
//	return 0;
//}