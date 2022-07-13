#include <iostream>
using namespace std;

int main()
{
	int T;
	cin >> T;
	int H, W, N;
	int num1, num2;
	for (int i = 0; i < T; i++) {
		cin >> H >> W >> N;

		if (N % H == 0)
		{
			num1 = H;
			num2 = N / H;
		}
		else
		{
			num1 = N % H;
			num2 = N / H + 1;
		}

		if (num2 > 9)
			cout << num1 << num2 << "\n";
		else
			cout << num1 << "0" << num2 << "\n";
	}
}