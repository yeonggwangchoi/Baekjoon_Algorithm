#include <iostream>
#include <array>
#include <algorithm>
using namespace std;

int main()
{
	array <int, 3> num;
	for (int i = 0; i < 3; i++)
	{
		cin >> num[i];
	}
	sort(num.begin(), num.end());
	cout << num[1];
}