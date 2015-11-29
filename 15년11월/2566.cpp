#include <iostream>

using namespace std;

int main()
{
	int num[9][9];

	int max = 0;
	int Xindex;
	int Yindex;
	for (int i = 0; i < 9; ++i)
	{
		for (int j = 0; j < 9; ++j)
		{
			cin >> num[i][j];

			if (num[i][j] > max)
			{
				max = num[i][j];
				Xindex = i;
				Yindex = j;
			}
		}
	}

	cout << max << endl << Xindex + 1 << " " << Yindex + 1 << endl;


	return 0;
}