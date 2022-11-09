#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

int main()
{
	cin.tie(nullptr);
	cout.tie(nullptr);
	ios::sync_with_stdio(false);

	int T;
	cin >> T;

	vector<double> num(T);
	vector<string> str(5);

	for (int i = 0; i < T; i++) {
		cin >> num[i];
		cin >> str[i];

		if (str[i] == "kg") {
			num[i] = num[i] * 2.2046;
			str[i] = "lb";
		}
		else if (str[i] == "l") {
			num[i] = num[i] * 0.2642;
			str[i] = "g";
		}
		else if (str[i] == "lb") {
			num[i] = num[i] * 0.4536;
			str[i] = "kg";
		}
		else if (str[i] == "g") {
			num[i] = num[i] * 3.7854;
			str[i] = "l";
		}
		printf("%.4f ", num[i]);
		cout << str[i] << "\n";
	}
}