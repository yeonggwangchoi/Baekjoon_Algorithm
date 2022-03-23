#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n ; i++)
	{
		for (int j = 0; j < 2 * n - 1; j++)
		{
			if (i > j || i + j > 2 * n - 2)
			{
				cout << " ";
			}
			else
			{
				cout << "*";
			}
		}
		cout << "\n";
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < 2 * n - 1; j++)
		{
			if (i*2>j)
			{
				cout << " ";
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