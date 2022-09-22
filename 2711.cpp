#include <iostream>
using namespace std;

int main()
{
	cin.tie(nullptr);
	cout.tie(nullptr);
	ios::sync_with_stdio(false);
	int T;
	cin >> T;

	for (int i = 0; i < T; i++) {
		int ota;
		cin >> ota;
		string str;
		cin >> str;
		string str1;
		for (int j = ota; j < str.length(); j++) {
			str1.push_back(str[j]);
		}
		str.erase(ota - 1);
		for (int j = 0; j < str1.length(); j++) {
			str.push_back(str1[j]);
		}
		for (auto i : str) {
			cout << i;
		}
		cout << "\n";
	}
}