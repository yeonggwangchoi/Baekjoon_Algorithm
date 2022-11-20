#include <iostream>
#include <vector>
using namespace std;

int main()
{
	cin.tie(nullptr);
	cout.tie(nullptr);
	ios::sync_with_stdio(false);
	while (true)
	{
		int n;
		cin >> n;
		if (n == 0)
			break;
		if (n == 1) {
			cout << "1\n";
		}
		else{
			vector<bool> v(2 * n + 1, true);

			for (int i = 2; i * i <= 2 * n + 1; i++)
			{
				if (v[i])
					for (int j = i * i; j <= 2 * n; j += i)
						v[j] = false;
			}
			int cnt = 0;
			for (int i = n + 1; i <= 2 * n; i++) {
				if (v[i] == true)
					cnt++;
			}
			cout << cnt << "\n";
		}
	}
}

