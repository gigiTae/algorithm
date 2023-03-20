
#include <iostream>
#include <queue>
using namespace std;
int N, K;
int ans = 0;
queue<int> Q;
bool Visited[100001]{};

void BFS()
{
	queue<int> tmp;
	while (!Q.empty())
	{
		int num = Q.front();
		while (num < 100001)
		{
			Visited[num] == true;
			if (num == K)
			{
				queue<int> emp;
				Q = emp;
				return;
			}
			if (Visited[num] == false)
			{
				Visited[num] == true;
				tmp.push(num);
			}
			if (Visited[num + 1] == false)
			{
				tmp.push(num + 1);
				Visited[num + 1] = true;
			}
			if (num > 0 && Visited[num - 1] == false)
			{
				 tmp.push(num - 1);
				 Visited[num - 1] = true;
			}

			num *= 2;
		}
		Q.pop();
	}
	++ans;
	Q = tmp;
}

int main()
{
	cin >> N >> K;
	Q.push(N);

	
	Visited[N] = true;
	while (!Q.empty())
	{
		BFS();
	}
	cout << ans;
}
