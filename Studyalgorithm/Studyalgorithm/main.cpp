#include <iostream>

using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int a1, a0 , c , n0;
    cin >> a1 >> a0 >> c >> n0;

    int fn = a1 * n0 + a0;
    int gn = c * n0;

    if (fn > gn || a1 > c)
        cout << 0;
    else
        cout << 1;




    return 0;
}
