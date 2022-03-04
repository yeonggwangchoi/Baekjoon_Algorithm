#include<iostream>
using namespace std;

int main()
{
	int i;
	char alpabet[101];
	int countAlpabet[26] = { -1,-1 ,-1 ,-1 ,-1 ,-1 ,-1 ,-1 ,-1 ,-1 ,-1 ,-1 ,-1,-1,-1 ,-1 ,-1 ,-1 ,-1 ,-1 ,-1 ,-1 ,-1 ,-1 ,-1 ,-1 };

	cin >> alpabet;
	for (i = 0; alpabet[i] != '\0'; i++)
	{
		if (alpabet[i] == 'a' && countAlpabet[0] == -1)
		{
			countAlpabet[0] = i;
		}
		else if (alpabet[i] == 'b' && countAlpabet[1] == -1)
		{
			countAlpabet[1] = i;
		}
		else if (alpabet[i] == 'c' && countAlpabet[2] == -1)
		{
			countAlpabet[2] = i;
		}
		else if (alpabet[i] == 'd' && countAlpabet[3] == -1)
		{
			countAlpabet[3] = i;
		}
		else if (alpabet[i] == 'e' && countAlpabet[4] == -1)
		{
			countAlpabet[4] = i;
		}
		else if (alpabet[i] == 'f' && countAlpabet[5] == -1)
		{
			countAlpabet[5] = i;
		}
		else if (alpabet[i] == 'g' && countAlpabet[6] == -1)
		{
			countAlpabet[6] = i;
		}
		else if (alpabet[i] == 'h' && countAlpabet[7] == -1)
		{
			countAlpabet[7] = i;
		}
		else if (alpabet[i] == 'i' && countAlpabet[8] == -1)
		{
			countAlpabet[8] = i;
		}
		else if (alpabet[i] == 'j' && countAlpabet[9] == -1)
		{
			countAlpabet[9] = i;
		}
		else if (alpabet[i] == 'k' && countAlpabet[10] == -1)
		{
			countAlpabet[10] = i;
		}
		else if (alpabet[i] == 'l' && countAlpabet[11] == -1)
		{
			countAlpabet[11] = i;
		}
		else if (alpabet[i] == 'm' && countAlpabet[12] == -1)
		{
			countAlpabet[12] = i;
		}
		else if (alpabet[i] == 'n' && countAlpabet[13] == -1)
		{
			countAlpabet[13] = i;
		}
		else if (alpabet[i] == 'o' && countAlpabet[14] == -1)
		{
			countAlpabet[14] = i;
		}
		else if (alpabet[i] == 'p' && countAlpabet[15] == -1)
		{
			countAlpabet[15] = i;
		}
		else if (alpabet[i] == 'q' && countAlpabet[16] == -1)
		{
			countAlpabet[16] = i;
		}
		else if (alpabet[i] == 'r' && countAlpabet[17] == -1)
		{
			countAlpabet[17] = i;
		}
		else if (alpabet[i] == 's' && countAlpabet[18] == -1)
		{
			countAlpabet[18] = i;
		}
		else if (alpabet[i] == 't' && countAlpabet[19] == -1)
		{
			countAlpabet[19] = i;
		}
		else if (alpabet[i] == 'u' && countAlpabet[20] == -1)
		{
			countAlpabet[20] = i;
		}
		else if (alpabet[i] == 'v' && countAlpabet[21] == -1)
		{
			countAlpabet[21] = i;
		}
		else if (alpabet[i] == 'w' && countAlpabet[22] == -1)
		{
			countAlpabet[22] = i;
		}
		else if (alpabet[i] == 'x' && countAlpabet[23] == -1)
		{
			countAlpabet[23] = i;
		}
		else if (alpabet[i] == 'y' && countAlpabet[24] == -1)
		{
			countAlpabet[24] = i;
		}
		else if (alpabet[i] == 'z' && countAlpabet[25] == -1)
		{
			countAlpabet[25] = i;
		}
	}

	for (i = 0; i < 26; i++)
	{
		cout << countAlpabet[i] << " ";
	}

	return 0;
}