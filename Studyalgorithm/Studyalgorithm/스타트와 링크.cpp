//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//int N, Minimum;
//bool First = true;
//vector<int> arr;
//vector<bool>Select;
//vector<int> StartTeam;
//vector<int> LinkTeam;
//
//void CulSynergy()
//{
//    int S_Team = 0;
//    int L_Team = 0;
//
//
//    for (auto col = StartTeam.begin(); col != StartTeam.end(); ++col)
//    {
//        for (auto row = StartTeam.begin(); row != StartTeam.end(); ++row)
//        {
//            int index = *col * N + *row;
//            S_Team += arr[index];
//        }
//    }
//
//    for (auto col = LinkTeam.begin(); col != LinkTeam.end(); ++col)
//    {
//        for (auto row = LinkTeam.begin(); row != LinkTeam.end(); ++row)
//        {
//            int index = *col * N + *row;
//            L_Team += arr[index];
//        }
//    }
//    int Dif = abs(S_Team - L_Team);
//    if (First == true)
//    {
//        Minimum = Dif;
//        First = false;
//    }
//    if (Minimum > Dif)
//        Minimum = Dif;
//    return;
//}
//
//void DFS(int num, int index)
//{
//    if (num == N / 2) // StarTeam 과 LinkTeam 점수차이 계산
//    {
//        for (int i = 0; i < N; ++i)
//        {
//            if (Select[i] == true)
//            {
//                StartTeam.push_back(i);
//            }
//            else
//            {
//                LinkTeam.push_back(i);
//            }
//        }
//        CulSynergy();
//        StartTeam.clear();
//        LinkTeam.clear();
//        return;
//    }
//    for (int i = index; i < N; ++i)
//    {
//        if (Select[i] == true)
//            continue;
//        Select[i] = true;
//        DFS(num + 1, i + 1);
//        Select[i] = false;
//    }
//
//}
//
//
//
//int main()
//{
//    cin >> N;
//    for (int i = 0; i < N; ++i)
//    {
//        Select.push_back(false);
//    }
//    for (int i = 0; i < N * N; ++i)
//    {
//        int synergy = 0;
//        cin >> synergy;
//        arr.push_back(synergy);
//    }
//
//    DFS(0, 0);
//    cout << Minimum;
//
//    return 0;
//}
//
