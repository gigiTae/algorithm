
#include<iostream>
#include<stack>
using namespace std;


int main()
{
	stack<int> S;
	int K;
	cin >> K;

	for (int i = 0; i < K; ++i)
	{
		long long num;
		cin >> num;
		if (num == 0)
			S.pop();
		else
			S.push(num);
	}

	long long ans = 0;

	while (!S.empty())
	{
		ans += S.top();
		S.pop();
	}

	cout << ans;



	return 0;

}