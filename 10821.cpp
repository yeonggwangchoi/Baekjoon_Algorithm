#include <iostream>
using namespace std;

int main()
{
	cin.tie(nullptr);
	cout.tie(nullptr);
	ios::sync_with_stdio(false);

	string str;
	cin >> str;

	int c = 0;

	for (auto i = 0; i < str.length(); i++) {
		if (str[i] == ',')
			c++;
	}
	cout << c + 1;
}