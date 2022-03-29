#include<stdio.h>

void hano(int x, int from, int mid, int to)
{
	int i = 0;
	if (x == 1)
	{
		printf("%d %d\n", from, to);
		return;
	}
	i++;
	hano(x - 1, from, to, mid);
	printf("%d %d\n", from, to);
	hano(x - 1, mid, from, to);
}

int main(void)
{
	int n;
	scanf_s("%d", &n);

	hano(n,1,2,3);

	return 0;
}