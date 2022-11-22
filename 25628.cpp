#include <iostream>
using namespace std;

int main()
{
	int a, b;
	cin >> a >> b;
	int cnt = 0;

	a = a / 2;
	if (a == 0 || b == 0)
		cout << "0";
	else if (a < b)
		cout << a;
	else
		cout << b;
}