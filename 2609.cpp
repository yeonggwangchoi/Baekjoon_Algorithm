#include <iostream>
using namespace std;

int main()
{
	int num1, num2;
	cin >> num1 >> num2;

	if (num1 < num2) {
		int tmp = num2;
		num2 = num1;
		num1 = tmp;
	}
	int max = num1;
	int min = num2;
	while (num2)
	{
		int tmp = num1 % num2;
		num1 = num2;
		num2 = tmp;
	}

	cout << num1 << endl;
	cout << max * min / num1;
}