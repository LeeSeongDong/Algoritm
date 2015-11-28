#include <iostream>
#include <string>

using namespace std;

int main()
{
	string a;
	getline(cin, a);
	int n = a.size();
	int count = 0;
	bool flag = false;
	for (int i = 0; i < n; ++i)
	{
		if (a.at(i) != ' ')
		{
			flag = true;
		}
		else if (a.at(i) == ' ' && flag)
		{
			++count;
			flag = false;
		}
	}

	if (flag)
	{
		++count;
	}

	cout << count;

	return 0;
}