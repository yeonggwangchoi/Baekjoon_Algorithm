#include<iostream>
using namespace std;

int main(void)
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	
	string a, b;
	cin >> a;

	for (int i = 0; a[i] != '\0'; i++)
	{
		if (a[i] - 48 == 0)
		{
			b.push_back('0');
			b.push_back('0');
			b.push_back('0');
		}
		if (a[i] - 48 == 1)
		{
			b.push_back('0');
			b.push_back('0');
			b.push_back('1');
		}
		if (a[i] - 48 == 2)
		{
			b.push_back('0');
			b.push_back('1');
			b.push_back('0');
		}
		if (a[i] - 48 == 3)
		{
			b.push_back('0');
			b.push_back('1');
			b.push_back('1');
		}
		if (a[i] - 48 == 4)
		{
			b.push_back('1');
			b.push_back('0');
			b.push_back('0');
		}
		if (a[i] - 48 == 5)
		{
			b.push_back('1');
			b.push_back('0');
			b.push_back('1');
		}
		if (a[i] - 48 == 6)
		{
			b.push_back('1');
			b.push_back('1');
			b.push_back('0');
		}
		if (a[i] - 48 == 7)
		{
			b.push_back('1');
			b.push_back('1');
			b.push_back('1');
		}
	}
	if (b[0] - 48 == 0 && b[1] - 48 == 0 && b[2] - 48 == 0)
	{
		cout << b[2];
		return 0;
	}
	else if (b[0] - 48 == 0 && b[1] - 48 == 0)
	{
		for (int i = 2; b[i] != '\0'; i++)
		{
			cout << b[i];
		}
		return 0;
	}
	else if (b[0]-48 == 0)
	{
		for (int i = 1; b[i] != '\0'; i++)
		{
			cout << b[i];
		}
		return 0;
	}
	else
	{
		cout << b;
		return 0;
	}
}