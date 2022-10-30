#include <iostream>
using namespace std;

int main()
{
	int M, N;
	cin >> M >> N;
	int sum = 0;
	int min = 10001;
	if (M == 1)
	{
		sum += 1;
		min = 1;
	}
	for (int i = M; i <= N; i++) {
		for (int j = 1; j < i; j++) {
			if (i / j == j && i % j == 0) {
				sum += i;
				if (min > i)
					min = i;
			}
		}
	}
	if (sum == 0)
		cout << "-1";
	else
		cout << sum << "\n" << min;
}