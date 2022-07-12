#include <iostream>
using namespace std;

int main()
{
	cin.tie(nullptr);
	ios::sync_with_stdio(false);
	int N, M;
	cin >> N >> M;
	long* pN = new long[N];
	for (int i = 0; i < N; i++){
		cin >> pN[i];
	}
	for (int k = 0; k < M; k++) {
		int i, j;
		cin >> i >> j;
		long sum = 0;
		for (int l = i - 1; l < j; l++) {
			sum += pN[l];
		}
		cout << sum <<"\n";
	}
}