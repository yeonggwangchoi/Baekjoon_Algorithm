#include <iostream>
#include<algorithm>
#include <vector>
using namespace std;

int main()
{
	cin.tie(nullptr);
	cout.tie(nullptr);
	ios::sync_with_stdio(false);

	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int p;
		cin >> p;
		int max = -20000000;
		string maxname = "";
		for (int j = 0; j < p; j++) {
			int* c = new int[p];
			string *name = new string[p];
			cin >> c[j];
			cin >> name[j];

			if (c[j] > max) {
				max = c[j];
				maxname = name[j];
			}
		}
		cout << maxname << "\n";
	}
}