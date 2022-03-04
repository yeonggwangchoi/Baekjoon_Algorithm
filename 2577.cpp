#include <stdio.h>

int main(void)
{
	int a, b, c, sum, num[10] = { 0, };
	scanf_s("%d", &a);
	scanf_s("%d", &b);
	scanf_s("%d", &c);

	sum = a * b * c;

	for (int i = 0; i <= 8; i++)
	{
		if (sum % 10 == 0)
		{
			num[0]++;
		}
		else if (sum % 10 == 1)
		{
			num[1]++;
		}
		else if (sum % 10 == 2)
		{
			num[2]++;
		}
		else if (sum % 10 == 3)
		{
			num[3]++;
		}
		else if (sum % 10 == 4)
		{
			num[4]++;
		}
		else if (sum % 10 == 5)
		{
			num[5]++;
		}
		else if (sum % 10 == 6)
		{
			num[6]++;
		}
		else if (sum % 10 == 7)
		{
			num[7]++;
		}
		else if (sum % 10 == 8)
		{
			num[8]++;
		}
		else if (sum % 10 == 9)
		{
			num[9]++;
		}
		sum = sum / 10;
		if (0 < sum && sum < 10)
		{
			i = 7;
		}
	}

	for (int i = 0; i <= 9; i++)
	{
		printf("%d\n", num[i]);
	}

	return 0;
}