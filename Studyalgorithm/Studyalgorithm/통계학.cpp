//#include <iostream>
//#include <vector>
//#include <queue>
//#include <map>
//#include <cmath>
//
//using namespace std;
//
//int main(void)
//{
//	cout << fixed;
//	cout.precision(0);
//
//	int NumberofNumber = 0;
//	cin >> NumberofNumber;
//	double Total = 0;
//
//	map<int, int > NumberMap;
//
//	// ���� �Է�
//	priority_queue<int, vector<int>, greater<int>> pq;
//	for (int i = 0; i < NumberofNumber; ++i)
//	{
//		int GetNumber = 0;
//		cin >> GetNumber;
//		Total += GetNumber;
//
//		if (NumberMap.find(GetNumber) == NumberMap.end())
//		{
//			NumberMap.insert(pair<int, int>(GetNumber, 1));
//		}
//		else
//		{
//			NumberMap.at(GetNumber) += 1;
//		}
//
//		pq.push(GetNumber);
//	}
//
//	// ��� ���
//	int Average = round(Total / NumberofNumber);
//	if (Average == -0)
//		Average = 0;
//	cout << Average << "\n";
//
//	// �߾Ӱ�
//	int Max = 0;
//	int Minimum = 0;
//	int Middle = 0;
//	for (int i = 0; i < NumberofNumber; ++i)
//	{
//		int top = pq.top();
//		if (i == 0)
//			Minimum = top;
//
//		if (i == NumberofNumber - 1)
//			Max = top;
//
//		if (i == ((NumberofNumber + 1) / 2) - 1)
//			Middle = top;
//
//		pq.pop();
//	}
//	cout << Middle << "\n";
//
//	// �ֺ�
//	int MostNumber = 0;
//	int CheckNumber = 0;
//	bool IsOverlap = false;
//
//	for (auto iter = NumberMap.begin(); iter != NumberMap.end(); ++iter)
//	{
//		if (iter->second > CheckNumber)
//		{
//			MostNumber = iter->first;
//			CheckNumber = iter->second;
//			IsOverlap = false;
//		}
//		else if (iter->second == CheckNumber && IsOverlap == false)
//		{
//			MostNumber = iter->first;
//			CheckNumber = iter->second;
//			IsOverlap = true;
//		}
//	}
//
//
//	cout << MostNumber << '\n';
//
//	// (���� �ִ񰪰� �ּڰ� ����)
//	cout << Max - Minimum << "\n";
//
//	return 0;
//}
//
