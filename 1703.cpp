#include <iostream>
using namespace std;

int main()
{
	cin.tie(nullptr);
	ios::sync_with_stdio(false);

	while (true)
	{
		int a, b, c, total=1;
		cin >> a;
		for (int i = 0; i < a; i++)
		{
			cin >> b >> c;
			total = total * b - c;
		}
		if (a == 0) break;
		else cout << total <<"\n";
	}
}