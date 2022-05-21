#include <iostream>
using namespace std;
int main()
{
	cin.tie(nullptr);
	ios::sync_with_stdio(false);

	int M, N, a = 0, min=10000, sum = 0;
	cin >> M >> N;

	for (int i = M; i < N; i++)
	{
		for (int j = 2; j < N; j++)
		{
			if (i % j == 0)a++;
			cout << a << endl;
		}
		if (a == 0) sum += i;
		cout << sum << endl;
		a = 0;
	}
}