#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	cin.tie(nullptr);
	cout.tie(nullptr);
	ios::sync_with_stdio(false);

	int N;
	cin >> N;
	
	for (int i = 0; i < N; i++) {
		int V, E;
		cin >> V >> E;

		cout << -V  +E + 2 <<"\n";
	}
}