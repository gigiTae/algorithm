
#include<iostream>

using namespace std;


int main()
{
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(false);

	int N, M;
	cin >> N >> M;

	long long* Remain = new long long[M];

	for (int i = 0; i < M; ++i)
	{
		Remain[i] = 0;
	}
	Remain[0] = 1;
	int PrevRemain = 0;
	long long ans = 0;
	for (int i = 0; i < N; ++i)
	{
		int num = 0;
		cin >> num;
		num = num % M;
		PrevRemain = (num + PrevRemain) % M;
		++Remain[PrevRemain];
	}

	for (int i = 0; i < M; ++i)
	{
		if (Remain[i] > 1)
			ans += Remain[i] * (Remain[i] - 1) / 2;
	}

	cout << ans;
	return 0;
}
