#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	cin.tie(nullptr);
	cout.tie(nullptr);
	ios::sync_with_stdio(false);

	int K;
	cin >> K;
	for (int i = 0; i < K; i++) {

		int N;
		cin >> N;
		int* num = new int[N];
		for (int j = 0; j < N; j++) {
			cin >> num[j];
		}
		int big = -20000000;
		sort(num, num + N, greater<int>());
		for (int j = 0; j < N-1; j++) {
			if (num[j] - num[j + 1] > big)
				big = num[j] - num[j + 1];
		}
		cout << "Class " << i + 1 << "\n";
		cout << "Max " << num[0] << ", Min " << num[N - 1] << ", Largest gap " << big <<"\n";
	}
}