#include<stdio.h>

int main(void)

{
	int i = 0, n1, n2 = 100, n3, num1 = 0, num2 = 0, num3 = 0;

	scanf_s("%d", &n1);

	n3 = n1;

	while (n1 != n2)
	{
		num1 = n3 / 10;
		num2 = n3 % 10;
		num3 = num1 + num2;
		n2 = num2 * 10 + num3 % 10;
		n3 = n2;
		i++;
	}

	printf("%d", i);

	return 0;
}