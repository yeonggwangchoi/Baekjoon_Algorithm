#include<stdio.h>
int main(void)
{
	int n;
	double  max = 0, num[1000] = { 0, };
	scanf_s("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf_s("%lf", &num[i]);
		if (max < num[i])
			max = num[i];
	}

	for (int i = 0; i < n; i++)
	{
		num[i] = num[i] / max * 100;
	}
	max = 0;
	for (int i = 0; i < n; i++)
	{
		max += num[i];
	}

	printf("%lf", max / n);

	return 0;
}