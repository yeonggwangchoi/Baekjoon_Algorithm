#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool mysort(int i, int j) { return (i > j); }

int main()
{
	string str;
	cin >> str;

	sort(str.begin(), str.end(), mysort);

	cout << str;
}