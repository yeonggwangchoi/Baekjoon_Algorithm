#include <iostream>
using namespace std;

int main()
{
	cin.tie(nullptr);
	ios::sync_with_stdio(false);

	int T;
	cin >> T;
	long long int sum = 0;
	for (int i = 0; i < T; i++){
		int N;
		cin >> N;
		for (int j = 0; j < N; j++) {
			int num;
			cin >> num;
			sum += num;
		}
		if (sum % N == 0)
			cout << "YES\n";
		else
			cout << "NO\n";
	}
}