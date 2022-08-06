#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	cin.tie(nullptr);
	ios::sync_with_stdio(false);

	int N;
	cin >> N;

	vector<int> a(N);
	for (int i = 0; i < N; i++) {
		int num;
		cin >> num;
		a.push_back(num);
	}
	sort(a.begin(), a.end());

	for (auto i = a.begin(); i < a.end(); i++) {
		cout << *i << " ";
	}
}