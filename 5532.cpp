#include <iostream>
using namespace std;

int main(void)
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int l, a, b, c, d, s1, s2;
	cin >> l >> a >> b >> c >> d;
	s1 = a / c;
	s2 = b / d;
	if (a % c != 0)
	{
		s1++;
	}
	if (b % d != 0)
	{
		s2++;
	}

	if (s1 > s2)
	{
		cout << l - s1;
	}
	else
	{
		cout << l - s2;
	}

	return 0;
}