#include<iostream>
using namespace std;

int main()
{
	int i, c = 0;
	char str[101];

	cin >> str;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == 'c')
		{
			if (str[i + 1] == '=')
			{
				c--;
			}
			else if (str[i + 1] == '-')
			{
				c--;
			}
		}
		else if (str[i] == 'd')
		{
			if (str[i + 1] == 'z')
			{
				if (str[i + 2] == '=')
				{
					c--;
				}
			}
			else if (str[i + 1] == '-')
			{
				c--;
			}
		}
		else if (str[i] == 'l')
		{
			if (str[i + 1] == 'j')
			{
				c--;
			}
		}
		else if (str[i] == 'n')
		{
			if (str[i + 1] == 'j')
			{
				c--;
			}
		}
		else if (str[i] == 's')
		{
			if (str[i + 1] == '=')
			{
				c--;
			}
		}
		else if (str[i] == 'z')
		{
			if (str[i + 1] == '=')
			{
				c--;
			}
		}
	}

	cout << i + c << endl;

	return 0;
}