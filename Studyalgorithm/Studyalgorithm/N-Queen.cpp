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
//        // ���� ���� ��ġ or ���Ⱑ 1 �Ǵ� -1
//        if (Arr[i] == Arr[col] || i - col == Arr[i] - Arr[col] || col - i == Arr[i] - Arr[col])
//            return true;
//    }
//    return false;
//}
//
//void DFS(int col)
//{
//    // ��� ���� ä����
//    if (N == col)
//    {
//        ++Count;
//        return;
//    }
//    // �������� ã�� ����
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
