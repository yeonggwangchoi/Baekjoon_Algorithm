#include<iostream>
using namespace std;

int main(void)
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int num=0;
	int sum = 0;
	while (num != -1)
	{
		cin >> num;
		if (num != -1)
			sum += num;
	}

	cout << sum;

	return 0;
}