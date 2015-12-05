#include <stdio.h>

bool isDecs(int num)
{
	int temp = num;
	int digit = 10;
	if (num / 10 == 0)
	{
		return true;
	}
	else
	{
		while (temp / digit > 0)
		{
			int a = temp % digit;
			int b = temp % (digit * 10);
			b -= a;
			b /= 10;

			if (a >= b)
			{
				return false;
			}
			else
			{
				temp /= 10;
			}
		}

		return true;
	}
}

int makeDecsNum(int x, int y)
{
	int temp = 10;
	for (int i = 0; i < x - 1; ++i)
	{
		temp *= 10;
	}

	int num = y*temp;
	for (int i = 0; i < x; ++i)
	{
		temp /= 10;
		num = num + (y - i - 1)*temp;
	}

	return num;
}

int main()
{
	int n, x, y;
	scanf_s("%d", &n);
	int a[10][10];
	int sum = 9;
	bool f = false;
	//1자리일때 모두 가능함
	for (int i = 0; i < 10; ++i)
	{
		a[0][i] = 1;
	}

	//i 자리수
	//j 최고자리값
	//k 이전자리수 인덱스
	for (int i = 1; i < 10; ++i)
	{
		for (int j = 0; j < 10; ++j)
		{
			int temp = 0;
			for (int k = 0; k < j; ++k)
			{
				temp += a[i - 1][k];
			}
			a[i][j] = temp;
			sum += temp;
			if (sum >= n)
			{
				x = i;
				y = j;
				f = true;
				break;
			}
		}
		if (f)
		{
			break;
		}
	}

	if (n / 10 == 0)
	{
		printf("%d", n);
	}
	else if (n >= 1022)
	{
		if (n == 1022)
		{
			printf("9876543210");
		}
		else
		{
			printf("-1");
		}
	}
	else
	{
		int num = makeDecsNum(x, y);

		while (true)
		{
			if (isDecs(num))
			{
				if (sum == n)
				{
					break;
				}
				--sum;
			}

			--num;
		}

		printf("%d", num);
	}

	return 0;
}