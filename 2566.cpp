#include <iostream>
#include <vector>
using namespace std;

int main()
{
	cin.tie(nullptr);
	cout.tie(nullptr);
	ios::sync_with_stdio(false);

	vector<vector<int>> v(9, vector<int>(9));
	int max = -200000000;
	int maxi = 0;
	int maxj = 0;
	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			cin >> v[i][j];
			if (max < v[i][j])
			{
				max = v[i][j];
				maxi = i;
				maxj = j;
			}
		}
	}
	cout << max << "\n" << maxi + 1 << " " << maxj + 1;
}