#include <iostream>
using namespace std;

int main()
{
	cin.tie(nullptr);
	ios::sync_with_stdio(false);
	int N;
	cin >> N;
	int sum = 0;
	for (int i = 0; i < N; i++) {
		int n;
		cin >> n;
		sum += n;
	}
	N = sum - (N - 1);
	cout << N;
}