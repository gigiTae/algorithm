//#include <iostream>
//#include <vector>
//typedef long long ll;
//
//using namespace std;
//int N;
//ll B;
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
//                C[row * B_Col + col] += (A[row * A_Col + i] * B[i * B_Col + col]) % 1000;
//            }
//            C[row * B_Col + col] = C[row * B_Col + col] % 1000;
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
//    cin >> N >> B;
//    Arr1 = new ll[N * N];
//    for (int i = 0; i < N * N; ++i)
//    {
//        ll num;
//        cin >> num;
//        Arr1[i] = num % 1000;
//    }
//
//    while (B > 0)
//    {
//        if (B & 1 && Arr2 != nullptr)
//            Arr2 = MatrixMultiple(Arr2, N, N, Arr1, N, N);
//        else if (B & 1 && Arr2 == nullptr)
//            Arr2 = Arr1;
//        Arr1 = MatrixMultiple(Arr1, N, N, Arr1, N, N);
//        B >>= 1;
//    }
//
//    for (int row = 0; row < N; ++row)
//    {
//        for (int col = 0; col < N; ++col)\
//        {
//            cout << Arr2[row * N + col] << ' ';
//        }
//        cout << '\n';
//    }
//
//    return 0;
//}
