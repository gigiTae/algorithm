//#include <iostream>
//
//using namespace std;
//
//typedef long long ll;
//
//typedef pair<ll, ll> pll;
//ll CCW(ll x1, ll y1, ll x2, ll y2, ll x3, ll y3)
//{
//	ll tmp = (x2 - x1) * (y3 - y1) - (x3 - x1) * (y2 - y1);
//
//	if (tmp > 0)
//		return 1;
//	else if (tmp == 0)
//		return 0;
//	else
//		return -1;
//}
//
//int main()
//{
//	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
//
//	pair<ll, ll> v[4];
//	for (int i = 0; i < 4; ++i)
//	{
//		cin >> v[i].first >> v[i].second;
//	}
//
//	// long long 곱으로 오버플로우 발생하므로 양수 음수 판단
//	ll c[4] = { CCW(v[0].first, v[0].second, v[1].first, v[1].second, v[2].first, v[2].second)
//		,CCW(v[0].first, v[0].second, v[1].first, v[1].second, v[3].first, v[3].second)
//		,CCW(v[2].first, v[2].second, v[3].first, v[3].second, v[1].first, v[1].second)
//		, CCW(v[2].first, v[2].second, v[3].first, v[3].second, v[0].first, v[0].second) };
//
//	if (c[0] * c[1] == 0 && c[2] * c[3] == 0)
//	{
//		if (v[0] > v[1]) swap(v[0], v[1]);
//		if (v[2] > v[3]) swap(v[2], v[3]);
//		if (v[0] <= v[3] && v[1] >= v[2])
//			cout << 1;
//		else
//			cout << 0;
//	}
//	else
//	{
//		if (c[0] * c[1] <= 0 && c[2] * c[3] <= 0)
//			cout << 1;
//		else
//			cout << 0;
//	}
//
//	return 0;
//}
