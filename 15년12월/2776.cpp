#include <stdio.h>
#include <algorithm>

using namespace std;

int main()
{
	int t;
	scanf("%d", &t);
	for (int ti = 0; ti < t; ++ti)
	{
		int n, m, temp;

		scanf("%d", &n);
		int* a = new int[n];
		for (int i = 0; i < n; ++i)
		{
			scanf("%d", &temp);
			a[i] = temp;
		}

		sort(a, a + n);

		scanf("%d", &m);
		for (int i = 0; i < m; ++i)
		{
			scanf("%d", &temp);

			if (binary_search(a, a + n, temp))
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