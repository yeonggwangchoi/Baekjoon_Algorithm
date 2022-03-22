#include<iostream>
using namespace std;
int main(void)
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int num, i, j;
	cin >> num;

	for (i = 0; i < num; i++)
	{
		for (j = 0; j < 2 * num-1 ; j++)
		{
			if (i > j)
				cout << " ";

			else if (i + j < 2 * num - 1)
				cout << "*";
		}
		cout << "\n";
	}

	return 0;
}
