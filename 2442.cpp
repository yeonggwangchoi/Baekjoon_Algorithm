#include<iostream>
using namespace std;
int main(void)
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int num;
	cin >> num;
	
	for (int i = 0; i < num; i++)
	{
		for (int j = 0; j < 2*num-1; j++)
		{
			if ((2 * num - 1) / 2 == j + i)
				for (int z = 0; z < 2*(i+1)-1; z++)
				{
					cout << "*";
				}
			else if((2 * num - 1) / 2 > j + i)
				cout << " ";
		}
		cout << "\n";
	}

	return 0;
}
