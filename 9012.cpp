#include <iostream>
#include <stack>
#include <algorithm>
using namespace std;
int main()
{
	int T;
	cin >> T;
	
	for (auto i = 0; i < T; ++i) {
		int n = 0;
		string str;
		cin >> str;
		stack<char> st;
		for (auto j = str.begin(); j < str.end(); ++j) {
			if (*j == '(') {
				st.push(*j);
			}
			else {
				if (!st.empty())
					st.pop();
				else {
					n = 1;
				}
			}
		}
		if(st.empty() && n == 0)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
}