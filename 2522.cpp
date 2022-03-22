#include<iostream>
using namespace std;
int main(void)
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int N;
	cin >> N;

	for (int i = 0; i < (2 * N)/2; i++)
	{
		for (int j = 0; j < 2 * N - 1; j++)
		{
			if ((2 * N - 1) / 2 == i + j)
			{
				for (int z = 0; z < 2 * (i+1) - 1; z++)
				{
					cout << "*";
				}
			}
			else if((2 * N - 1) / 2 > i + j)
			{
				cout << " ";
			}
		}
		cout << "\n";
	}
	for (int i = 1; i < 2 * N - 1; i++)
	{
		for (int j = 0; j < 2 * N - 1; j++)
		{
			if (i > j)
				cout << " ";
			else if (i + j >= 2 * N - 1)
			{
				break;
			}
			else
			{
				cout << "*";
			}
		}
		cout << "\n";
	}
	

	return 0;
}
