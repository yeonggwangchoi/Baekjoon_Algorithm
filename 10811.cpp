#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int n, m;
	cin >> n >> m;
	vector<int> v1(n + 1);
	int num[101];
	for (auto i = 1; i <= n; ++i)
		v1[i] = i;
	for (auto t = 0; t < m; t++) {
		int i, j;
		cin >> i >> j;
		int u = j;
		for (auto i = 1; i <= n; ++i)
			num[i] = v1[i];

		for (auto y = i; y <= j; y++) {
			v1[y] = num[u];
			u--;
		}
	}
	
	for (auto i = 1; i <= n; ++i)
		cout << v1[i] << " ";
}