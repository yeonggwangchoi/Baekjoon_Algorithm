#include <iostream>
using namespace std;

int main()
{
	int X;
	cin >> X;

	int N;
	cin >> N;
	int sum = 0;
	for (int i = 0; i < N; i++) {
		int a, b;
		cin >> a >> b;
		sum += (a * b);
	}
	if (sum == X)
		cout << "Yes";
	else
		cout << "No";
}