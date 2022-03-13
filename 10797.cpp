#include<iostream>
using namespace std;

int main(void)
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int day, car1, car2, car3, car4, car5, c = 0;
	cin >> day >> car1 >> car2 >> car3 >> car4 >> car5;
	if (day == car1) c++;
	if (day == car2) c++;
	if (day == car3) c++;
	if (day == car4) c++;
	if (day == car5) c++;
	cout << c;

	return 0;
}