#include <iostream>
using namespace std;

int main()
{
	cin.tie(nullptr);
	cout.tie(nullptr);
	ios::sync_with_stdio(false);

	int N;
	cin >> N;
	int cnt=0;
	for (int i = 0; i <= N; i++) {
		for (int j = 0; j <= N; j++) {
			cnt+=j;
		}
	}

	cout << cnt;
}