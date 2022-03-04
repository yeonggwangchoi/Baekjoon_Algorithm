#include<stdio.h>
int main(void)
{
	char surprise[50];

	scanf_s("%s", surprise, 50);
	printf("%s??!\n", surprise);

	return 0;
}