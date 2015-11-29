#include <iostream>

using namespace std;

int main()
{
	int m;

	cin >> m;

	int a[100];
	int score = 0;
	for (int i = 0; i < m; ++i)
	{
		cin >> a[i];

		if (a[i] == 1)
		{
			if (i == 0)
			{
				score += 1;
			}
			else
			{
				if (a[i - 1] != 0)
				{
					a[i] += a[i - 1];
					score += a[i];
				}
				else
				{
					score += 1;
				}
			}
		}
	}

	cout << score;


	return 0;
}