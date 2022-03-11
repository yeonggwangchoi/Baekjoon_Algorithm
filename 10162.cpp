#include<iostream>
using namespace std;

int main(void)
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int t, a = 0, b = 0, c = 0;
	cin >> t;
	if (t / 300 != 0)
	{
		a = t / 300;
		t = t % 300;
		
		if (t / 60 != 0)
		{
			b = t / 60;
			t = t % 60;
			if (t % 10 != 0)
			{
				cout << "-1";
				return 0;
			}
			else
			{
				c = t / 10;
			}
		}
		else
		{
			t = t % 60;
			if (t % 10 != 0)
			{
				cout << "-1";
				return 0;
			}
			else
			{
				c = t / 10;
			}
			
		}
	}
	else
	{
		if (t / 60 != 0)
		{
			b = t / 60;
			t = t % 60;

			if (t % 10 != 0)
			{
				cout << "-1";
				return 0;
			}
			else
			{
				c = t / 10;
			}
		}
		else
		{
			t = t % 60;
			if (t % 10 != 0)
			{
				cout << "-1";
				return 0;
			}
			else
			{
				c = t / 10;
			}
		}
	}
	cout << a << " " << b << " " << c;
	return 0;
}