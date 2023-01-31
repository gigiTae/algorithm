#include <iostream>
#include <string>

using namespace std;

int main()
{
	int Series = 0;
	cin >> Series;

	int SeriesNumber = 665;
	int Idx = 0;
	int Result = 0;
	while (Idx != Series)
	{
		++SeriesNumber;
		string str = std::to_string(SeriesNumber);
		if (true == str.find("666"))
		{
			++Idx;
			Result = SeriesNumber;
		}
	}
	cout << Result;
	return 0;
}