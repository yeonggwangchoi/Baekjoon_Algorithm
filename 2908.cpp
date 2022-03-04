#include<iostream>
using namespace std;

int main()
{
	char num1[4], num2[4], tmp;

	cin >> num1;
	cin >> num2;

	tmp = num1[0];
	num1[0] = num1[2];
	num1[2] = tmp;

	tmp = num2[0];
	num2[0] = num2[2];
	num2[2] = tmp;

	if (num1[0] > num2[0])
	{
		cout << num1;
	}
	else if (num1[0] < num2[0])
	{
		cout << num2;
	}
	else
	{
		if (num1[1] > num2[1])
		{
			cout << num1;
		}
		else if (num1[1] < num2[1])
		{
			cout << num2;
		}
		else
		{
			if (num1[2] > num2[2])
			{
				cout << num1;
			}
			else if (num1[1] < num2[1])
			{
				cout << num2;
			}
		}
	}
	return 0;
}