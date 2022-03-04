#include<stdio.h>

int main(void)
{
	int a = 0;
	int min = 1000000, max = -1000000;

	scanf_s("%d", &a);

	int* num = new int[a];

	for (int i = 0; i < a; i++)
	{
		scanf_s("%d", &num[i]);
	}

	for (int j = 0; j < a; j++)
	{
		if (min > num[j])
		{
			min = num[j];
		}
		else if (num[j] > max)
		{
			max = num[j];
		}
	}

	printf("%d %d", min, max);
	delete[] num;

	return 0;
}