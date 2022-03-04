#include<iostream>
using namespace std;

int main()
{
	int n, total = 0, s;

	cin >> n;
	if (n / 5 == 0)
	{
		cout << "-1" << endl;
		return 0;
	}
	else
	{
		if (n % 5 == 0)
		{
			cout << n / 5 << endl;
		}
		else if (n % 5 == 1)
		{
			s = n / 5 - 1;
			if (n != 6)
			{
				total += s;
			}
			n = n - (s * 5);
			if (n % 3 == 0)
			{
				total += n / 3;
			}
		}
		else if (n % 5 == 2)
		{
			total += n / 3;
		}
		else if (n % 5 == 3)
		{
			total += n / 5;
			n = n % 5;
			if ((n % 5) % 3 == 0)
			{
				total += n / 3;
			}
		}
		else if (n % 5 == 4)
		{
			s = n / 5 - 1;
			if (n != 9)
			{
				total += s;
			}
			n = n - (s * 5);

			if (n % 3 == 0)
			{
				total += n / 3;
			}
		}
	}

	cout << total << endl;

	return 0;
}