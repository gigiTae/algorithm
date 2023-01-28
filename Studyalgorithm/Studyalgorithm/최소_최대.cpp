//
//#include <iostream>      
//
//using namespace std;
//
//int main()
//{
//    int MaxNum = 0, MinimumNum = 0, NumOfNum = 0;
//
//    cin >> NumOfNum;
//
//    int* pNum = new int[NumOfNum];
//
//    for (int i = 0; i < NumOfNum; ++i)
//    {
//        int a = 0;
//        cin >> a;
//        pNum[i] = a;
//    }
//
//    MaxNum = pNum[0];
//    MinimumNum = pNum[0];
//
//    for (int i = 1; i < NumOfNum; ++i)
//    {
//        if (MaxNum < pNum[i])
//            MaxNum = pNum[i];
//        else if (MinimumNum > pNum[i])
//            MinimumNum = pNum[i];
//    }
//
//    cout << MinimumNum << " " << MaxNum;
//
//
//    return 0;
//}