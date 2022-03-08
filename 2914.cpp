#include <iostream>
using namespace std;

int main(void)
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int a, i;
	cin >> a >> i;
	a = a * (i - 1);
	cout << a + 1 << "\n";
	return 0;
}