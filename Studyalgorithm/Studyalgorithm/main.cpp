
#include<iostream>

using namespace std;

class stack
{
private :
	int arr[10000];
	int end;
	int capacity;
public:
	void push(int num) 
	{
		arr[end] = num;
		++end;
		++capacity;
	}

	int pop()
	{
		if (capacity == 0)
			return -1;
		else
		{
			--capacity;
			return arr[--end];
		}
	}

	int size()
	{
		return capacity;
	}

	int empty()
	{
		if (capacity == 0)
			return 1;
		else
			return 0;
	}

	int top()
	{
		if (capacity == 0)
			return -1;
		else
			return arr[end-1];
	}

	stack()
		:end(0)
		,capacity(0)
		,arr{}
	{

	}
};


int main()
{
	stack S;

	int TestCase;
	cin >> TestCase;
	for (int i = 0; i < TestCase; ++i)
	{
		string str;
		cin >> str;
		if (str == "push")
		{
			int num = 0;
			cin >> num;
			S.push(num);
		}
		else if (str == "pop")
		{
			cout << S.pop() << '\n';
		}
		else if (str == "size")
		{
			cout << S.size() << '\n';
		}
		else if (str == "empty")
		{
			cout << S.empty() << '\n';
		}
		else if (str == "top")
		{
			cout << S.top() << '\n';
		}
	}

	return 0;
}