//#include <iostream>
//#include <string.h>
//
//using namespace std;
//
//int Call = 0;
//
//int recursion(const char* s, int l, int r) {
//    ++Call;
//    if (l >= r) return 1;
//    else if (s[l] != s[r]) return 0;
//    else return recursion(s, l + 1, r - 1);
//}
//
//int isPalindrome(const char* s) {
//    return recursion(s, 0, strlen(s) - 1);
//}
//
//int main()
//{
//
//
//    int TestCase = 0;
//    cin >> TestCase;
//
//    for (int i = 0; i < TestCase; ++i)
//    {
//        Call = 0;
//        string str{};
//        cin >> str;
//        cout << isPalindrome(str.c_str()) << ' ' << Call << '\n';
//    }
//
//}