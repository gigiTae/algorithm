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
//	string str{};
//	cin >> str;
//
//	for (int i = 0; i < str.size(); ++i)
//	{
//		if (91 > str[i])
//		{
//			++Alphabet[str[i] - 65]; // �빮�� 65 A
//		}
//		else
//		{
//			++Alphabet[str[i] - 97]; // �ҹ��� 97 a
//		}
//	}
//
//	int BiggestNum = 0;
//	int BigAlphabet = 0;
//	bool IsSameNumber = true;
//
//	for (int i = 0; i < 26; ++i)
//	{
//		if (BiggestNum < Alphabet[i])
//		{
//			BiggestNum = Alphabet[i];
//			BigAlphabet = i;
//			IsSameNumber = false;
//		}
//		else if (BiggestNum == Alphabet[i])
//		{
//			IsSameNumber = true;
//		}
//	}
//
//	if (IsSameNumber == true)
//	{
//		cout << '?';
//	}
//	else
//	{
//		char a = BigAlphabet + 65;
//		cout << a;
//	}
//
//}