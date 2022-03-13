#include <iostream>
using namespace std;
int a = 0, F=0, n1=0, n2=1;
void Fn(int* x);
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin >> n;

	Fn(&n);

	cout << n;

	return 0;
}
void Fn(int* x)
{
	a++;
	F = n1 + n2;
	n1 = n2;
	n2 = F;
	if (a == *x-1)
	{
		*x = F;
	}
	else
	{
		Fn(x);
	}
}