#include<iostream>
using namespace std;

int main()
{
	char str[1000001];
	int i, max = 0, alpabet[26] = { 0, }, a = 0;

	cin >> str;

	for (int i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == 'a' || str[i] == 'A')
		{
			alpabet[0]++;
		}
		else if (str[i] == 'b' || str[i] == 'B')
		{
			alpabet[1]++;
		}
		else if (str[i] == 'c' || str[i] == 'C')
		{
			alpabet[2]++;
		}
		else if (str[i] == 'd' || str[i] == 'D')
		{
			alpabet[3]++;
		}
		else if (str[i] == 'E' || str[i] == 'e')
		{
			alpabet[4]++;
		}
		else if (str[i] == 'f' || str[i] == 'F')
		{
			alpabet[5]++;
		}
		else if (str[i] == 'g' || str[i] == 'G')
		{
			alpabet[6]++;
		}
		else if (str[i] == 'h' || str[i] == 'H')
		{
			alpabet[7]++;
		}
		else if (str[i] == 'i' || str[i] == 'I')
		{
			alpabet[8]++;
		}
		else if (str[i] == 'j' || str[i] == 'J')
		{
			alpabet[9]++;
		}
		else if (str[i] == 'k' || str[i] == 'K')
		{
			alpabet[10]++;
		}
		else if (str[i] == 'l' || str[i] == 'L')
		{
			alpabet[11]++;
		}
		else if (str[i] == 'm' || str[i] == 'M')
		{
			alpabet[12]++;
		}
		else if (str[i] == 'n' || str[i] == 'N')
		{
			alpabet[13]++;
		}
		else if (str[i] == 'o' || str[i] == 'O')
		{
			alpabet[14]++;
		}
		else if (str[i] == 'p' || str[i] == 'P')
		{
			alpabet[15]++;
		}
		else if (str[i] == 'q' || str[i] == 'Q')
		{
			alpabet[16]++;
		}
		else if (str[i] == 'r' || str[i] == 'R')
		{
			alpabet[17]++;
		}
		else if (str[i] == 's' || str[i] == 'S')
		{
			alpabet[18]++;
		}
		else if (str[i] == 't' || str[i] == 'T')
		{
			alpabet[19]++;
		}
		else if (str[i] == 'u' || str[i] == 'U')
		{
			alpabet[20]++;
		}
		else if (str[i] == 'v' || str[i] == 'V')
		{
			alpabet[21]++;
		}
		else if (str[i] == 'w' || str[i] == 'W')
		{
			alpabet[22]++;
		}
		else if (str[i] == 'x' || str[i] == 'X')
		{
			alpabet[23]++;
		}
		else if (str[i] == 'y' || str[i] == 'Y')
		{
			alpabet[24]++;
		}
		else if (str[i] == 'z' || str[i] == 'Z')
		{
			alpabet[25]++;
		}
	}
	for (i = 0; i < 26; i++)
	{
		if (max < alpabet[i])
		{
			max = alpabet[i];
		}
	}

	for (i = 0; i < 26; i++)
	{
		if (max == alpabet[i])
		{
			a++;
		}

	}
	for (i = 0; i < 26; i++)
	{
		if (a == 1)
		{
			if (max == alpabet[i])
			{
				cout << (char)(i + 65) << endl;
				return 0;
			}
		}
		else if (a != 1)
		{
			cout << "?" << endl;
			return 0;
		}
	}
}