#include <stdio.h>

int main(void)
{
	int a[10], i, b[42] = { 0, }, tmp = 0;

	for (i = 0; i < 10; i++)
	{
		scanf_s("%d", &a[i]);
		a[i] = a[i] % 42;
	}

	for (i = 0; i < 10; i++)
	{
		for (int j = 0; j < 42; j++)
		{
			if (a[i] == j)
			{
				b[j]++;
			}
		}
	}

	for (int j = 0; j < 42; j++)
	{
		if (b[j] >= 1)
			tmp++;
	}

	printf("%d\n", tmp);

	return 0;
}