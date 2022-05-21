#include<stdio.h>

void hano(int x, int from, int mid, int to)
{
	if (x == 1)
	{
		printf("%d %d\n", from, to);
		return;
	}
	hano(x - 1, from, to, mid);
	printf("%d %d\n", from, to);
	hano(x - 1, mid, from, to);
}

int main(void)
{
	int n;
	scanf_s("%d", &n);
	printf("%d\n", n * 2 + 1);
	hano(n,1,2,3);

	return 0;
}