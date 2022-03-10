#include <iostream>
using namespace std;

int main(void)
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int b1, b2, b3, c, s, sb, sm ;
	cin >> b1 >> b2 >> b3 >> c >> s;

	if (b1 < b2 && b2 < b3)
	{
		sb = b1;
	}
	if (b1 < b2 && b3 < b2)
	{
		if (b1 < b3)
		{
			sb = b1;
		}
		else
		{
			sb = b3;
		}
		
	}
	if (b1 > b2 && b2 > b3)
	{
		sb = b3;
	}
	if (b2 < b1 && b1< b3)
	{
		sb = b2;
	}
	if (b2 < b1 && b3 < b1)
	{
		if (b2 < b3)
		{
			sb = b2;
		}
		else
		{
			sb = b3;
		}
		sb = b2;
	}
	if (c > s)
	{
		sm = s;
	}
	if (c < s)
	{
		sm = c;
	}
	cout << sb << sm;
	sb = sb + sm;
	cout << sb-50;
	return 0;
}