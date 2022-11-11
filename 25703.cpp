#include <iostream>
using namespace std;

int main()
{
	cin.tie(nullptr);
	cout.tie(nullptr);
	ios::sync_with_stdio(false);

	int N;
	cin >> N;

	if (N == 1) {
		cout << "int a;\n";
		cout << "int *ptr = &a;\n";
	}
	else {
		cout << "int a;\n";
		cout << "int *ptr = &a;\n";
		cout << "int **ptr2 = &ptr;\n";
		for (int i = 0; i < N - 2; i++) {
			cout << "int **";
			for (int j = 0; j < i+1; j++) {
				cout << "*";
			}
			cout << "ptr" << i + 3 << " = &ptr" << i + 2 << ";\n";
		}
	}
}