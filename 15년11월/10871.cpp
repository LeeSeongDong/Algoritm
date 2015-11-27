#include <iostream>

using namespace std;

int main()
{
	int n, max, count = 0;;
	cin >> n >> max;

	int *a = new int[n];

	for (int i = 0; i < n; ++i)
	{
		int b;
		cin >> b;
		if (b < max)
		{
			a[count] = b;;
			++count;
		}
	}

	for (int i = 0; i < count; ++i)
	{
		cout << a[i] << ' ';
	}

	return 0;
}