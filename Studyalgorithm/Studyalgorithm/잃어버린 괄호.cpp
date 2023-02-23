//
//#include<iostream>
//#include<string>
//using namespace std;
//
//int main()
//{
//	string str1, str2;
//	cin >> str1;
//
//	int ans = 0;
//	bool Isplus = true;
//	for (int i = 0; i < str1.size(); ++i)
//	{
//		if (str1[i] == '+' && Isplus == true)
//		{
//			ans += stoi(str2.c_str());
//			str2.clear();
//		}
//		else if (str1[i] == '+' && Isplus == false)
//		{
//			ans -= stoi(str2.c_str());
//			str2.clear();
//		}
//		else if (str1[i] == '-' && Isplus == true)
//		{
//			ans += stoi(str2.c_str());
//			str2.clear();
//			Isplus = false;
//		}
//		else if (str1[i] == '-' && Isplus == false)
//		{
//			ans -= stoi(str2.c_str());
//			str2.clear();
//		}
//		else
//		{
//			str2 += str1[i];
//		}
//	}
//	if (Isplus == true)
//	{
//		ans += stoi(str2.c_str());
//		str2.clear();
//	}
//	else if (Isplus == false)
//	{
//		ans -= stoi(str2.c_str());
//		str2.clear();
//	}
//
//	cout << ans;
//	return 0;
//}