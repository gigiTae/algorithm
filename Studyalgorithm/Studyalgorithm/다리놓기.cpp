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
//    int TestCase;
//    cin >> TestCase;
//
//    for (int i = 0; i < TestCase; ++i)
//    {
//        int a, b;
//        cin >> a >> b;
//
//        int A = a;
//        unsigned long long ans = 1;
//        for (int j = 1; j <= a; ++j)
//        {
//            ans *= b--;
//            ans /= j;;
//        }
//
//        cout << ans << '\n';
//    }
//
//    return 0;
//}
