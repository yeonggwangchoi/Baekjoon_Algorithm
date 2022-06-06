#include <iostream>
using namespace std;

int main()
{
	cin.tie(nullptr);
	ios::sync_with_stdio(false);

	int a, b, sum=0;
	cin >> a >> b;
	for (int i = a; i <= b; i++)
	{
		sum += i;
	}
	cout << sum;
}