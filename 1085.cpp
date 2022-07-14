#include<iostream>
using namespace std;

int main()
{
	int x, y, w, h;
	cin >> x >> y >> w >> h;
	int num1, num2, last;
	
	if (w - x < x)
		num1 = w - x;
	else
		num1 = x;
	if (h - y < y)
		num2 = h - y;
	else
		num2 = y;

	if (num1 > num2)
		last = num2;
	else
		last = num1;

	cout << last;

	return 0;
}