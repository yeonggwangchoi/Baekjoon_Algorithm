#include <iostream>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	long long num1, num2, sn1 = 0, sn2 = 0, ew1 = 0, ew2 = 0, sum1 = 0, sum2 = 0;

	cin >> num1 >> num2;

	if (num1 % 4 == 0)
	{
		ew1 = num1 / 4;
		sn1 = 4;
	}
	else if (num2 % 4 == 0)
	{
		ew2 = num2 / 4;
		sn2 = 4;
	}
	else
	{
		ew1 = num1 / 4 + 1;
		ew2 = num2 / 4 + 1;
		sn1 = num1 % 4;
		sn2 = num2 % 4;
	}
	
	if (num1 > num2)
	{
		sum1 = ew1 - ew2;
		
	}
	if(num2 > num1)
	{
		sum1 = ew2 - ew1;
		sum2 = sn2 - sn1;
		if (sum1 < 0)
		{
			sum1 *= -1;
		}
		if (sum2 < 0)
		{
			sum2 *= -1;
		}
	}
	
	cout << sum1 + sum2;
	
}