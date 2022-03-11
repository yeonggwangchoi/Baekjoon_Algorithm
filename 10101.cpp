#include<iostream>
using namespace std;

int main(void)
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int a, b, c;
	cin >> a >> b >> c;

	if (a + b + c != 180)
	{
		cout << "Error";
	}
	else
	{
		if (a == 60 && b == 60 && c == 60)
		{
			cout << "Equilateral";
		}
		else if (a + b + c == 180 && a == b || a == c || b == c)
		{
			cout << "Isosceles";
		}
		else if (a + b + c == 180 && a != b && b != c && a != c)
		{
			cout << "Scalene";
		}
	}
	return 0;
}