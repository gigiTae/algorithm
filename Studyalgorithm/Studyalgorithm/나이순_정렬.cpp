//#include <iostream>
//#include <vector>
//#include  <queue>
//using namespace std;
//
//struct MemberInfo
//{
//	int mEnterNumber;
//	int mAge;
//	string mName;
//
//	bool operator > (const MemberInfo& _otherinfo) const
//	{
//		if (mAge > _otherinfo.mAge)
//			return true;
//		else if (mAge == _otherinfo.mAge)
//		{
//			if (mEnterNumber > _otherinfo.mEnterNumber)
//			{
//				return true;
//			}
//			else
//				return false;
//		}
//		else
//			return false;
//	}
//};
//
//int main(void)
//{
//	int MemberNumber = 0;
//	cin >> MemberNumber;
//
//	priority_queue<MemberInfo, vector<MemberInfo>, greater<MemberInfo>> pq;
//
//	for (int i = 0; i < MemberNumber; ++i)
//	{
//		int Age = 0;
//		string Name{};
//		cin >> Age >> Name;
//
//		MemberInfo mInfo = {};
//		mInfo.mAge = Age;
//		mInfo.mName = Name;
//		mInfo.mEnterNumber = i;
//
//		pq.push(mInfo);
//	}
//
//	while (!pq.empty())
//	{
//		cout << pq.top().mAge << " " << pq.top().mName << '\n';
//		pq.pop();
//	}
//
//
//	return 0;
//}
//
