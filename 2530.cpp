#include <iostream>
using namespace std;

int main(void)
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int a, b, c, d;
	cin >> a >> b >> c;
	cin >> d;

	c += d % 60;
	b += d / 60;

	if (c > 59)
	{
		b += c / 60;
		c = c % 60;
	}
	if (b > 59)
	{
		a += b / 60;
		b = b % 60;
	}
	if (a > 23)
	{
		a = a % 24;
	}
	cout << a << " " << b << " " << c;

	return 0;
}