#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	char num1[4], num2[4], tmp;

	cin >> num1;
	cin >> num2;

	tmp = num1[0];
	num1[0] = num1[2];
	num1[2] = tmp;

	tmp = num2[0];
	num2[0] = num2[2];
	num2[2] = tmp;

	for (int i = 0; i < 4; i++) {
		if (num1[i] > num2[i]) {
			cout << num1[0] << num1[1] << num1[2] << endl;
			break;
		}
		if (num1[i] < num2[i]) {
			cout << num2[0] << num2[1] << num2[2] << endl;
			break;
		}
	}
}