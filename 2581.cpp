#include <iostream>
using namespace std;
int main()
{
	cin.tie(nullptr);
	ios::sync_with_stdio(false);

	int M, N, a = 0, min=10000, sum = 0;
	cin >> N >> M;

	for (int i = N; i <= M; i++)
	{
		for (int j = 2; j < M; j++)
		{
			if (i % j != 0)
			{
				a = 1;
			}
			else if(i % j == 0 && j != 1)
			{
				a = 0;
				break;
			}
		}
		if (a == 1)
		{
			if (min > i)
				min = i;
			sum += i;
		}
	}
	cout << sum<< '\n' << min;
}