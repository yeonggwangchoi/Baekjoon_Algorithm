#include <iostream>
using namespace std;

int main()
{
	int X;
	cin >> X;

	int j = 1;
	while (X > j)
	{
		X -= j;
		j++;
	}
	int a, b;
	if (j % 2 == 0)
	{
		a = 0;
		b = j + 1;
	}
	else
	{
		a = j + 1;
		b = 0;
	}
	for (int i = 0; i < X; i++)
	{
		if (j % 2 == 0)
		{
			a++;
			b--;
		}
		else
		{
			a--;
			b++;
		}

	}
	cout << a << "/" << b;
}