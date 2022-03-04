#include<iostream>
using namespace std;

int main()
{
	int a, b, c, total;

	cin >> a;
	cin >> b;
	cin >> c;

	if (a == b && b == c)
	{
		total = a * 1000 + 10000;
	}
	else if (a == b || a == c)
	{
		total = a * 100 + 1000;
	}
	else if (b == c)
	{
		total = b * 100 + 1000;
	}
	else if (a != b && a != c && b != c)
	{
		if (a > b && b > c)
			total = a * 100;
		else if (a > b && c > b)
			total = a * 100;
		else if (b > a && a > c)
			total = b * 100;
		else if (b > c && c > a)
			total = b * 100;
		else if (c > a && a > b)
			total = c * 100;
		else if (c > b && b > a)
			total = c * 100;
	}

	cout << total << endl;

	return 0;
}