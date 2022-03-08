#include <iostream>
using namespace std;

int main(void)
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int l, p, s, a[5];
	cin >> l >> p;

	s = l * p;

	for (int i = 0; i < 5; i++)
	{
		cin >> a[i];

		a[i] = a[i] - s;
	}
	for (int i = 0; i < 5; i++)
	{
		cout << a[i]<<" ";
	}
	
	return 0;
}