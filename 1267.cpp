#include<iostream>
#include<vector>
using namespace std;
int main(void)
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	int callcount, ytotal = 0, mtotal = 0;
	cin >> callcount;
	vector <int> v(callcount);
	vector <int> y(callcount);
	vector <int> m(callcount);
	for (int i = 0; i < callcount; i++)
	{
		cin >> v[i];
		y[i] = (v[i] / 30 + 1) * 10;
		m[i] = (v[i] / 60 + 1) * 15;
		ytotal += y[i];
		mtotal += m[i];
	}
	if (ytotal > mtotal)
	{
		cout << "M " << mtotal;
	}
	else if (ytotal < mtotal)
	{
		cout << "Y " << ytotal;
	}
	else if (ytotal == mtotal)
	{
		cout << "Y M " << ytotal;
	}

	return 0;
}