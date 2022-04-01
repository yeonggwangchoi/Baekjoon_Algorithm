#include<iostream>
using namespace std;

void dn(int* x);
int main()
{
	cin.tie(nullptr);
	ios::sync_with_stdio(false);
	int n = 3;
	
	for (int n = 3; n <= 10000; n++)
	{
		dn(&n);
		cout << n << "\n";
	}
}
void dn(int *x)
{
	int sum = 0;
	for (int i = 10; i < 10000; i *= 10)
	{
		sum += *x / i;
		if (*x % i == 0)
			break;
	}
	if (sum != *x + 1)
	{
		*x = sum;
		return;
	}
		
}
