#include<iostream>
using namespace std;

int main()
{
	int i, num = 1, a, b, sum;

	for (i = 1; i <= 10; i++)
	{
		a = num / 1;
		b = num % 1;

		sum = num + a + b;
		if (sum != i)
		{
			cout << i << endl;
		}
		num = sum;
	}

	return 0;
}