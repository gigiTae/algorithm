#include <string>
#include <vector>
using namespace std;
// m : x   n : y 
int Solve(int m, int n, int StarX, int StarY, int EndX, int EndY)
{
    int mini = 2000000;

    // up  (x, 2n-y)
    int up = (StarX - EndX) * (StarX - EndX) + (StarY - (2 * n - EndY)) * (StarY - (2 * n - EndY));
    // down (x, -y)
    int down = (StarX - EndX) * (StarX - EndX) + (StarY + EndY) * (StarY + EndY);
    // left (-x, y)
    int left = (StarX + EndX) * (StarX + EndX) + (StarY - EndY) * (StarY - EndY);
    // right (2m-x,y)
    int right = (StarX - (2 * m - EndX)) * (StarX - (2 * m - EndX)) + (StarY - EndY) * (StarY - EndY);

    if (mini > up && StarX != EndX)
        mini = up;
    if (mini > up && StarX == EndX && StarY > EndY)
        mini = up;

    if (mini > down && StarX != EndX)
        mini = down;
    if (mini > down && StarX == EndX && StarY < EndY)
        mini = down;

    if (mini > left && StarY != EndY)
        mini = left;
    if (mini > left && StarY == EndY && StarX < EndX)
        mini = left;

    if (mini > right && StarY != EndY)
        mini = right;
    if (mini > right && StarY == EndY && StarX > EndX)
        mini = right;

    return mini;
}


vector<int> solution(int m, int n, int startX, int startY, vector<vector<int>> balls) {
    vector<int> answer;

    for (int i = 0; i < (int)balls.size(); ++i)
    {
        int endX = balls[i][0];
        int endY = balls[i][1];
        answer.push_back(Solve(m, n, startX, startY, endX, endY));
    }

    return answer;
}
