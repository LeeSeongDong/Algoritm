#include <iostream>

using namespace std;

int main()
{
	int num;
	cin >> num;

	for (int q = 0; q < num; ++q)
	{
		int x1, x2, y1, y2;
		int a, b, r;
		cin >> x1 >> y1 >> x2 >> y2;

		int n;
		cin >> n;

		int count = 0;
		for (int i = 0; i < n; ++i)
		{
			bool flag1 = false, flag2 = false;
			cin >> a >> b >> r;

			if (((x1 - a)*(x1 - a) + (y1 - b)*(y1 - b)) < r*r)
			{
				flag1 = true;
			}

			if (((x2 - a)*(x2 - a) + (y2 - b)*(y2 - b)) < r*r)
			{
				flag2 = true;
			}

			if ((flag1&&!flag2) || (!flag1&&flag2))
			{
				++count;
			}
		}

		cout << count << endl;
	}

	return 0;
}