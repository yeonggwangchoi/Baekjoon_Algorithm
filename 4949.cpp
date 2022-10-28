#include <iostream>
#include <stack>
using namespace std;

int main()
{
	string str = " ";

	while (str!=".")
	{
		stack<char> s1, s2;
		cin >> str;
		for (auto i = str.begin(); i < str.end(); i++) {
			if (str[*i] == '(' || str[*i] == ')' || str[*i] == '[' || str[*i] == ']')
				s1.push(str[*i]);
		}
		
	}
}