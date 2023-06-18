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
//	ll x[3], y[3];
//	for (int i = 0; i < 3; ++i)
//	{
//		cin >> x[i] >> y[i];
//	}
//
//
//	ll c = CCW(x[0], y[0], x[1], y[1], x[2], y[2]);
//	if (c == 0)
//	{
//		cout << 0;
//	}
//	else if (c > 0)
//	{
//		cout << 1;
//	}
//	else
//		cout << -1;
//
//
//
//
//	return 0;
//}
