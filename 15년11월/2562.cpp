#include <iostream>

using namespace std;

int main()
{
	int num[9];

	int max = 0;
	int index;
	for (int i = 0; i < 9; ++i)
	{
		cin >> num[i];

		if (num[i] > max)
		{
			max = num[i];
			index = i;
		}
	}

	cout << max << endl << index + 1 << endl;


	return 0;
}