#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	cin.tie(nullptr);
	cout.tie(nullptr);
	ios::sync_with_stdio(false);
	int n = 1;
	while (1) {
		cin >> n;
		if (n == 0)
			break;
		vector<int> v;
		for (int i = 0; i < n; i++) {
			int num; 
			cin >> num;
			if (v.empty())
				v.push_back(num);
			else if (num != v.back()) {
				v.push_back(num);
			}
		}
		
		for (auto i = v.begin(); i < v.end(); i++) {
			cout << *i << " ";
		}
		cout << "$\n";
	}
}