
#include <iostream>
#include <vector>
#include <set>

using namespace std;

enum COLOR
{
	NONE,
	BLACK,
	RED,
};

vector<set<int>*> vec;
bool Visited[20001]{};
char Color[20001]{ 0,BLACK }; // 0 색깔 x 1 블랙 2 레드


int main(void)
{
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(false);

	int TestCase;
	cin >> TestCase;
	for (int i = 0; i < TestCase; ++i)
	{
		int V, E; // V 정점 E 간선
		cin >> V >> E;
		for (int j = 0; j <= V; ++j)
		{
			set<int> s;
			vec.push_back(&s);
		}
		for (int j = 0; j < E; ++j)
		{
			int num1, num2;
			cin >> num1 >> num2;
			vec[num1]->insert(num2);
			vec[num2]->insert(num1);
		}

		for (int j = 0; j < vec.size(); ++j)
		{
		}

	}

}
