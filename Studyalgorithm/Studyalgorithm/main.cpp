
#include <iostream>
#include <queue>
using namespace std;

int N, M; // N : row M: col
bool arr[100][100]{};
bool visit[100][100]{};
int ans = 0;
bool IsFind = false;
struct Pos
{
	int Row;
	int Col;

	Pos(int row, int col)
		:Row(row)
		,Col(col)
	{}
};

queue<Pos> Q;

void BFS()
{
	++ans;
	queue<Pos> tmp;
	while (!Q.empty())
	{
		Pos pos = Q.front();
		int col = pos.Col; int row = pos.Row;
		if (row == N - 1 && col == M - 1)
		{
			IsFind = true;
			return;
		}
		// up row-1
		if (row > 0 && arr[row - 1][col] == true && visit[row - 1][col] == false)
		{
			tmp.push(Pos(row - 1, col));
			visit[row - 1][col] = true;
		}
		// down row +1
		if (row + 1 < N && arr[row + 1][col] == true && visit[row + 1][col] == false)
		{
			tmp.push(Pos(row + 1, col));
			visit[row +1][col] = true;
		}
		// left col-1
		if (col > 0 && arr[row][col - 1] == true && visit[row][col - 1] == false)
		{
			tmp.push(Pos(row, col - 1));
			visit[row][col-1] = true;
		}
		// right col+1
		if (col + 1 < M && arr[row][col + 1] == true && visit[row][col + 1] == false)
		{
			tmp.push(Pos(row, col + 1));
			visit[row][col+1] = true;
		}
		Q.pop();
	}
	Q = tmp;
}

int main(void)
{
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(false);

	cin >> N >> M; // row , col

	for (int i = 0; i < N; ++i)
	{
		string str;
		cin >> str;
		for (int j = 0; j < M; ++j)
		{
			if (str[j] == '1')
				arr[i][j] = 1;
			else
				arr[i][j] = 0;
		}
	}
	visit[0][0] = true;
	Q.push(Pos(0,0));
	
	while (!IsFind)
	{
		BFS();

	}
	
	cout << ans;

}