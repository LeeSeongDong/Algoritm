#include <iostream>

using namespace std;

int main()
{
	int n, a1, a2;

	cin >> n;

	a1 = 0;
	a2 = 1;
	int a3;
	if (n == 0)
	{
		cout << a1;
	}
	else if (n == 1)
	{
		cout << a2;
	}
	else
	{
		for (int i = 0; i < n - 1; ++i)
		{
			a3 = a1 + a2;

			a1 = a2;
			a2 = a3;
		}

		cout << a3;
	}

	return 0;
}