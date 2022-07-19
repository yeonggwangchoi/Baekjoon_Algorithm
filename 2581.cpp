#include <iostream>
using namespace std;
int main()
{
	cin.tie(nullptr);
	ios::sync_with_stdio(false);

	int M, N, a = 0, min=10000, sum = 0;
	cin >> M >> N;
	for (int i = M; i <= N; i++)
	{
		if (i != 1)
		{
			for (int j = 2; j < i; j++)
			{
				if (i % j == 0)
					a++;
			}
			if (a == 0)
			{
				if (min > i)
				{
					min = i;
				}
				sum += i;
			}
		}
		a = 0;
	}
	if (sum == 0)
	{
		cout << "-1\n";
	}
	else
	{
		cout << sum << "\n";
		cout << min << "\n";
	}
}