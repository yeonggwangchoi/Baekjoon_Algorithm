#include <iostream>
#include <cstdio>
using namespace std;

int main()
{

	string str;
	cin >> str;
	char c[100];
	getchar();
	fgets(c, 100, stdin);
	for (auto i = str.begin(); i < str.end(); i++) {
		for (auto j = 0; c[j] != NULL; j++) {
			if (*i == c[j]) {
				*i = *i + 32;
			}
			
		}
	}
	cout << str;
}