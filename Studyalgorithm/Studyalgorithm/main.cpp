#include <iostream>
#include<vector>

using namespace std;

int main() 
{
    cin.tie(NULL);
    std::cout.tie(NULL);
    ios::sync_with_stdio(false);

    int Row, Col , K;
    cin >> Row >> Col >> K;

    vector<int> vec;
    int* rowsum = new int[Col];
    for (int i = 0; i < Col; ++i)
        rowsum[i] = 0;

    int Minimum = K*K;
    //	for (int col = 0; col < N; ++col)
//	{
//		long long sum = 0;
//		for (int row = 0; row < N; ++row)
//		{
//			int num;
//			cin >> num;
//			sum += num;
//			arr[row] += sum;
//			vec.push_back(arr[row]);
//		}
//	}
    for (int irow = 0; irow < Row; ++irow)
    {
        int sum = 0;
        bool White = true;
        if (irow % 2 == 1)
            White = !White;

        string str;
        cin >> str;
        for (int icol = 0; icol < Col; ++icol)
        {
            int num = 0;
            if (str[icol] == 'W' && White == false)
                ++num;
            else if (str[icol] == 'B' && White == true)
                ++num;
            sum += num;
            rowsum[icol] += sum;
            vec.push_back(rowsum[icol]);
 
            White = !White;

            // 최솟값 계산
            if (icol + 1 >= K && irow + 1 >= K)
            {
                int ans = vec[irow * Col + icol];
                if (irow - K>= 0)
                {
                    ans -= vec[(irow - K) * Col + icol];
                }
                if (icol - K >= 0)
                {
                    ans -= vec[irow * Col + icol - K];
                }
                if (irow - K >= 0 && icol - K >= 0)
                    ans += vec[(irow - K) * Col + icol - K];

                if (ans > K * K / 2)
                    ans = K * K - ans;
                if (Minimum > ans)
                    Minimum = ans;
            }

        }

    }

    std::cout << Minimum;
    

    return 0;
}
