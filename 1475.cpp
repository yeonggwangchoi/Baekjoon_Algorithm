#include <iostream>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	string str;
	cin >> str;

	int* num = new int[10]{};
	for (int i = 0; i < str.length(); i++)
	{
		if (str[i] - '0' == 6 ||str[i] - '0'== 9)
			num[9]++;
		else
			num[str[i] - '0']++;
	}
	int max = -1;
	for (int i = 0; i < 10; i++)
	{
		if (i == 9)
		{
			if (num[9] % 2 == 0)
				num[9] = num[9] / 2;
			else
				num[9] = num[9] / 2 + 1;
		}
		if (max < num[i])
			max = num[i];
	}
	cout << max;
}