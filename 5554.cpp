#include <iostream>
using namespace std;

int main(void)
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int s[4], m[4], ss = 0, sm = 0;
	for (int i = 0; i < 4; i++)
	{
		cin >> s[i];
		m[i] = s[i] / 60;
		s[i] = s[i] % 60;

		ss += s[i];
		sm += m[i];
		if (ss / 60 > 0)
		{
			sm += ss / 60;
			ss = ss % 60;
		}
	}
	cout << sm << "\n";
	cout << ss << "\n";

	return 0;
}