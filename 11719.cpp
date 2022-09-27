#include <iostream>
using namespace std;

int main()
{
	cin.tie(nullptr);
	cout.tie(nullptr);
	ios::sync_with_stdio(false);

	char str[500];
	fgets(str, 100, stdin);

	cout << str;
}