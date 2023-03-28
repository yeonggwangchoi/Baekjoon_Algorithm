#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int n, m;
	cin >> n >> m;

	vector<int> v1(n + 1);

	for (auto i = 1; i <= n; ++i)
		v1[i] = i;

	for (auto t = 0; t < m; ++t) {
		int i, j, k;
		cin >> i >> j >> k;
	
		for (auto y = v1.begin() + i; y <= v1.begin() + j; ++y) {
			v1.insert(v1.begin() + j, *y);
		}
	}
	for (auto i = 1; i <= n; ++i)
		cout << v1[i];
}