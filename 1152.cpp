#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	string str;
	int countnum = 1, i;

	getline(cin, str);

	for (i = 0; i < str.length(); i++)
	{
		if (str[i] == 32)
		{
			countnum++;
		}
	}
	if (str[0] == ' ' || str[0] == '\0')
	{
		countnum--;
	}
	if (str[str.length() - 1] == ' ')
	{
		countnum--;
	}

	cout << countnum << endl;

	return 0;
}