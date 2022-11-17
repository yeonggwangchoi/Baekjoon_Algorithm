#include <iostream>
using namespace std;

int gcd(int a, int b) {
	while (b > 0) {
		int tmp = a;
		a = b;
		b = tmp % b;
	}
	return a;
}

int main()
{
	int n;
	cin >> n;
	int a, b;
	for (int i = 0; i < n; i++) {
		cin >> a >> b;
		int gcdnum = gcd(a, b);
		int lcdnum = a * b / gcdnum;
		cout << lcdnum << "\n";
	}
}