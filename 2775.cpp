#include <iostream>
using namespace std;

int main()
{
	int T;
	cin >> T;
	for (int i = 0; i < T; i++)
	{
		int k, n;
		cin >> k >> n;
		
		int sum[15] = { 0 };
		int num = 0;
		for (int j = 0; j < k; j++)
		{
			for ( l = 1; l <= n; l++)
			{
				num += l;
			}
		}

		cout << sum[n] << "\n";
	}
}