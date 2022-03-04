#include<iostream>
using namespace std;

int main()
{
	int num, i, sum = 0;
	char str[16]{ 0, };
	cin >> str;
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == 'A' || str[i] == 'B' || str[i] == 'C')
		{
			num = 2;
		}
		else if (str[i] == 'D' || str[i] == 'E' || str[i] == 'F')
		{
			num = 3;
		}
		else if (str[i] == 'G' || str[i] == 'H' || str[i] == 'I')
		{
			num = 4;
		}
		else if (str[i] == 'J' || str[i] == 'K' || str[i] == 'L')
		{
			num = 5;
		}
		else if (str[i] == 'M' || str[i] == 'N' || str[i] == 'O')
		{
			num = 6;
		}
		else if (str[i] == 'P' || str[i] == 'Q' || str[i] == 'R' || str[i] == 'S')
		{
			num = 7;
		}
		else if (str[i] == 'T' || str[i] == 'U' || str[i] == 'V')
		{
			num = 8;
		}
		else if (str[i] == 'W' || str[i] == 'X' || str[i] == 'Y' || str[i] == 'Z')
		{
			num = 9;
		}
		num = num + 1;

		sum += num;
	}

	cout << sum << endl;

	return 0;
}