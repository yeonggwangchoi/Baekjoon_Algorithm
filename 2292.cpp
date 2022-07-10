#include <iostream>
using namespace std;

int main()
{
	cin.tie(nullptr);
	ios::sync_with_stdio(false);

	int N;
	cin >> N;
	int i = 0, count = 1;
	while (1)
	{
		i += 6 * count;

		if (N - i <= 1)
			break;

		count++;
	}
	if (N == 1)
		cout << "1";
	else
		cout << count + 1;
}