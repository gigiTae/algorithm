//#include <iostream>
//
//using namespace std;
//long long arr[1000001] = {};
//
//long long fi(long long num)
//{
//    if (num < 3)
//        return num;
//
//    if (arr[num] == 0)
//    {
//        arr[num] = (fi(num - 1) + fi(num - 2)) % 15746;
//    }
//    
//    return arr[num];
//}
//
//// �׳� �������Ͻø� ide������ ���ø޸� �ʰ�����
//int main()
//{
//    long long N = 0;
//    cin >> N;
//    long long Result = 0;
//    Result = fi(N);
//    cout << Result;
//
//
//    return 0;
//}
//
//
//
