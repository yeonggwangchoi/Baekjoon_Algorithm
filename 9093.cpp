#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main()
{
	cin.tie(nullptr);
	cout.tie(nullptr);
	ios::sync_with_stdio(false);

	int T;
	cin >> T;
	string str;
	cin.ignore();
	for (int i = 0; i < T; i++) {
		getline(cin, str);
		str += ' ';
		stack<char> s;
		for (auto j = str.begin(); j < str.end(); j++) {
			if (*j != ' ') {
				s.push(*j);
			}
			else {
				while (!s.empty())
				{
					cout << s.top();
					s.pop();
				}
				cout << " ";
			}
		}
		cout << endl;
	}
}