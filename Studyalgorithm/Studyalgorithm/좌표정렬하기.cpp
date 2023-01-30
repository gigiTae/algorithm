//#include <iostream>    
//#include <queue>
//
//
//using namespace std;
//
//struct Coordinate
//{
//	int x;
//	int y;
//
//
//	bool operator > (const Coordinate& _other) const
//	{
//		if (x > _other.x)
//			return true;
//		else if (x == _other.x)
//		{
//			if (y > _other.y)
//				return true;
//			else
//				return false;
//		}
//		else
//			return false;
//	}
//
//	bool operator < (const Coordinate& _other) const
//	{
//		if (x < _other.x)
//			return true;
//		else if (x == _other.x)
//		{
//			if (y < _other.y)
//				return true;
//			else
//				return false;
//		}
//		else
//			return false;
//	}
//
//
//};
//
//
//int main(void)
//{
//	int TestCase = 0;
//	cin >> TestCase;
//	priority_queue<Coordinate, vector<Coordinate>, greater<Coordinate>> pq;
//
//	for (int i = 0; i < TestCase; ++i)
//	{
//		int x, y;
//		cin >> x >> y;
//
//		Coordinate co{ x,y };
//		pq.push(co);
//	}
//
//
//	while (!pq.empty()) {
//		cout << pq.top().x << ' ' << pq.top().y << "\n";
//		pq.pop();
//	}
//	return 0;
//}
//
