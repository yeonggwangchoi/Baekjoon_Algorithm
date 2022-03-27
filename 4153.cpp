#include <iostream>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int max, a, b, c, nom1 = 0, nom2 = 0;
	for (;;)
	{
		cin >> a >> b >> c;
		if (a + b + c == 0)
			break;
		else
		{
			max = 0;
			if (max < a)
			{
				max = a;
				nom1 = b;
				nom2 = c;
			}
			if (max < b)
			{
				max = b;
				nom1 = a;
				nom2 = c;
			}	
			if (max < c)
			{
				max = c;
				nom1 = a;
				nom2 = b;
			}
			if (max * max == nom1 * nom1 + nom2 * nom2)
			{
				cout << "right" << "\n";
			}
			else
			{
				cout << "wrong" << "\n";
			}
		}
	}
}