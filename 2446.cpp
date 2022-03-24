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
			if (i > j)
			{
				cout << " ";
			}
			else if(i + j <= 2 * n - 2)
			{
				cout << "*";
			}
		}
		cout << "\n";
	}
	for (int i = 1; i < n; i++)
	{
		for (int j = 0; j < 2 * n - 1; j++)
		{
			if (( 2 * n - 1)/2 - i <= j&& j - i <= n - 1 )
			{
				cout << "*";
			}
			else if(j+i <= 2 * n && j-i<n)
			{
				cout << " ";
			}
		}
		cout << "\n";
	}

	return 0;
}