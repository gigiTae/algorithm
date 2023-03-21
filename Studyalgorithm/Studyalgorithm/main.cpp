
#include <iostream>

using namespace std;

int main() {

	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(false);


}			}
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
