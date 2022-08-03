#include <iostream>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	string str;
	cin >> str;

	for (int i = 0; i < str.length(); i++)
	{
		if (i == 0)
			cout << str[i];
		else
		{
			if (i % 10 == 0)
			{
				cout << "\n";
				cout << str[i];
			}
			else
				cout << str[i];
		}
	}
}