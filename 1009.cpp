#include<iostream>
using namespace std;

int main(void)
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	
	unsigned long long int test, *a, *b;
	cin >> test;
	a = new unsigned long long int[test];
	b = new unsigned long long int[test];
	for (int i = 0; i < test; i++)
	{
		cin >> a[i] >> b[i];
		for (int j = 0; j < b[i]-1; j++)
		{
			a[i] *= a[i];
		}
	}
	for (int i = 0; i < test; i++)
	{
		cout << a[i] << "\n";
	}
	
	return 0;
}