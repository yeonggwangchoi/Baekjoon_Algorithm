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
		getline(cin, str);
		if (str == "END")
			break;
		reverse(str.begin(), str.end());
		cout<<str<<"\n";
	}
}