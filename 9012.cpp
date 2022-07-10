#include <iostream>
#include <stack>
using namespace std;
int main()
{
	int T;
	cin >> T;
	stack <char> s;
	
	for (int i = 0; i < T; i++){
		string str;
		int j = 0;
		cin >> str;
		int trueflase = 0;
		while (str[j] != NULL){
			switch (ch)
			{
			case '(':
				s.push(str[j]);
			case ')':
				if (s.empty()){
					exit(-1);
				}
				else {
					s.pop();
					if()
				}
			}
			
			if(str[j]=='(')
				s.push(str[j]);
			
			j++;
		}
		
		for(s.)
		if (trueflase)
			cout << "YES\n";
		else
			cout << "NO\n";
	}
}