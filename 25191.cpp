#include <iostream>
using namespace std;

int main()
{
	int N;
	cin >> N;

	int A, B;
	cin >> A >> B;

	if (N < A / 2 + B)
		cout << N;
	else
		cout << A / 2 + B;
}