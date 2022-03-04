#include<stdio.h>
int main(void)
{
	int testcase, i, j, studentnum, * grade, sum = 0, acount = 0;
	double* output = { 0, };
	scanf_s("%d", &testcase);
	output = new double[testcase];
	for (i = 0; i < testcase; i++)
	{
		scanf_s("%d", &studentnum);
		grade = new int[studentnum];
		for (j = 0; j < studentnum; j++)
		{
			scanf_s("%d", &grade[j]);
			sum += grade[j];
		}
		sum = sum / studentnum;
		for (j = 0; j < studentnum; j++)
		{
			if (sum < grade[j])
			{
				acount++;
			}
		}
		output[i] = (double)acount / (double)studentnum * 100;
		sum = 0;
		acount = 0;
	}

	for (i = 0; i < testcase; i++)
	{
		printf("%.3lf%%\n", output[i]);
	}

	return 0;
}