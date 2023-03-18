//
//#include <iostream>
//
//class Date {
//	int year_;
//	int month_;  // 1 부터 12 까지.
//	int day_;    // 1 부터 31 까지.
//
//public:
//	void SetDate(int year, int month, int date);
//	void AddDay(int inc);
//	void AddMonth(int inc);
//	void AddYear(int inc);
//
//	void ShowDate();
//
//private:
//	void Modify();
//};
//
//void Date::SetDate(int year, int month, int date)
//{
//	year_ = year;
//	month_ = month;
//	day_ = date;
//}
//
//void Date::AddDay(int inc)
//{
//	day_ += inc;
//	Modify();
//}
//
//void Date::AddMonth(int inc)
//{
//	month_ += inc;
//	Modify();
//}
//
//void Date::AddYear(int inc)
//{
//	year_ += inc;
//}
//
//void Date::ShowDate()
//{
//	std::cout << year_ << "년 " << month_ << "월 " << day_ << "일 입니다.";
//}
//
//void Date::Modify()
//{
//	while (true)
//	{
//		// 월 
//		// 31일 1월 3 5 7 8 10 12
//		if (day_ > 31 && (month_ == 1 || month_ == 3 || month_ == 5 || month_ == 7
//			|| month_ == 8 || month_ == 10 && month_ == 12))
//		{
//			day_ -= 31;
//			++month_;
//		}
//		// 30일 4 6 9 11
//		if (day_ > 30 && (month_ == 4 || month_ == 6 || month_ == 9 || month_ == 11))
//		{
//			day_ -= 30;
//			++month_;
//		}
//		if (year_ % 4 == 0 && day_ > 29)
//		{
//			++month_;
//			day_ -= 29;
//		}
//
//		if (year_ % 4 != 0 && day_ > 28)
//		{
//			++month_;
//			day_ -= 28;
//		}
//	}
//}
//
