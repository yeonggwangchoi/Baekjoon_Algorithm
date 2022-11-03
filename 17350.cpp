#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	cin.tie(nullptr);
	cout.tie(nullptr);
	ios::sync_with_stdio(false);

	int n;
	cin >> n;

	bool tf = false;

	for (int i = 0; i < n; i++) {
		string str;
		cin >> str;

		if (str == "anj")
			tf = true;
	}
	if (tf == true)
		cout << "构具;";
	else
		cout << "构具?";
}