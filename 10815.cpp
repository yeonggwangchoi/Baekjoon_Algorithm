#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool cmp(const vector<int> &arr, int target, int len)
{
	int first = 0;
	int last = len - 1;
	int mid;

	while (last - first >= 0) 
	{
		mid = (first + last) / 2;

		if (arr[mid] == target)
			return true;
		else if (arr[mid] > target)
			last = mid - 1;
		else
			first = mid + 1;
	}
	return false;
}

int main()
{
	cin.tie(nullptr);
	ios::sync_with_stdio(false);

	int N;
	cin >> N;
	vector<int> v;
	for (int i = 0; i < N; i++)
	{
		int num;
		cin >> num;
		v.push_back(num);
	}
	sort(v.begin(), v.end());
	int M;
	cin >> M;
	for (int i = 0; i < M; i++)
	{
		int t;
		cin >> t;
		cout << cmp(v, t, v.size()) << " ";
	}
}