#include <iostream>
using namespace std;

int main()
{
	cin.tie(nullptr);
	cout.tie(nullptr);
	ios::sync_with_stdio(false);

	int N;
	cin >> N;

	for (int i = 0; i < N; i++) {
		long long int num;
		int cnt = 0;
		cin >> num;
		for (long long int j = 1; j * j <= num; j++) {
			if (num % j == 0)
				cnt++;
		}

		if (cnt % 2 == 0)
			cout << "0 ";
		else
			cout << "1 ";
	}
}