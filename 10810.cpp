#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int n, m;
	cin >> n >> m;
	vector<int> v(n + 1);
	for (auto t = 1; t <= m; ++t) {
		int i, j, k;
		cin >> i >> j >> k;
		for (auto y = i; y <= j; ++y) {
			v[y] = k;
		}
	}
	for (auto i = 1; i <= n; ++i) {
		cout << v[i] << " ";
	}
}