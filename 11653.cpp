#include <iostream>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int n, m;
	cin >> n;
	if (n == 1)
		return 0;
	else
	{
		for (int i = 2; n/i!=0; i++)
		{
			if (n % i == 0)
			{
				n = n / i;
				cout << i <<"\n";
				i = 1;
			}	
			else
				n = n;
		}
	}
}