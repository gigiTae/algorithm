//
//#include<iostream>
//#include<string>
//#include<stack>
//using namespace std;
//
//
//int main()
//{
//	while (true)
//	{
//		string str;
//		getline(cin, str);
//		if (str[0] == '.')
//			break;
//		stack<int> S;
//		bool yes = true;
//		for (int i = 0; i < str.size(); ++i)
//		{
//			if (str[i] == '(')
//			{
//				S.push(1);
//			}
//			else if (str[i] == ')')
//			{
//				if (S.empty() || S.top() != 1)
//				{
//					yes = false;
//					break;
//				}
//				S.pop();
//			}
//			else if (str[i] == '[')
//			{
//				S.push(2);
//			}
//			else if (str[i] == ']')
//			{
//				if (S.empty() || S.top() != 2)
//				{
//					yes = false;
//					break;
//				}
//				S.pop();
//			}
//		}
//
//		if (yes == true && S.empty())
//			cout << "yes" << '\n';
//		else
//			cout << "no" << '\n';
//	}
//	return 0;
//}