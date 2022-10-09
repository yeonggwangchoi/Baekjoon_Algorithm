#include <iostream>
using namespace std;

int main()
{
	cin.tie(nullptr);
	cout.tie(nullptr);
	ios::sync_with_stdio(false);

	int T;
	cin >> T;
	int s;
	for (int i = 0; i < T; i++) {
		cin >> s;
		int num;
		cin >> num;
		for (int j = 0; j < num; j++) {
			int p, q;
			cin >> p >> q;
			s += p * q;
		}
		cout << s << "\n";
	}
}