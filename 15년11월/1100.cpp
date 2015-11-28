#include <iostream>
#include <string>

using namespace std;

int main()
{
	char a[8][8];
	bool b[8][8];

	int count = 0;
	for (int i = 0; i < 8; ++i)
	{
		for (int j = 0; j < 8; ++j)
		{
			char c;
			cin >> c;

			if (i % 2 == 0 && j % 2 == 0 && c == 'F')
			{
				++count;
			}
			else if (i % 2 == 1 && j % 2 == 1 && c == 'F')
			{
				++count;
			}
		}
	}

	cout << count;


	return 0;
}