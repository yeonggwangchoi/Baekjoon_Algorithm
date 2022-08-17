#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	cin.tie(nullptr);
	ios::sync_with_stdio(false);

	int N, M;
	cin >> N >> M;
	vector<int> v;
	for (int i = 0; i < N; i++) {
		int num;
		cin >> num;
		v.push_back(num);
	}
	for (int i = 0; i < M; i++) {
		int num;
		cin >> num;
		v.push_back(num);
	}
	sort(v.begin(), v.end());

	for (auto i = v.begin(); i < v.end(); i++) {
		cout << *i << " ";
	}
}