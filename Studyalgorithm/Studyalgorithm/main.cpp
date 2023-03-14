
#include <iostream>
#include <set>

using namespace std;



set<int>* arr[101];
int Computer, Connet;
bool Visit[101];
int ans = -1;

void DFS(int index)
{
	Visit[index] = true;
	++ans;

	for (auto iter = arr[index]->begin(); iter != arr[index]->end(); ++iter)
	{
		if (Visit[*iter] == false)
			DFS(*iter);
	}
}

int main(void)
{
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(false);

	cin >> Computer >> Connet;

	for (int i = 1; i <= Computer; ++i)
		arr[i] = new set<int>;

	for (int i = 1; i <= Connet; ++i)
	{
		int x1, x2;
		cin >> x1 >> x2;
		arr[x1]->insert(x2);
		arr[x2]->insert(x1);
	}

	DFS(1);
	cout << ans;


}