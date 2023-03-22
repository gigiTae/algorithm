//
//#include <iostream>
//class MyString {
//	char* str;
//	int len;
//
//public:
//	MyString(char c, int n);  // 문자 c 가 n 개 있는 문자열로 정의
//	MyString(const char* s);
//	MyString(const MyString& s);
//	~MyString();
//
//	void add_string(const MyString& s);   // str 뒤에 s 를 붙인다.
//	void copy_string(const MyString& s);  // str 에 s 를 복사한다.
//	int strlen();                       // 문자열 길이 리턴
//
//	bool operator > (const MyString& other)const;
//	bool operator == (const MyString& other)const;
//};
//
//MyString::MyString(char c, int n)
//{
//	len = n;
//	str = new char[n + 1];
//	for (int i = 0; i < n; ++i)
//		str[i] = c;
//	str[n] = '\0';
//}
//
//MyString::MyString(const char* s)
//{
//	len = 0;
//	while (s[len])
//		++len;
//	str = new char[len + 1];
//	strcpy_s(str, len + 1, s);
//}
//
//MyString::MyString(const MyString& s)
//{
//	len = s.len;
//	str = new char[sizeof(s.str)];
//	strcpy_s(str, sizeof(s.str), s.str);
//}
//
//MyString::~MyString()
//{
//	delete str;
//}
//
//void MyString::add_string(const MyString& s)
//{
//	char* tmp = new char[sizeof(str) + sizeof(s.str) - 1];
//	for (int i = 0; i < len; ++i)
//	{
//		tmp[i] = str[i];
//	}
//	for (int i = len; i < len + s.len; ++i)
//	{
//		tmp[i] = s.str[i - len];
//	}
//	tmp[len + s.len] = '\0';
//	delete str;
//	str = tmp;
//	len += s.len;
//}
//
//void MyString::copy_string(const MyString& s)
//{
//	str = new char[sizeof(s.str)];
//	strcpy_s(str, sizeof(s.str), s.str);
//	len = s.len;
//}
//
//int MyString::strlen()
//{
//	return len;
//}
//
//bool MyString::operator >(const MyString& other) const
//{
//	for (int i = 0; i < len; ++i)
//	{
//		if (str[i] > other.str[i])
//			return true;
//		else if (str[i] < other.str[i])
//			return false;
//	}
//	return false;
//}
//
//bool MyString::operator==(const MyString& other)const
//{
//	if (len != other.len)
//		return false;
//	for (int i = 0; i < len; ++i)
//	{
//		if (str[i] != other.str[i])
//			return false;
//	}
//	return true;
//}
//
//
