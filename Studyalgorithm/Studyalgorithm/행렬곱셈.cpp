//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//    cin.tie(NULL);
//    std::cout.tie(NULL);
//    ios::sync_with_stdio(false);
//
//    int N, M, K;
//    cin >> N >> M;
//    // A 행렬
//    int* A = new int[N * M];
//    for (int row = 0; row < N; ++row)
//        for (int col = 0; col < M; ++col)
//        {
//            cin >> A[row * M + col];
//        }
//    // B 행렬
//    cin >> M >> K;
//    int* B = new int[M * K];
//    for (int row = 0; row < M; ++row)
//        for (int col = 0; col < K; ++col)
//            cin >> B[row * K + col];
//    // C 행렬
//    int* C = new int[N * K];
//    for (int row = 0; row < N; ++row)
//    {
//        for (int col = 0; col < K; ++col)
//        {
//            C[row * K + col] = 0;
//            for (int i = 0; i < M; ++i)
//            {
//                C[row * K + col] += A[row * M + i] * B[i * K + col];
//            }
//
//            cout << C[row * K + col] << ' ';
//        }
//        cout << '\n';
//    }
//
//    return 0;
//}
