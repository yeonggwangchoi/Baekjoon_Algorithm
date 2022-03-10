#include <iostream>
using namespace std;

int main(void)
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int a, b, c, min=1000000, max=1;
	cin >> a >> b >> c;
	if (a > b && a > c)
	{
		max = a;
		if (b > c)
		{
			min = c;
		}
		else
		{
			min = b;
		}
	}
	else if (a > b && a < c)
	{
		max = c;
		min = b;
	}
	else if (a < b && a > c)
	{
		max = b;
		min = c;
	}
	else if (a < b && b < c)
	{
		max = c;
		min = a;
	}
	else if (a < b && b > c)
	{
		max = b;
		if (a > c)
		{
			min = c;
		}
		else
		{
			min = a;
		}
	}

	if (max == a && min == b)
	{
		cout << b << " " << c << " " << a;
	}
	if (max == a && min == c)
	{
		cout << c << " " << b << " " << a;
	}
	if (max == b && min == a)
	{
		cout << a << " " << c << " " << b;
	}
	if (max == b && min == c)
	{
		cout << c << " " << a << " " << b;
	}
	if (max == c && min == b)
	{
		cout << b << " " << a << " " << c;
	}
	if (max == c && min == a)
	{
		cout << a << " " << b << " " << c;
	}
	return 0;
}