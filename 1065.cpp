#include <iostream>
using namespace std;

bool d(char *x)
{
	int tmp[3] = { 0 };
	if (x[1] == NULL)
	{
		for (int i = 0; i < 1; i++)
		{
			tmp[i] = x[i] - '0';
		}
	}
	else if (x[2] == NULL)
	{
		for (int i = 0; i < 2; i++)
		{
			tmp[i] = x[i] - '0';
		}
	}
	else if (x[3] == NULL)
	{
		for (int i = 0; i < 3; i++)
		{
			tmp[i] = x[i] - '0';
		}
	}
}

int main()
{
	int N;
	cin >> N;
	char str[5] = N;
	for (int i = 0; i < N; i++)
	{
		d()
	}
}