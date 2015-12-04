#include <stdio.h>

void find(int** a, int i, int j)
{
	a[i][j] = 2;

	//상
	if (a[i][j + 1] == 1)
	{
		find(a, i, j + 1);
	}
	//우
	if (a[i + 1][j] == 1)
	{
		find(a, i + 1, j);
	}
	//하
	if (a[i][j - 1] == 1)
	{
		find(a, i, j - 1);
	}
	//좌
	if (a[i - 1][j] == 1)
	{
		find(a, i - 1, j);
	}
}

int main()
{
	int tstCase;
	scanf_s("%d", &tstCase);
	for (int t = 0; t < tstCase; ++t)
	{
		int x, y, k;
		int tmp1, tmp2;
		scanf_s("%d%d%d", &x, &y, &k);

		//init
		int** a = new int*[x + 2];
		for (int i = 0; i < x + 2; ++i)
		{
			a[i] = new int[y + 2];
			for (int j = 0; j < y + 2; ++j)
			{
				a[i][j] = 0;
			}
		}

		//배추심기
		for (int i = 0; i < k; ++i)
		{
			scanf_s("%d%d", &tmp1, &tmp2);
			a[tmp1 + 1][tmp2 + 1] = 1;
		}

		//배추찾기
		int cnt = 0;
		for (int i = 1; i <= x; ++i)
		{
			for (int j = 1; j <= y; ++j)
			{
				if (a[i][j] == 1)
				{
					find(a, i, j);
					++cnt;
				}
			}
		}

		printf("%d\n", cnt);

		for (int i = 0; i < x + 2; ++i)
		{
			delete[]a[i];
		}
		delete[]a;
	}

	return 0;
}