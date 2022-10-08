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

	for (int i = 0; i < T; i++) {
		vector<int> v;
		for (int j = 0; j < 5; j++) {
			int num;
			cin >> num;
			v.push_back(num);
		}
		sort(v.begin(), v.end(), greater<int>());
		int sum = 0;
		if (v[1] - v[3] > 3) {
			cout << "KIN\n";
		}
		else {
			for (int j = 1; j < 4; j++) {
				sum += v[j];
			}
			cout << sum << "\n";
		}
	}
}