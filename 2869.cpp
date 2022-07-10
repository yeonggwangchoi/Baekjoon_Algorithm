#include <iostream>
using namespace std;

int main()
{
	int a, b, v;
	cin >> a >> b >> v;
	int X = 0;
	int i = 0;
	if ((v - b) % (a - b) == 0)
	{
		X = (v - b) / (a - b);
	}
	else
		X = (v - b) / (a - b) + 1;
	cout << X << "\n";
}