//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//    // 행열 길이 
//    int Row, Col;
//    cin >> Row >> Col;
//
//    // 이중포인터 arr에 int 자료형 주소값을 저장하는 배열 생성 
//    int** arr = new int* [Row];
//    for (int i = 0; i < Row; ++i)
//        arr[i] = new int[Col]; //  다시 주소에 int 원소 생성
//
//    for (int row = 0; row < Row; ++row)
//    {
//        for (int col = 0; col < Col; ++col)
//        {
//            arr[row][col] = row * Col + col;
//            cout << row << "행" << col << "열: " << arr[row][col] << " ";
//        }
//        cout << endl;
//    }
//
//    return 0;
//}
