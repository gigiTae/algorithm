
#include <iostream>
class string {
	char* str;
	int len;

public:
	string(char c, int n);  // 문자 c 가 n 개 있는 문자열로 정의
	string(const char* s);
	string(const string& s);
	~string();

	void add_string(const string& s);   // str 뒤에 s 를 붙인다.
	void copy_string(const string& s);  // str 에 s 를 복사한다.
	int strlen();                       // 문자열 길이 리턴
};

string::string(char c, int n)
{
	len = n;
	str = new char[n+1];
	for (int i = 0; i < n; ++i)
		str[i] = c;
	str[n] = '\0';
}

string::string(const char* s)
{
	len = 0;
	while (s[len])
		++len;
	str = new char[len+1];
	strcpy_s(str, len + 1, s);
}

string::string(const string& s)
{
	len = s.len;
	str = new char[sizeof(s.str)];
	strcpy_s(str, sizeof(s.str), s.str);
}

string::~string()
{
	delete str;
}

void string::add_string(const string& s)
{
	char* tmp = new char[sizeof(str) + sizeof(s.str)-1];
	for (int i = 0; i < len; ++i)
	{
		tmp[i] = str[i];
	}
	for (int i = len; i < len + s.len; ++i)
	{
		tmp[i] = s.str[i - len];
	}
	tmp[len + s.len] = '\0';
	delete str;
	str = tmp;
	len += s.len;
}

void string::copy_string(const string& s)
{
	str = new char[sizeof(s.str)];
	strcpy_s(str, sizeof(s.str), s.str);
	len = s.len;
}

int string::strlen()
{
	return len;
}

int main()
{
	string str("hi");
	string str2('g', 5);
	string str3 = str2;
	str2.copy_string(str);
	str.add_string("hello");
	 
	int a = 0;
}
