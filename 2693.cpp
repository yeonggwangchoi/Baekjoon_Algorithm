#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	cin.tie(nullptr);
	cout.tie(nullptr);
	ios::sync_with_stdio(false);

	int T;
	cin >> T;

	int num[10] = { 0, };

	for (int i = 0; i < T; i++) {
		for (int j = 0; j < 10; j++) {
			cin >> num[j];
		}
		sort(num, num + 10, greater<int>());

		cout << num[2] << "\n";
	}
}