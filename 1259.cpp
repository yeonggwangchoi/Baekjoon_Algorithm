#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
	cin.tie(nullptr);
	cout.tie(nullptr);
	ios::sync_with_stdio(false);

	string str = "";
	while (true)
	{
		cin >> str;
		if (str == "0")
			break;
		string rstr = str;
		reverse(rstr.begin(), rstr.end());
		if (str == rstr)
			cout << "yes\n";
		else
			cout << "no\n";
	}
}