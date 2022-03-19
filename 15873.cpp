#include<iostream>
using namespace std;

int main()
{

	int num, a = 0, b = 0;
	cin >> num;
	if (num % 1000 != 0)
	{
		a = (num / 1000 * 10)+(num-(num/1000*1000))/100;
		b = (num / 1000 * 10) + (num - (num / 1000 * 1000)) / 100 * 100;
		
	}
	else
	{
		if (num % 100 != 0)
		{
			a = num / 100 + (num - (num / 100 * 100)) / 100;
			b = num - (num / 100 * 100);
		}
		else
		{
			if (num % 10 != 0)
			{
				a = num / 10 * 10;
				b = num - (num / 10 * 10);
			}
		}
	}
	cout << a + b;

	return 0;
}