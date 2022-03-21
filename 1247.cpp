#include<iostream>
using namespace std;

int main(void)
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	int testcase;
	long long int num, sum[3] = { 0 };
	for (int j = 0; j < 3; j++)
	{
		cin >> testcase;
		for (int i = 0; i < testcase; i++)
		{
			cin >> num;
			sum[j] += num;
		}
	}
	for (int j = 0; j < 3; j++)
	{
		if (sum[j] > 0) cout << "+";
		else if (sum[j] < 0) cout << "-";
		else if (sum[j] == 0) cout << "0";
	}
	//임의 정밀도
	return 0;
}