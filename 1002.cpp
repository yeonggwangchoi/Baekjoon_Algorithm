#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	cin.tie(nullptr);
	ios::sync_with_stdio(false);

	double x1, y1, r1, x2, y2, r2, x, y;
	int n;
	cin >> n;
	
	for(int i = 0; i < n; i++)
	{
		cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;

		if (x1 < x2)
			x = x2 - x1;
		else
			x = x1 - x2;
		if (y1 < y2)
			y = y2 - y1;
		else
			y = y1 - y2;

		if (r1 == r2 && x1 == x2 && y1 == y2)
		{
			cout << "-1";
		}
		else
		{
			if (r1 + r2 < sqrt(x * x + y * y) || sqrt(x * x + y * y) < r1 - r2 || sqrt(x * x + y * y) == 0)
			{
				cout << "0" << "\n";
			}
			else if (r1 - r2 == sqrt(x * x + y * y) || r1 + r2 == sqrt(x * x + y * y))
				cout << "1" << "\n";
			else if (r1 - r2 < sqrt(x * x + y * y) && sqrt(x * x + y * y) < r1 + r2)
				cout << "2" << "\n";
		}
	}
}