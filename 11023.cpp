#include <iostream>
using namespace std;

int main()
{
	cin.tie(nullptr);
	cout.tie(nullptr);
	ios::sync_with_stdio(false);

	int n, sum = 0;

	while (cin >> n) {
		sum += n;
	}
	cout << sum;
}