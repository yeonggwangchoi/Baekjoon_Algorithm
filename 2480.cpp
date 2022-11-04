#include <iostream>
using namespace std;

int main()
{
	cin.tie(nullptr);
	cout.tie(nullptr);
	ios::sync_with_stdio(false);

	int num[3];
	int sum = 0;
	int max = 0;
	cin >> num[0] >> num[1] >> num[2];

	if (num[0] == num[1] && num[1] == num[2])
		sum = 1000 * num[0] + 10000;
	else if (num[0] != num[1] && num[1] != num[2] && num[2] != num[0])
	{
		for (int i = 0; i < 3; i++)
		{
			if (max < num[i])
				max = num[i];
		}
		sum = max * 100;
	}
	else
	{
		if (num[0] == num[1])
			sum = num[0] * 100 + 1000;
		else if (num[1] == num[2])
			sum = num[1] * 100 + 1000;
		else
			sum = num[0] * 100 + 1000;
	}
	cout << sum;
}