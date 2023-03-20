
#include <iostream>
#include <set>
using namespace std;

int main()
{
	int N, x;
	multiset<int> S;
	cin >> N;
	for (int i = 0; i < N; ++i)
	{
		int num;
		cin >> num;
		S.insert(num);
	}
	cin >> x;

}
