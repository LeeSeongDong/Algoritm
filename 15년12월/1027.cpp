#include <stdio.h>

int n, b[50], fb[50][50], s[50];

bool isSee(int x, int y)
{
	for (int i = x + 1; i < y; ++i)
	{
		if ((double)b[i] >= ((double)(b[x] - b[y]) / (double)(x - y))*(i - x) + b[x])
		{
			return false;
		}
	}
	return true;
}

int main()
{

	scanf_s("%d", &n);
	for (int i = 0; i < n; ++i)
	{
		scanf_s("%d", &b[i]);
	}
	int max = 0;
	int index;
	for (int i = 0; i < n; ++i)
	{
		for (int j = i + 1; j < n; ++j)
		{
			if (isSee(i, j))
			{
				++s[i];
				++s[j];
			}
		}

		if (max <= s[i])
		{
			max = s[i];
			index = i;
		}
	}

	printf("%d", s[index]);

	return 0;
}
