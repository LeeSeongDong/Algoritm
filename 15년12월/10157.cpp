#include <stdio.h>

int main()
{
	int c, r;
	long int k;
	int x = 1, y = 0;
	scanf_s("%d%d%d", &c, &r, &k);

	if (c*r < k)
	{
		printf("0");
	}
	else
	{
		while (k >(2 * c + 2 * r - 4))
		{
			++x;
			++y;
			k -= 2 * c + 2 * r - 4;
			c -= 2;
			r -= 2;
		}

		if (k >= r)
		{
			y += r;
			k -= r;

			if (k >= c - 1)
			{
				x += c - 1;
				k -= c - 1;

				if (k >= r - 1)
				{
					y -= r - 1;
					k -= r - 1;
					x -= k;
				}
				else
				{
					y -= k;
				}
			}
			else
			{
				x += k;
			}
		}
		else
		{
			y += k;
		}
		printf("%d %d", x, y);
	}
	return 0;
}