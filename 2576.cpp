#include <iostream>
#include <vector>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int num[7], sum = 0, min = 2147483647;

	for (int i = 0; i < 7; i++)
	{
		cin >> num[i];
		if (num[i] % 2 == 1)
		{
			sum += num[i];
			if (num[i] < min)
				min = num[i];
		}
	}
	if (sum == 0)
	{
		cout << "-1";
	}
	else
	{
		cout << sum << "\n";
		cout << min << "\n";
	}
}