//#include <iostream>
//
//typedef long long ll;
//#define MOS 1000000007;
//
//using namespace std;
//
//ll* Arr1;
//ll* Arr2;
//
//ll* MatrixMultiple(const ll* A, int A_Row, int A_Col, const ll* B, int B_Row, int B_Col)
//{
//    ll* C = new ll[A_Row * B_Col];
//    for (int row = 0; row < A_Row; ++row)
//        for (int col = 0; col < B_Col; ++col)
//        {
//            C[row * B_Col + col] = 0;
//            for (int i = 0; i < A_Col; ++i)
//            {
//                C[row * B_Col + col] += (A[row * A_Col + i] * B[i * B_Col + col]) % MOS;
//            }
//            C[row * B_Col + col] = C[row * B_Col + col] % MOS;
//        }
//
//    return C;
//}
//
//int main()
//{
//    cin.tie(NULL);
//    std::cout.tie(NULL);
//    ios::sync_with_stdio(false);
//
//    Arr1 = new ll[4];
//    for (int i = 0; i < 3; ++i)
//        Arr1[i] = 1;
//    Arr1[3] = 0;
//    ll n;
//    cin >> n;
//
//    while (n > 0)
//    {
//        if (n & 1 && Arr2 != nullptr)
//            Arr2 = MatrixMultiple(Arr2, 2, 2, Arr1, 2, 2);
//        else if (n & 1 && Arr2 == nullptr)
//            Arr2 = Arr1;
//        Arr1 = MatrixMultiple(Arr1, 2, 2, Arr1, 2, 2);
//        n >>= 1;
//    }
//
//    cout << Arr2[1];
//
//    return 0;
//}
//
