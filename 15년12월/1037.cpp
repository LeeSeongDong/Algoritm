#include <stdio.h>
#include <algorithm>

int main()
{
	int n, temp, res, num[50];
	scanf("%d", &n);
	for (int i = 0; i < n; ++i)
	{
		scanf("%d", &temp);
		num[i] = temp;
	}
	std::sort(num, num + n);
	printf("%d", num[0] * num[n - 1]);
	return 0;
}