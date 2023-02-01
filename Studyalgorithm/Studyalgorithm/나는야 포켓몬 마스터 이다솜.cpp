//#include <iostream>
//#include <map>
//#include <sstream>
//
//using namespace std;
//
//
//int main()
//{
//	cin.tie(NULL);
//	ios::sync_with_stdio(false);
//
//
//	map<int, string>  Keyint;
//	map<string, int>  KeyString;
//
//	int Pokemon = 0;
//	int Quiz = 0;
//	cin >> Pokemon >> Quiz;
//
//	for (int i = 1; i <= Pokemon; ++i)
//	{
//		string str = {};
//		cin >> str;
//
//		Keyint.insert(pair<int, string>(i, str));
//		KeyString.insert(pair<string, int>(str, i));
//	}
//	for (int i = 0; i < Quiz; ++i)
//	{
//		string Input = {};
//		cin >> Input;
//
//		if (Input[0] < 58)	//  입력받은 값이 숫자
//		{
//			int number = 0;
//			std::stringstream ssInt(Input);
//			ssInt >> number;
//
//			cout << Keyint.find(number)->second << '\n';
//		}
//		else // 입력받은 값이 문자열
//		{
//			cout << KeyString.find(Input)->second << '\n';
//		}
//
//	}
//
//
//	return 0;
//}