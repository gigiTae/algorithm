//#include <iostream>
//#include <math.h>
//#include <vector>
//using namespace std;
//
//struct Vector2
//{
//	float x;
//	float y;
//
//	Vector2 Nomalize()
//	{
//		float squarSum = sqrtf(x * x + y * y);
//		if (squarSum == 1.f)
//		{
//			return *this;
//		}
//		else if (squarSum == 0.f)
//		{
//			return Vector2{ 0.f,0.f };
//		}
//
//		// 고속 역 제곱근 공식을 사용하면 빠른 연산 가능
//
//		float invLength = 1 / sqrtf(squarSum);
//
//		return Vector2{ x * invLength, y * invLength };
//	}
//
//	float Dot(Vector2 _other)
//	{
//		return x * _other.x + y * _other.y;
//	}
//};
//
//int main()
//{
//	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
//
//	Vector2 a[4];
//	Vector2 b[4];
//
//	for (int i = 0; i < 4; ++i)
//	{
//		cin >> a[i].x >> a[i].y;
//	}
//	for (int i = 0; i < 4; ++i)
//	{
//		cin >> b[i].x >> b[i].y;
//	}
//
//	// 사각형 중심좌표 계산
//	Vector2 middleA = { (a[0].x + a[2].x) * 0.5f, (a[0].y + a[2].y) * 0.5f, };
//	Vector2 middleB = { (b[0].x + b[2].x) * 0.5f, (b[0].y + b[2].y) * 0.5f, };
//
//	Vector2 heightA{ (a[0].x - a[1].x) * 0.5f, (a[0].y - a[1].y) * 0.5f };
//	Vector2 widthA{ (a[1].x - a[2].x) * 0.5f, (a[1].y - a[2].y) * 0.5f };
//	Vector2 heightB{ (b[0].x - b[1].x) * 0.5f, (b[0].y - b[1].y) * 0.5f };
//	Vector2 widthB{ (b[1].x - b[2].x) * 0.5f, (b[1].y - b[2].y) * 0.5f };
//
//	Vector2 Distance{ middleB.x - middleA.x, middleB.y - middleA.y };
//
//	vector<Vector2> basis{ heightA,widthA,heightB,widthB };
//
//	for (int i = 0; i < 4; ++i)
//	{
//		Vector2 u = basis[i].Nomalize();
//
//		float sum = 0.f;
//		for (int j = 0; j < 4; ++j)
//		{
//			sum += abs(u.Dot(basis[j]));
//		}
//
//		float distance = abs(u.Dot(Distance));
//
//		if (distance >= sum)
//		{
//			cout << "0";
//			return 0;
//		}
//	}
//
//	cout << "1";
//
//
//	return 0;
//}