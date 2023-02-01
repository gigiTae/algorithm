//#include <iostream>
//#include <set>
//
//using namespace std;
//
//struct Vec2
//{
//	int x;
//	int y;
//
//	Vec2()
//		:x(0)
//		, y(0)
//	{}
//
//	bool operator > (const Vec2 _other) const
//	{
//		if (x > _other.x)
//			return true;
//		else if (x == _other.x && y > _other.y)
//			return true;
//
//		return false;
//	}
//};
//
//int main()
//{
//	cin.tie(NULL);
//	cout.tie(NULL);
//	ios::sync_with_stdio(false);
//
//	Vec2 vec1;
//	Vec2 vec2;
//	Vec2 vec3;
//	cin >> vec1.x >> vec1.y >> vec2.x >> vec2.y >> vec3.x >> vec3.y;
//
//	int OutputX = 0;
//	int OutputY = 0;
//
//	if (vec1.x == vec2.x)
//		OutputX = vec3.x;
//	else if (vec1.x == vec3.x)
//		OutputX = vec2.x;
//	else
//		OutputX = vec1.x;
//
//	if (vec1.y == vec2.y)
//		OutputY = vec3.y;
//	else if (vec1.y == vec3.y)
//		OutputY = vec2.y;
//	else
//		OutputY = vec1.y;
//
//	cout << OutputX << ' ' << OutputY;
//
//	return 0;
//}