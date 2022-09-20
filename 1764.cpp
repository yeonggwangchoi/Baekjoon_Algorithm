#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	cin.tie(nullptr);
	cout.tie(nullptr);
	ios::sync_with_stdio(false);

	int N, M;
	cin >> N >> M;

	vector<string> v1;

	for (int i = 0; i < N + M; i++) {
		string str;
		cin >> str;

		v1.push_back(str);
	}
	
	sort(v1.begin(), v1.end());
	vector<string> v;
	int c = 0;
	
	for (int i = 0; i < N + M - 1; i++) {
		if (v1[i] == v1[i + 1]) 
			v.push_back(v1[i]);
	}
	cout << v.size() << "\n";
	for (auto i = v.begin(); i < v.end(); i++) {
		cout << *i << "\n";
	}
}