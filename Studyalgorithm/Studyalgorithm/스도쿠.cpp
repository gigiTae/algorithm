//#include <iostream>
//#include <vector>
//
//using namespace std;
//int sudoku[9][9] = {};
//
//struct Pos
//{
//    int COL;
//    int ROW;
//};
//
//vector<Pos> Blank;
//
//void Print() {
//    // 결과 출력
//    for (int col = 0; col < 9; ++col)
//    {
//        for (int row = 0; row < 9; ++row)
//        {
//            cout << sudoku[col][row] << " ";
//        }
//        cout << endl;
//    }
//}
//
//bool CheckSudoku(int col, int row)
//{
//    // 가로 확인
//    for (int i = 0; i < 9; ++i)
//    {
//        if (i != col && sudoku[i][row] == sudoku[col][row])
//            return true;
//    }
//    // 세로 확인
//    for (int i = 0; i < 9; ++i)
//    {
//        if (i != row && sudoku[col][i] == sudoku[col][row])
//            return true;
//    }
//    // 네모칸 확인 
//    int miniindex = (col % 3) * 3 + row % 3;
//    for (int i = 0; i < 9; ++i)
//    {
//        if (miniindex == i)
//            continue;
//        int icol = i / 3;
//        int irow = i % 3;
//        if (sudoku[col][row] == sudoku[(col / 3) * 3 + icol][(row / 3) * 3 + irow])
//            return true;
//    }
//
//    return false;
//}
//
//void SolveSudoku(int index)
//{
//    // 스도쿠 칸이 모두 채워짐
//    if (index == Blank.size())
//    {
//        Print();
//        exit(0);
//    }
//
//    // 스도쿠 채우기
//    for (int i = 1; i < 10; ++i)
//    {
//        Pos now = Blank[index];
//        sudoku[now.COL][now.ROW] = i;
//        if (CheckSudoku(now.COL, now.ROW))
//        {
//            sudoku[now.COL][now.ROW] = 0;
//            continue;
//        }
//        SolveSudoku(index + 1);
//        sudoku[now.COL][now.ROW] = 0;
//    }
//    return;
//}
//
//int main()
//{
//    // 입력
//    for (int col = 0; col < 9; ++col)
//    {
//        for (int row = 0; row < 9; ++row)
//        {
//            cin >> sudoku[col][row];
//            if (sudoku[col][row] == 0)
//            {
//                Pos pos{};
//                pos.COL = col;
//                pos.ROW = row;
//                Blank.push_back(pos);
//            }
//        }
//    }
//
//    SolveSudoku(0);
//
//    Print();
//
//    return 0;
//}
//
