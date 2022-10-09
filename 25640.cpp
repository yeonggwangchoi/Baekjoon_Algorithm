#include <iostream>
using namespace std;

int main()
{
	cin.tie(nullptr);
	cout.tie(nullptr);
	ios::sync_with_stdio(false);

	string str;
	cin >> str;

	int num, j = 0;
	cin >> num;

	for (int i = 0; i < num; i++) {
		string c_str;
		cin >> c_str;

		if (c_str == str)
			j++;
	}
	cout << j;
}