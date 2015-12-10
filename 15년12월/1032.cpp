#include <string>
#include <iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	string a, b;
	cin >> a;
	int size = a.size();
	for (int i = 0; i < n - 1; ++i)
	{
		cin >> b;

		for (int j = 0; j < size; ++j)
		{
			if (a.at(j) != b.at(j))
			{
				a.at(j) = '?';
			}
		}
	}

	cout << a;

	return 0;
}