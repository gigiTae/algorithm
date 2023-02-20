//#include <iostream>
//
//using namespace std;
//int arr[50] = {};
//int a, b;
//// Àç±Í
//int fi(int num)
//{
//    if (num == 1 || num == 2)
//    {
//        ++a;
//        return 1;
//    }
//    else
//        return (fi(num - 1) + fi(num - 2));
//}
//
//int fibonacci(int num)
//{
//    if (num == 1 || num == 2)
//    {
//        return 1;
//    }
//
//    if (arr[num] == 0)
//    {
//        arr[num] = fibonacci(num - 1) + fibonacci(num - 2);
//        ++b;
//        return arr[num];
//    }
//
//    return arr[num];
//
//}
//
//int main()
//{
//
//    for (int i = 0; i < 50; ++i)
//    {
//        arr[i] = 0;
//    }
//
//    int number = 0;
//    cin >> number;
//    fi(number);
//    fibonacci(number);
//
//    cout << a << ' ' << b;
//
//
//
//    return 0;
//}
//
