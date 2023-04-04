#include <iostream>
using namespace std;

int main()
{
	cin.tie(nullptr);
	cout.tie(nullptr);
	ios::sync_with_stdio(false);
	
	int n;
	cin >> n;
	string str;
	cin >> str;
	int a = 0, b = 0;
	for (auto i = 0; i < n; i++) {
		if (str[i] == 'A')
			a++;
		else
			b++;
	}	
	if (a == b)
		cout << "Tie" << endl;
	else if (a > b)
		cout << "A" << endl;
	else
		cout << "B" << endl;
}