#include <iostream>      
using namespace std;

int main()
{
	int NumOfWord = 0;
	cin >> NumOfWord;
	int GroupWord = NumOfWord;

	bool Alphabet[26] = {};

	for (int i = 0; i < NumOfWord; ++i)
	{
		fill_n(Alphabet, 26, false);

		string str = {};
		cin >> str;

		for (int i = 0; i < str.size(); ++i)
		{
			if (Alphabet[str[i] - 97] == false)
			{
				Alphabet[str[i] - 97] = true;
				while (i + 1 < str.size())
				{
					if (str[i] == str[i + 1])
					{
						++i;
					}
					else
						break;
				}
			}
			else
			{
				--GroupWord;
				break;
			}
		}

	}

	cout << GroupWord;



	return 0;
}