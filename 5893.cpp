#include<iostream>
#include<bitset>
using namespace std;

int main(void)
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int i = 0, c = 0, b = 1, s = 0, d = 0;
	char a[1000];
	cin >> a;
	for (i = 0; a[i]=='\0'; i++)
	{
		d++;
	}
	for (a[i]=a[d];a[i]!=a[0]; i--)
	{
		c++;
		if (a[i] == 1)
		{
			for (int j = 1; j < c; j++)
			{
				b *= 2;
			}
			s += b;
			b = 0;
		}
		else
		{
			s += 1;
		}
	}
	s *= 17;

	cout << bitset<10>(s);
	return 0;
}