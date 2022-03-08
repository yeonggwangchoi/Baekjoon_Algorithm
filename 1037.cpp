#include <iostream>
using namespace std;

int main(void)
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int nn, *n, min = 1000000, max = 1;
	cin >> nn;
	n = new int[nn];
	for (int i = 0; i < nn; i++)
	{
		cin >> n[i];
	}
	for (int i = 0; i < nn; i++)
	{
		if (n[i] < min)
		{
			min = n[i];
		}
		if (n[i] > max)
		{
			max = n[i];
		}
	}
	cout << min * max << "\n";

	return 0;
}