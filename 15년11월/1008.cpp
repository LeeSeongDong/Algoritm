#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
	double a, b;

	cin >> a >> b;

	double c;
	c = a / b;
	printf("%.20lf", c);

	return 0;
}