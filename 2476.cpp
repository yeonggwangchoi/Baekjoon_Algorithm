#include <iostream>

using namespace std;

int main()
{
	cin.tie(nullptr);
	ios::sync_with_stdio(false);

	int N;
	cin >> N;
	int num1,num2,num3,sum[3];

	for (int i = 0; i < N; i++)
	{
		cin >> num1 >> num2 >> num3;
		if (num1 == num2 && num2 == num3 && num1 == num3)
			sum[i] = 10000 + num1 * 1000;
		else if (num1 == num2 && num1 == num3)
			sum[i] = 1000 + num1 * 100;
		else if (num1 == num2 && num2 == num3)
			sum[i] = 1000 + num2 * 100;
		else
		{
			if(num1>num2&&num2>num3)
				sum[i] = num1 * 100;
			else if()
		}
			
	}
}