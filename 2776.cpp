#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

bool cmp(vector<int>& x, int target, int len) {
	int first = 0;
	int last = len - 1;

	while (first<=last)
	{
		int mid = (first + last) / 2;
		if (x[mid] == target)
			return true;
		else if (x[mid] < target)
			first = mid + 1;
		else
			last = mid - 1;
	}
	return false;
}

int main()
{
	cin.tie(nullptr);
	ios::sync_with_stdio(false);
	int T;
	cin >> T;
	for (int i = 0; i < T; i++) {
		int N;
		cin >> N;
		vector<int> v1;
		
		for (int j = 0; j < N; j++) {
			int num;
			cin >> num;
			v1.push_back(num);
		}
		sort(v1.begin(), v1.end());
		int M;
		cin >> M;
		for (int j = 0; j < M; j++) {
			int num;
			cin >> num;
			cout << cmp(v1,num,v1.size()) <<"\n";
		}
	}
}