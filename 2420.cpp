#include <iostream>
using namespace std;

int main(void)
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	long long n, m;
	cin >> n >> m;
	if (n - m < 0)
	{
		cout << -1 * (n - m) << "\n";
	}
	else
	{
		cout << n - m << "\n";
	}

	return 0;
}