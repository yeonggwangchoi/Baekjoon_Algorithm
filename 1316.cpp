#include<iostream>
using namespace std;

int main()
{
	int strnum, i, j, checker = 0, lastCkecker = 0;
	char str[101];

	cin >> strnum;

	for (j = 0; j < strnum; j++)
	{
		cin >> str;
		int alpabet[26] = { 0, };
		for (i = 0; str[i] != '\0'; i++)
		{
			if (str[i] == 'a')
			{
				alpabet[0]++;
				if (str[i + 1] == 'a')
				{
					alpabet[0]--;
				}
			}
			else if (str[i] == 'b')
			{
				alpabet[1]++;
				if (str[i + 1] == 'b')
				{
					alpabet[1]--;
				}
			}
			else if (str[i] == 'c')
			{
				alpabet[2]++;
				if (str[i + 1] == 'c')
				{
					alpabet[2]--;
				}
			}
			else if (str[i] == 'd')
			{
				alpabet[3]++;
				if (str[i + 1] == 'd')
				{
					alpabet[3]--;
				}
			}
			else if (str[i] == 'e')
			{
				alpabet[4]++;
				if (str[i + 1] == 'e')
				{
					alpabet[4]--;
				}
			}
			else if (str[i] == 'f')
			{
				alpabet[5]++;
				if (str[i + 1] == 'f')
				{
					alpabet[5]--;
				}
			}
			else if (str[i] == 'g')
			{
				alpabet[6]++;
				if (str[i + 1] == 'g')
				{
					alpabet[6]--;
				}
			}
			else if (str[i] == 'h')
			{
				alpabet[7]++;
				if (str[i + 1] == 'h')
				{
					alpabet[7]--;
				}
			}
			else if (str[i] == 'i')
			{
				alpabet[8]++;
				if (str[i + 1] == 'i')
				{
					alpabet[8]--;
				}
			}
			else if (str[i] == 'j')
			{
				alpabet[9]++;
				if (str[i + 1] == 'j')
				{
					alpabet[9]--;
				}
			}
			else if (str[i] == 'k')
			{
				alpabet[10]++;
				if (str[i + 1] == 'k')
				{
					alpabet[10]--;
				}
			}
			else if (str[i] == 'l')
			{
				alpabet[11]++;
				if (str[i + 1] == 'l')
				{
					alpabet[11]--;
				}
			}
			else if (str[i] == 'm')
			{
				alpabet[12]++;
				if (str[i + 1] == 'm')
				{
					alpabet[12]--;
				}
			}
			else if (str[i] == 'n')
			{
				alpabet[13]++;
				if (str[i + 1] == 'n')
				{
					alpabet[13]--;
				}
			}
			else if (str[i] == 'o')
			{
				alpabet[14]++;
				if (str[i + 1] == 'o')
				{
					alpabet[14]--;
				}
			}
			else if (str[i] == 'p')
			{
				alpabet[15]++;
				if (str[i + 1] == 'p')
				{
					alpabet[15]--;
				}
			}
			else if (str[i] == 'q')
			{
				alpabet[16]++;
				if (str[i + 1] == 'q')
				{
					alpabet[16]--;
				}
			}
			else if (str[i] == 'r')
			{
				alpabet[17]++;
				if (str[i + 1] == 'r')
				{
					alpabet[17]--;
				}
			}
			else if (str[i] == 's')
			{
				alpabet[18]++;
				if (str[i + 1] == 's')
				{
					alpabet[18]--;
				}
			}
			else if (str[i] == 't')
			{
				alpabet[19]++;
				if (str[i + 1] == 't')
				{
					alpabet[19]--;
				}
			}
			else if (str[i] == 'u')
			{
				alpabet[20]++;
				if (str[i + 1] == 'u')
				{
					alpabet[20]--;
				}
			}
			else if (str[i] == 'v')
			{
				alpabet[21]++;
				if (str[i + 1] == 'v')
				{
					alpabet[21]--;
				}
			}
			else if (str[i] == 'w')
			{
				alpabet[22]++;
				if (str[i + 1] == 'w')
				{
					alpabet[22]--;
				}
			}
			else if (str[i] == 'x')
			{
				alpabet[23]++;
				if (str[i + 1] == 'x')
				{
					alpabet[23]--;
				}
			}
			else if (str[i] == 'y')
			{
				alpabet[24]++;
				if (str[i + 1] == 'y')
				{
					alpabet[24]--;
				}
			}
			else if (str[i] == 'z')
			{
				alpabet[25]++;
				if (str[i + 1] == 'z')
				{
					alpabet[25]--;
				}
			}
		}

		for (i = 0; i < 26; i++)
		{
			if (alpabet[i] > 1)
			{
				checker = 0;
				break;
			}
			else
			{
				checker = 1;
			}
		}
		if (checker == 1)
		{
			lastCkecker++;
		}
	}

	cout << lastCkecker << endl;

	return 0;
}