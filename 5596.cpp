#include <iostream>
using namespace std;

int main(void)
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int a[4], b[4], S = 0, T = 0;

	for (int i = 0; i < 4; i++)
	{
		cin >> a[i];
		S += a[i];
	}
	for (int i = 0; i < 4; i++)
	{
		cin >> b[i];
		T += b[i];
	}
	if (S > T)
	{
		cout << S;
	}
	else if (S < T)
	{
		cout << T;
	}
	else if (S == T)
	{
		cout << S;
	}
	return 0;
}