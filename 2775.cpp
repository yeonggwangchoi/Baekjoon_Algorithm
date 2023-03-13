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
		int sum = 1;
		int ck = 0, cn = 1;
		int j = 1;
		while (ck != k)
		{
			sum += j;
			if (cn == n) {
				cn = 1;
				ck++;
			}
			cn++;
		}
		cout << sum;
	}
}