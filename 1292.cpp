#include <iostream>
using namespace std;

int main()
{
	int num1, num2;

	cin >> num1 >> num2;
	int sum = 0;
	for (int j = num1+1; j < num2; j++)
	{
		sum += j;
	}
	cout << sum;
}