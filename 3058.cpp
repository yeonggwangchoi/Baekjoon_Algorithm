#include <iostream>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int T;
	cin >> T;
	int num;
	int sum = 0, min = 102;
	for (int i = 0; i < T; i++)
	{
		sum = 0;
		min = 102;
		for (int j = 0; j < 7; j++)
		{
			cin >> num;
			if (num % 2 == 0)
			{
				sum += num;
				if (min > num)
					min = num;
			}
		}
		cout << sum << " " << min << "\n";
	}
}