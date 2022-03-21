#include <iostream>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int changecup1, changecup2, cupnum1, cupnum2, cupnum3, tmp, changenum;
	cin >> changenum;
	tmp = 1;
	for (int i = 0; i < changenum; i++)
	{
		cin >> changecup1 >> changecup2;
		if (changecup1 == tmp)
		{
			tmp = changecup2;
		}
		else if (changecup2 == tmp)
		{
			tmp = changecup1;
		}
	}
	cout << tmp;

	return 0;
}