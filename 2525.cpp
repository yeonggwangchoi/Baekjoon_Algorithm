#include<iostream>
using namespace std;

int main()
{
	int h, m, c, a, b;

	cin >> h;
	cin >> m;
	cin >> c;

	a = (m + c) / 60;
	b = (m + c) % 60;

	if (a < 1)
	{
		m = m + c;
	}
	else if (a >= 1)
	{
		m = b;
		h = h + a;
	}
	if (h >= 24)
	{
		h = (24 - h) * -1;
	}

	cout << h << " " << m << endl;

	return 0;
}