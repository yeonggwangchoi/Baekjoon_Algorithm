#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	cin.tie(nullptr);
	ios::sync_with_stdio(false);

	int x1, y1, r1, x2, y2, r2;
	int T, d;
	cin >> T;
	for (int i = 0; i < T; i++)
	{
		cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
		if (x2 == x1)
		{
			d = y2 - y1;
			if (d < 0) d *= -1;
		}
		if (y2 == y1)
		{
			d = x2 - x1;
			if (d < 0) d *= -1;
		}

		if()
	}
	
}