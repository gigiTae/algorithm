//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//    // �࿭ ���� 
//    int Row, Col;
//    cin >> Row >> Col;
//
//    // ���������� arr�� int �ڷ��� �ּҰ��� �����ϴ� �迭 ���� 
//    int** arr = new int* [Row];
//    for (int i = 0; i < Row; ++i)
//        arr[i] = new int[Col]; //  �ٽ� �ּҿ� int ���� ����
//
//    for (int row = 0; row < Row; ++row)
//    {
//        for (int col = 0; col < Col; ++col)
//        {
//            arr[row][col] = row * Col + col;
//            cout << row << "��" << col << "��: " << arr[row][col] << " ";
//        }
//        cout << endl;
//    }
//
//    return 0;
//}
