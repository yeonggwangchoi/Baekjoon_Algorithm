#include<iostream>
using namespace std;

int main()
{
	int c = 0, casenum, total = 0;
	char ox[80];

	cin >> casenum;

	for (int i = 0; i < casenum; i++)
	{
		cin >> ox;
		for (int i = 0; ox[i] != '\0'; i++)
		{
			if (ox[i] == 79)
			{
				c++;
			}
			else
			{
				c = 0;
			}
			total += c;
		}
		cout << total << endl;
		c = 0;
		total = 0;
	}
	return 0;
}