#include<stdio.h>

int main(void)
{
	int h, m;

	scanf_s("%d %d", &h, &m);

	m = m - 45;

	if (0 > m)
	{
		m = 60 + m;
		h = h - 1;
	}
	if (0 > h)
	{
		h = 24 + h;
	}

	printf("%d %d", h, m);

	return 0;
}