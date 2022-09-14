#include <iostream>
using namespace std;

int main()
{
	cin.tie(nullptr);
	cout.tie(nullptr);
	ios::sync_with_stdio(false);

	while (true)
	{
		int x, y;
		cin >> x >> y;
		if (x == 0 && y == 0)
			break;
		else
			cout << x + y << "\n";
	}
}