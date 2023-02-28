//#include<iostream>
//#include<deque>
//#include<string>
//
//using namespace std;
//
//
//
//int main(void)
//{
//	cin.tie(NULL);
//	cout.tie(NULL);
//	ios::sync_with_stdio(false);
//	int TestCase;
//	cin >> TestCase;
//
//	for (int t = 0; t < TestCase; ++t)
//	{
//		deque<int> dq;
//		string function;
//		bool foward = true, IsError = false;
//		cin >> function;
//		int n;
//		cin >> n;
//		string str;
//		cin >> str;
//		string data{};
//		for (int i = 1; i < str.size(); ++i)
//		{
//			if (str[i] == ',' || str[i] == ']')
//			{
//				if (data != "")
//					dq.push_back(stoi(data));
//				data = "";
//			}
//			else
//			{
//				data += str[i];
//			}
//		}
//
//		for (int i = 0; i < function.size(); ++i)
//		{
//			if (function[i] == 'R')
//				foward = !foward;
//			else // D
//			{
//				if (dq.empty())
//				{
//					cout << "error" << '\n';
//					IsError = true;
//					break;
//				}
//				else if (foward == true)
//					dq.pop_front();
//				else
//					dq.pop_back();
//			}
//		}
//		if (IsError == false)
//		{
//			cout << '[';
//			if (dq.empty())
//			{
//				cout << ']' << '\n';
//				continue;
//			}
//
//			if (foward == true)
//			{
//				auto iter = dq.begin();
//				while (true)
//				{
//					if (iter != --dq.end())
//					{
//						cout << *iter << ',';
//						++iter;
//					}
//					else
//					{
//						cout << *iter << ']' << '\n';
//						break;
//					}
//				}
//			}
//			else
//			{
//				auto iter = --dq.end();
//				while (true)
//				{
//					if (iter != dq.begin())
//					{
//						cout << *iter << ',';
//						--iter;
//					}
//					else
//					{
//						cout << *iter << ']' << '\n';
//						break;
//					}
//				}
//			}
//
//		}
//
//	}
//
//	return 0;
//}
