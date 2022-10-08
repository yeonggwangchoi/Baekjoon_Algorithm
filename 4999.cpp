#include <iostream>
using namespace std;

int main()
{
	cin.tie(nullptr);
	cout.tie(nullptr);
	ios::sync_with_stdio(false);

	string str1, str2;

	cin >> str1;
	cin >> str2;

	if (str1.length() >= str2.length())
		cout << "go";
	else
		cout << "no";
}

