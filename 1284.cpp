#include <iostream>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int N = 1, n = 1;

	while (1)
	{
		cin >> n;
		N = n;

		int i = 1;

		if (N / 1000 != 0)
			i++;
		if (N / 100 != 0)
			i++;
		if (N / 10 != 0)
			i++;
		int num=1;
		if (i == 4) num = 1000;
		if (i == 3) num = 100;
		if (i == 2) num = 10;
		int sum=i+1;

		for (int j = 0; j < i; j++)
		{
			if (N / num == 1)
			{
				sum += 2;
			}
			else if (N / num == 0)
			{
				sum += 4;
			}
			else
			{
				sum += 3;
			}
			N = N % num;
			num /= 10;
		}
		if (n != 0)cout << sum << "\n";
		else break;
	}
	return 0;
}