#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class number {
public:
	int num = 0;
	int j = 0;
};
bool cmp(const number& x, const number& y) {
	if (x.num > y.num)
		return true;
	else
		return false;
}
int main()
{
	cin.tie(nullptr);
	cout.tie(nullptr);
	ios::sync_with_stdio(false);

	vector<number> v;
	
	for (int i = 0; i < 8; i++) {
		number n;
		cin >> n.num;
		n.j = i + 1;
		v.push_back(n);
	}
	sort(v.begin(), v.end(), cmp);
	int sum = 0;
	for (int i = 0; i < 5; i++) {
		sum += v[i].num;
	}
	cout << sum << "\n";
	int num[5] = {};
	for (int i = 0; i < 5; i++) {
		num[i] = v[i].j;
	}
	sort(num, num + 5);
	for (int i = 0; i < 5; i++) {
		cout << num[i] << " ";
	}
}