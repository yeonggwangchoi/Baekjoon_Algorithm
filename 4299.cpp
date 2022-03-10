#include <iostream>
using namespace std;

int main(void)
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int a, b, s1, s2;
	cin >> a >> b;
	s1 = (a + b) / 2;
	s2 = (a - b) / 2;
	if (a == 0 || b == 0)
	{
		cout << "-1";
	}
	else
	{
		cout << s1 << " " << s2;
	}
	
	return 0;
}