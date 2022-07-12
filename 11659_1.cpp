#include <iostream>
using namespace std;

int main()
{
	cin.tie(nullptr);
	ios::sync_with_stdio(false);
	int N, M;
	cin >> N >> M;
	long* pN = new long[N + 1]{ 0 };
	for (int i = 1; i < N + 1; i++) {
		long num;
		cin >> num;
		pN[i] = pN[i - 1] + num;
	}
	for (int k = 0; k < M; k++) {
		int i, j;
		cin >> i >> j;

		cout << pN[j] - pN[i - 1] << "\n";
	}
}