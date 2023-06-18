//#include <iostream>
//
//using namespace std;
//
//typedef long long ll;
//
//ll CCW(ll x1, ll y1, ll x2, ll y2, ll x3, ll y3)
//{
//	return (x2 - x1) * (y3 - y1) - (x3 - x1) * (y2 - y1);
//}
//
//
//int main()
//{
//	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
//
//	ll x[4], y[4];
//	for (int i = 0; i < 4; ++i)
//	{
//		cin >> x[i] >> y[i];
//	}
//
//	ll c[4] = { CCW(x[0], y[0], x[1], y[1], x[2], y[2]),CCW(x[0], y[0], x[1], y[1], x[3], y[3])
//		,CCW(x[2], y[2], x[3], y[3], x[1], y[1]) ,CCW(x[2], y[2], x[3], y[3], x[0], y[0]) };
//
//	if ((c[0] < 0 && c[1] > 0 || c[0] > 0 && c[1] < 0) && (c[2] > 0 && c[3] < 0 || c[2] < 0 && c[3] > 0))
//		cout << 1;
//	else
//		cout << 0;
//
//	return 0;
//}
