#include <iostream>
#include <string>
using namespace std;

int main()
{
	string str;
	string rstr;
	cin >> str;

	for (auto i = str.rbegin(); i < str.rend(); i++) {
		rstr += *i;
	}

	if (rstr == str)
		cout << "1";
	else
		cout << "0";
}