#include <iostream>
using namespace std;

int main()
{
	cin.tie(nullptr);
	cout.tie(nullptr);
	ios::sync_with_stdio(false);

	int n;
	cin >> n;

	for (int i = 0; i < n; i++) {
		int num;
		cin >> num;
		cout << num / 25 << " " << num % 25 / 10 << " " << num % 25 % 10 / 5 << " " << num % 25 % 10 % 5 / 1;
		cout << endl;
	}
}