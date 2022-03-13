#include<iostream>
using namespace std;

int main(void)
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int a, b, c, d, p;

	cin >> a >> b >> c >> d >> p;

	if (p <= c)
	{
		if (a * p > b)
		{
			cout << b;
		}
		else
		{
			cout << a * p;
		}
	}
	else
	{
		if (a * p > b + (p - c) * d)
		{
			cout << b + (p - c) * d;
		}
		else
		{
			cout << a * p;
		}
	}

	return 0;
}