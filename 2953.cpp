#include <iostream>
using namespace std;

int main()
{
	cin.tie(nullptr);
	ios::sync_with_stdio(false);
	int sum[5] = {};
	int maxnum = -200000000, maxi = -1;
	for (int i = 0; i < 5; i++)
	{
		int num1, num2, num3, num4;
		cin >> num1 >> num2 >> num3 >> num4;
		sum[i] = num1 + num2 + num3 + num4;
		if (maxnum < sum[i])
		{
			maxnum = sum[i];
			maxi = i;
		}
	}
	cout << maxi+1 << " " << maxnum;
}