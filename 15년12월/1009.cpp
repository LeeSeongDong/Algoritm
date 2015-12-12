#include <stdio.h>
int main()
{
	int tc;
	scanf("%d", &tc);
	for (int t = 0; t < tc; ++t)
	{
		int a, b, ans;
		scanf("%d%d", &a, &b);

		if (a % 10 != 0)
		{
			ans = a;
			for (int i = 0; i < b - 1; ++i)
			{
				ans = (ans*a) % 10;
			}
		}
		else
		{
			ans = 10;
		}
		printf("%d\n", ans);
	}
	return 0;
}