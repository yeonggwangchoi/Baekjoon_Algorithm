#include <iostream>
using namespace std;

int main()
{
	cin.tie(nullptr);
	ios::sync_with_stdio(false);
	int N;
	cin >> N;
	int sum = 0, count = 0;
	for (int i = 0; i < N; i++)
	{
		int num;
		cin >> num;
		if (num == 1)
		{
			count++;
			if (count == 0)
				sum += 1;
			else
				sum += count;
		}
		else
		{
			count = 0;
		}
	}
	cout << sum;
}