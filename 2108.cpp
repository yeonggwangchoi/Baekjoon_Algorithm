#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int N;
	cin >> N;
	vector <int> v;

	for (int i = 0; i < N; i++)
	{
		int num;
		cin >> num;
		v.push_back(num);
	}
	sort(v.begin(), v.end());
	int sum = 0;
	for (int i = 0; i < v.size(); i++)
	{
		sum += v[i];
	}
	
	cout << "\n";
	if (sum / N < 0)
		cout << sum / N -1 << "\n";
	else
		cout << sum / N << "\n";

	cout << v[(v.size() - 1) / 2] << "\n";

	
	cout << v.back() - v.front() << "\n";
}