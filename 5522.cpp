#include <iostream>
using namespace std;

int main(void)
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int a[5], s = 0;
	for (int i = 0; i < 5; i++)
	{
		cin >> a[i];
		s += a[i];
	}
	cout << s;

	return 0;
}