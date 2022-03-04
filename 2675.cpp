#include<iostream>
using namespace std;

int main()
{
	int testcase, i, banbok, j, k;
	char s[21];
	cin >> testcase;
	for (i = 0; i < testcase; i++)
	{
		cin >> banbok;
		cin >> s;
		for (j = 0; s[j] != '\0'; j++)
		{
			for (k = 0; k < banbok; k++)
			{
				cout << s[j];
			}
		}
		cout << endl;
	}

	return 0;
}