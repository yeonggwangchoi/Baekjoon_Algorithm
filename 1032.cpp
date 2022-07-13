#include <iostream>
using namespace std;

int main()
{
	int N;
	cin >> N;
	string *str = new string[N];
	for (int i = 0; i < N; i++) {
		cin >> str[i];
	}
	string newstr = str[0];
	for (int i = 1; i < N; i++) {
		for (int j = 0; j < str[i].length(); j++)
		{
			if (newstr[j] == str[i][j])
				newstr[j] = str[i][j];
			else
				newstr[j] = '?';
		}
	}
	cout << newstr;
}