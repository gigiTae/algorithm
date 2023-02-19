//#include <iostream>
//#include <vector>
//using namespace std;
//
//vector<int> vec;
//int Number = 0;
//int Operator[4] = {};
//
//int Maximum = 0;
//int Minimum = 0;
//bool First = true;
//void DFS(int num, int Result)
//{
//    if (num == vec.size() - 1)
//    {
//        if (First == true)
//        {
//            Maximum = Result;
//            Minimum = Result;
//            First = false;
//        }
//
//        if (Maximum < Result)
//            Maximum = Result;
//        if (Minimum > Result)
//            Minimum = Result;
//        return;
//    }
//
//    for (int i = 0; i < 4; ++i)
//    {
//        if (Operator[i] == 0)
//        {
//            continue;
//        }
//        int Output = Result;
//        if (i == 0)
//        {
//            Output += vec[num + 1];
//        }
//        else if (i == 1)
//        {
//            Output -= vec[num + 1];
//        }
//        else if (i == 2)
//        {
//            Output *= vec[num + 1];
//        }
//        else if (i == 3)
//        {
//            Output /= vec[num + 1];
//        }
//        --Operator[i];
//        DFS(num + 1, Output);
//        ++Operator[i];
//    }
//
//    return;
//}
//
//int main()
//{
//    cin >> Number;
//    for (int i = 0; i < Number; ++i)
//    {
//        int data = 0;
//        cin >> data;
//        vec.push_back(data);
//    }
//
//    for (int i = 0; i < 4; ++i)
//    {
//        cin >> Operator[i];
//    }
//
//    int vec0 = vec[0];
//
//    DFS(0, vec0);
//
//    cout << Maximum << endl << Minimum;
//
//    return 0;
//}
//
