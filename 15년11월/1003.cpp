#include <iostream>

using namespace std;

int z = 0, o = 0;

int main()
{
	int n;
	cin >> n;

	int z1 = 1, z2 = 0, z3, o1 = 0, o2 = 1, o3;

	for (int N = 0; N < n; ++N)
	{
		int m;
		cin >> m;

		if (m == 0)
		{
			z3 = z1, o3 = o1;
		}
		else if (m == 1)
		{
			z3 = 0, o3 = 1;
		}
		else
		{
			for (int i = 2; i <= m; ++i)
			{
				z3 = z1 + z2;
				o3 = o1 + o2;

				z1 = z2, o1 = o2;
				z2 = z3, o2 = o3;
			}
		}

		cout << z3 << ' ' << o3 << endl;

		z1 = 1, z2 = 0, o1 = 0, o2 = 1;
	}

	return 0;
}