#include <iostream>
using namespace std;

int main()
{
	int N;
	cin >> N;
	string str;
	for (int i = 0; i < N; i++) {
		cin >> str;
		for (auto j = 0; j < str.length(); j++) {
			if (str[j] >= 'A' && str[j] <= 'Z')
				str[j] = str[j] + 32;
		}
		cout << str <<"\n";
	}

}