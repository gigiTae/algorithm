
#include <iostream>

using namespace std;

int main()
{
	string str;
	cin >> str;
	int ans = 1;
	for (int i = 0; i < str.size() / 2; ++i)
	{
		if (str[i] != *(str.end() - 1 - i))
		{
			ans = 0;
			break;
		}
	}

	cout << ans;

}



