
#include<iostream>
#include<vector>
using namespace std;

int main()
{
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(false);

	int N, K;
	cin >> N >> K;
	vector<int> vec;

	for (int i = 0; i < N; ++i)
	{
		int value;
		cin >> value;
		vec.push_back(value);
	}

	int ans = 0;
	while (K)
	{
		if (K / vec.back() > 0)
		{
			ans += K / vec.back();
			K = K % vec.back();
			vec.pop_back();
		}
		else
			vec.pop_back();
	}

	cout << ans;

	return 0;
}
