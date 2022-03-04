#include<iostream>
using namespace std;

int main(void)
{

	int a, b, c, i;

	cin >> a >> b >> c;


	i = (a / (c - b)) + 1;

	if (b >= c)
	{
		i = -1;
	}

	cout << i << endl;

	return 0;
}