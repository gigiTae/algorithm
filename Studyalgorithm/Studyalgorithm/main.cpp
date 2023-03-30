#include <iostream>
#include <vector>
#include <queue>
using namespace std;
int N;

vector<pair<int, int>> Info[100001];
bool visited[100001]{};
int BFS(int num)
{
	visited[num] = true;
	queue<pair<int, int>> Q;
	for (int i = 0; i < Info[num].size(); ++i) {
		Q.push(make_pair(Info[num][i].first, Info[num][i].second));
		visited[Info[num][i].first] = true;
	}

	while (!Q.empty()) {
		int index = Q.front().first;
		int Dist = Q.front().second;
		for (int i = 0; i < Info[index].size(); ++i) {
			if (!visited[Info[index][i].first]) {
				
			}
		}
	}


}

void Solve()
{
	BFS(1);

}
int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	cin >> N;
	for (int i = 1; i < N; ++i) {
		int vertex1, vertex2, value;
		cin >> vertex1 >> vertex2 >> value;
		Info[vertex1].push_back(make_pair(vertex2, value));
		Info[vertex2].push_back(make_pair(vertex1, value));
	}

	Solve();
}

