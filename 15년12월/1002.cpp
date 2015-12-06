#include <stdio.h>

int main()
{
	int tc;
	scanf_s("%d", &tc);
	for (int t = 0; t < tc; ++t)
	{
		int x1, y1, r1, x2, y2, r2;
		int d, r, rs, rd;
		scanf_s("%d%d%d%d%d%d", &x1, &y1, &r1, &x2, &y2, &r2);

		if (x1 == x2 && y1 == y2 && r1 == r2)
		{
			printf("-1\n");
		}
		else
		{
			d = (x1 - x2)*(x1 - x2) + (y1 - y2)*(y1 - y2);
			rs = (r1 + r2)*(r1 + r2);
			rd = (r1 - r2)*(r1 - r2);

			if (d > rd && d < rs)
			{
				printf("2\n");
			}
			else if (d == rs || d == rd)
			{
				printf("1\n");
			}
			else
			{
				printf("0\n");
			}
		}
	}

	return 0;
}
