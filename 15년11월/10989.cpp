#include <stdio.h>

int num[10001];

int main()
{
	int n;
	int m, i, j;

	scanf_s("%d", &n);
	for (i = 0; i < n; ++i)
	{
		scanf_s("%d", &m);
		++num[m];

	}

	for (i = 1; i < 10001; ++i)
	{
		for (j = 0; j < num[i]; ++j)
		{
			printf("%d\n", i);
		}
	}

	return 0;
}