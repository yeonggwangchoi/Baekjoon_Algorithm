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
		if (str[i] == 'a')
			c++;
		else if (str[i] == 'e')
			c++;
		else if (str[i] == 'i')
			c++;
		else if (str[i] == 'o')
			c++;
		else if (str[i] == 'u')
			c++;
	}
	cout << c;
}