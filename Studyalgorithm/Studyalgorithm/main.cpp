#include <iostream>
#include <vector>
#include <queue>
using namespace std;


int N, M; // row, col
int arr[11][300][300]{};
bool visited[11][300][300]{};

void BFS(int index, int row, int col)
{
	queue<pair<int, int>> Q;
	Q.push(make_pair(row, col));
	visited[index][row][col] = true;
	while (!Q.empty())
	{
		int Row = Q.front().first;
		int Col = Q.front().second;
		// row-1
		if (arr[index][Row - 1][Col] != 0 && visited[index][Row - 1][Col] == false)
		{
			visited[index][Row - 1][Col] = true;
			Q.push(make_pair(Row - 1, Col));
		}
		// row+1
		if (arr[index][Row + 1][Col] != 0 && visited[index][Row + 1][Col] == false)
		{
			visited[index][Row + 1][Col] = true;
			Q.push(make_pair(Row + 1, Col));
		}
		// col+1
		if (arr[index][Row][Col + 1] != 0 && visited[index][Row][Col + 1] == false)
		{
			visited[index][Row][Col + 1] = true;
			Q.push(make_pair(Row, Col + 1));
		}
		// col-1
		if (arr[index][Row][Col - 1] != 0 && visited[index][Row][Col - 1] == false)
		{
			visited[index][Row][Col - 1] = true;
			Q.push(make_pair(Row, Col - 1));
		}
		Q.pop();
	}
}

bool Check(int index)
{
	for (int row = 1; row < N; ++row)
		for (int col = 1; col < M; ++col) {
			if (arr[index][row][col] != 0) {
				BFS(index, row, col);
				return true;
			}
		}
	return false;
}

void Solve()
{

	while(true)
	{
		for(int row=1; row< N; ++row)
			for (int col = 1; col < M; ++col)
			{
				// arr[i - 1][row][col];
				int num = arr[i - 1][row][col];
				// up  row-1
				if (num > 0 && arr[i - 1][row-1][col] == 0)
					--num;
				// down row+1
				if (num > 0 && arr[i - 1][row+1][col] == 0)
					--num;
				// left col-1
				if (num > 0 && arr[i - 1][row][col-1] == 0)
					--num;
				// right col+1
				if (num > 0 && arr[i - 1][row][col+1] == 0)
					--num;	
				arr[i][row][col] = num;
			}
		// 두덩어리 체크 or 다 녹은지
		if (Check(i))
		{
			for (int row = 1; row < N; ++row)
				for (int col = 1; col < M; ++col) {
					if (visited[i][row][col] == false && arr[i][row][col] != 0){
						cout << i;
						return;
					}
				}
		}
		else{
			cout << 0;
			return;
		}

	}
	cout << 0;
}




int main()
{
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(false);
	cin >> N >> M;

	for (int i = 0; i < N; ++i)
		for (int j = 0; j < M; ++j)
			cin >> arr[0][i][j];
	--N; --M;

	Solve();
}