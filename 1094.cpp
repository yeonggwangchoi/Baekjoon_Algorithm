#include <iostream>
#include <vector>
using namespace std;

int main()
{
	bool bnum[8]={0};
	int anum[4] = { 1,2,4,8};
	int bnum[4] = { 1,2,4,8 };
	int X;
	cin >> X;
	vector <int> v;
	int sum = 0;

	for (int i = 2;; i++)
	{
		if (X == 64)
			cout << '1';
		else if (X == 32)
			cout << '1';
		else
		{
			if (X > 16)
			{
				sum += 16;
				for (int i = 0; i < 4; i++)
				{
					if (sum == X)
					{
						break;
					}
					sum += anum[j];
				}
			}
		}
	}
}