#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int N;
	cin >> N;
	vector <int> v;
	vector <int> vcount(N);
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
	int maxidx = 0;
	int max = 0;
	int coun = 0;
	for (int i = 0; i < vcount.size(); i++)
	{
		vcount[i] = count(v.begin(), v.end(), v[i]);
		if (vcount[i] > max)
		{
			maxidx = i;
			max = vcount[i];
		}
		else 
		{
			coun++;
		}
	}
	cout << "\n";
	if (sum / N < 0)
		cout << sum / N -1 << "\n";
	else
		cout << sum / N << "\n";

	cout << v[(v.size() - 1) / 2] << "\n";

	if (coun == 0)
	{
		cout << v[maxidx] << "\n";
	}
	else
	{
		for(int i = 0; i < v.size()-1; i++)
		{
			if (v[maxidx] != v[maxidx + 1])
			{
				cout << v[maxidx + 1] << "\n";
				break;
			}
			maxidx++;
		}
	}
	cout << v.back() - v.front() << "\n";
}