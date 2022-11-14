#include <iostream>
#include <vector>
using namespace std;

int main()
{
	cin.tie(nullptr);
	cout.tie(nullptr);
	ios::sync_with_stdio(false);

	int n, x;
	cin >> n >> x;

	vector<int> v(n);
	
	for (int i = 0; i < n; i++) {
		cin >> v[i];
	}
	int i = 0;
	while (true)
	{
		if (v[i % n] < x) {
			cout << i % n + 1;
			break;
		}
		x++;
		i++;
	}
}