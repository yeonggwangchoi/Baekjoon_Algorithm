#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int N;
	cin >> N;
	vector <int> v;
	int num[8001] = {};
	
	for (int i = 0; i < N; i++)
	{
		int num;
		cin >> num;
		v.push_back(num);
	}
	sort(v.begin(), v.end());
	double sum = 0;
	for (int i = 0; i < v.size(); i++)
	{
		sum += v[i];
		num[v[i] + 4000]++;
	}
	int max = -4001;
	int maxidx = 0;
	int j = 0;
	for (int i = 0; i < 8001; i++) {
		if (num[i] > max) {
			maxidx = i;
			max = num[i];
		}
		else if (num[i] != 0 && j == 0 && num[i] == max) {
			maxidx = i;
			j++;
		}
	}
	double mean;
	if (sum > 0)
		mean = (double)(sum / N);
	else
		mean = ((double)(-1 * sum) / (double)N) * -1;
	if (mean > -0.5 && mean < 0.5) mean = 0;

	cout << round(mean) << "\n";
	cout << v[(v.size() - 1) / 2] << "\n";
	cout << maxidx - 4000 << "\n";
	cout << v.back() - v.front() << "\n";
}