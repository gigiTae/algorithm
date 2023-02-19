//#include <iostream>
//
//using namespace std;
//
//int N;
//int Count = 0;
//int Arr[15];
//
//bool CheckCase(int col)
//{
//    for (int i = 0; i < col; ++i)
//    {
//        // 같은 열의 위치 or 기울기가 1 또는 -1
//        if (Arr[i] == Arr[col] || i - col == Arr[i] - Arr[col] || col - i == Arr[i] - Arr[col])
//            return true;
//    }
//    return false;
//}
//
//void DFS(int col)
//{
//    // 모든 행이 채워짐
//    if (N == col)
//    {
//        ++Count;
//        return;
//    }
//    // 다음열을 찾는 과정
//    for (int row = 0; row < N; ++row)
//    {
//        Arr[col] = row;
//        if (CheckCase(col))
//            continue;
//        DFS(col + 1);
//    }
//
//}
//
//int main()
//{
//    cin >> N;
//
//    DFS(0);
//
//    cout << Count;
//
//    return 0;
//}
