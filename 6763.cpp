#include <iostream>
using namespace std;

int main()
{
	int a = 0, b = 0, sum = 0;
	cin >> a;
	cin >> b;
	sum = b - a;
	if (a >= b)
	{
		cout<<"Congratulations, you are within the speed limit!";
	}
	else if (b > a)
	{
		if (1 <= sum && sum <= 20)
		{
			cout << "You are speeding and your fine is $100.";
		}
		else if (21 <= sum && sum <= 30)
		{
			cout << "You are speeding and your fine is $270.";
		}
		else
			cout << "You are speeding and your fine is $500.";
	}
	return 0;
}