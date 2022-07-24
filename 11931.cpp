#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

bool cmp(const int& x, const int& y)
{
	return x > y;
}

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int N;
	cin >> N;
	vector<int> v;
	for (int i = 0; i < N; i++)
	{
		int num;
		cin >> num;
		v.push_back(num);
	}
	sort(v.begin(), v.end(), cmp);

	for (int i = 0; i < v.size(); i++)
		cout << v[i] << "\n";
}