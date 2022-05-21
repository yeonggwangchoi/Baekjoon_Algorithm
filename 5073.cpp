#include <iostream>
using namespace std;

int main()
{
	int num1, num2, num3;
	while (1)
	{
		if (num1 == 0 && num2 == 0 && num3 == 0)
			break;
		else
		{
			if (num1 == num2 && num2 == num3 && num1 == num3)
				cout << "Equilateral";

		}
	}
}