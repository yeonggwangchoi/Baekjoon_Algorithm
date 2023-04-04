#include <iostream>
using namespace std;

int main()
{
	cin.tie(nullptr);
	cout.tie(nullptr);
	ios::sync_with_stdio(false);

	int n;
	cin >> n;
	for (auto i = 0; i < n / 4; i++)
		cout << "long ";
	cout << "int";
}