#include <iostream>
using namespace std;

int main(void)
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int a, b, c, d, sum = 0, sub = 0;
	cin >> a >> b >> c >> d;
	if(a)
	if (a > c)
	{
		sub += c;
	}
	else
	{
		sub += a;
	}
	if (b > d)
	{
		sub += d;
	}
	else
	{
		sub += b;
	}
	cout << sum;

	return 0;
}