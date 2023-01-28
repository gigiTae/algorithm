//
//#include <iostream>      
//
//using namespace std;
//
//int main()
//{
//    unsigned int Bit = 0;
//    int StudentNumber = 0;
//    for (int i = 0; i < 28; ++i)
//    {
//        cin >> StudentNumber;
//        Bit = Bit | (1 << (StudentNumber - 1));
//    }
//
//    for (int i = 0; i < 30; ++i)
//    {
//        if (!(Bit & (1 << i)))
//        {
//            cout << i + 1 << endl;
//        }
//
//    }
//    return 0;
//}