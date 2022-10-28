#include <iostream>
#include <stack>
#include <algorithm>
using namespace std;
int main()
{
	int T;
	cin >> T;

	for (auto i = 0; i < T; i++) {
		stack<char> s1;
		stack<char> s2;
		string str;
		cin >> str;
		
		sort(str.begin(), str.end());

		for (auto j = str.begin(); j < str.end(); j++) {
			s1.push(*j);
		}
		for (int j = 0; j < s1.size(); j++) {
			if (s1.top() == ')') {
				s2.push(')');
				s1.pop();
			}
			else {

			}
		}

		
	}
}