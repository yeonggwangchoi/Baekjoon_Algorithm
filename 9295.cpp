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
	int num1, num2;
	for (int i = 0; i < N; i++) {
		cin >> num1 >> num2;
		cout << "Case " << i + 1 << ": " << num1 + num2 << "\n";
	}
}