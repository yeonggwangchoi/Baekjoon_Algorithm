#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int binary_search(vector<int> &array, int target, int start, int end)
{
	while (start <= end)
	{
		int mid = (start + end) / 2;
		if (array[mid] == target)
			return 1;
		else if (array[mid] > target)
			end = mid - 1;
		else if (array[mid] < target)
			start = mid + 1;
		
	}
	return 0;
}

int main()
{
	cin.tie(nullptr);
	cout.tie(nullptr);
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
		int num;
		cin >> num;
		
		cout << binary_search(v, num, 0, N - 1) << "\n";
	}
}

