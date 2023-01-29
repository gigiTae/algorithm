//
//#include <iostream>      
//
//
//using namespace std;
//
//int main()
//{
//	int Alphabet[26] = {};
//
//	fill_n(Alphabet, 26, -1); // 배열 초기화
//
//	string str{};
//
//	cin >> str;
//
//	for (int i = 0; i < (int)str.size(); ++i)
//	{
//		if (Alphabet[str[i] - 97] == -1)
//			Alphabet[str[i] - 97] = i;
//	}
//
//	for (int i = 0; i < 26; ++i)
//	{
//		cout << Alphabet[i] << " ";
//	}
//
//}