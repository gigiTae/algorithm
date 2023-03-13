
#include <iostream>
#include <map>
using namespace std;

int arr[1000001]{};
int arr1[1000001]{};
int arr2[1000001]{};
int main()
{
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(false);

	multimap<int, int> M;
	int N;
	cin >> N;

	for (int i = 0; i < N; ++i)
	{
		int num;
		cin >> num;
		arr[i] = num;
		++arr1[num];
	}

	for (int i = 0; i < N; ++i)
	{
		int num = arr[i];
		if (i != 0)
		{
			auto iter = M.begin();
			while (!M.empty() && num > iter->first)
			{
				arr2[iter->second] = num;
				iter = M.erase(iter);
			}
		}
		M.insert(make_pair(num, i));
	}

	for (auto iter = M.begin(); iter != M.end(); ++iter)
		arr2[iter->second] = -1;

	for (int i = 0; i < N; ++i)
		cout << arr2[i] << ' ';


}
