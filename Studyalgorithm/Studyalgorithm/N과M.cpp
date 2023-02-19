//#include <iostream>
//#include <vector>
//using namespace std;
//
//int N, M;
//int arr[8];
//vector<int> vec;
//bool check[8];
//
//void Print()
//{
//    for (int i = 0; i < vec.size(); ++i)
//    {
//        cout << vec[i] << ' ';
//    }
//    cout << '\n';
//}
//
//void DFS(int num)
//{
//    if (num == M)
//    {
//        Print();
//        return;
//    }
//    for (int i = 0; i < N; ++i)
//    {
//        if (check[i])
//            continue;
//        check[i] = true;
//        vec.push_back(arr[i]);
//        DFS(num + 1);
//        vec.pop_back();
//        check[i] = false;
//    }
//}
//
//int main()
//{
//    cin >> N >> M;
//    for (int i = 0; i < N; ++i)
//    {
//        arr[i] = i + 1;
//        check[i] = false;
//    }
//
//    DFS(0);
//
//    return 0;
//}
