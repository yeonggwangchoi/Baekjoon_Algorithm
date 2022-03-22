#include <iostream>
using namespace std;

void star(int x)
{
	
	cout<<"*";
	cout << "\n";
	star(x);
}
int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	int n;
	cin >> n;
	star(n);
}