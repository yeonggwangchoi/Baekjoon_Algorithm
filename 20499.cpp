#include<iostream>
using namespace std;

int main(void)
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	char a[7]{ 0. };
	cin >> a;
	if ((a[0] - 48) + (a[5] - 48)< a[2] - 48)
	{
		cout << "hasu";
	}
	else
	{
		cout << "gosu";
	}
	return 0;
}