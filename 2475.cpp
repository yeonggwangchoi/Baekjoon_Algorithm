#include <iostream>
using namespace std;

int main(void)
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int a[5], i, b = 0;
	
	for (i = 0; i < 5; i++)
	{
		cin >> a[i];
		a[i] = a[i] * a[i];
		b += a[i];
	}
	cout << b % 10 << "\n";

	return 0;
}