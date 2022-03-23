#include<iostream>
using namespace std;
int main(void)
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int N;
	cin >> N;

	for (int i = 0; i < (2 * N)/2; i++)
	{
		for (int j = 0; j < 2 * N; j++)
		{
			if (j <= i || j + i >= 2*N-1)
				cout << "*";
			else
				cout << " ";
		}
		cout << "\n";
	}
	for (int i = 1; i < N; i++)
	{
		for (int j = 1; j < 2 * N+1; j++)
		{
			if (i + j <= N || j>N+i)
				cout << "*";
			else
				cout << " ";
		}
		cout << "\n";
	}
	return 0;
}
