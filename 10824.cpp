#include <iostream>
using namespace std;

int main()
{
	string A, B, C, D;
	long long int num1 = 0;
	long long int num2 = 0;
	cin >> A >> B >> C >> D;
	
	for (int i = 0; i < A.length(); i++) {
		num1 *= 10;
		num1 += A[i] - '0';
	}
	for (int i = 0; i < B.length(); i++) {
		num1 *= 10;
		num1 += B[i] - '0';
	}
	for (int i = 0; i < C.length(); i++) {
		num2 *= 10;
		num2 += C[i] - '0';
	}
	for (int i = 0; i < D.length(); i++) {
		num2 *= 10;
		num2 += D[i] - '0';
	}

	cout << num1 + num2;
}