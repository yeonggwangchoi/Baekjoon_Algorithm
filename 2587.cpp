#include <iostream>
#include<algorithm>
#include <vector>
using namespace std;

int main()
{
	cin.tie(nullptr);
	cout.tie(nullptr);
	ios::sync_with_stdio(false);
	
	vector<int> v;
	int sum = 0;
	for (int i = 0; i < 5; i++) {
		int num;
		cin >> num;
		v.push_back(num);
		sum += num;
	}
	sort(v.begin(), v.end());
	cout << sum / 5 << "\n";
	cout << v[2];
}