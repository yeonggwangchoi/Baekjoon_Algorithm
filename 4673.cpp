#include<iostream>
#include <vector>
#include <algorithm>
using namespace std;
int d(int x)
{
	int temp;
	temp = x + x / 1000 + x % 1000 / 100 + x % 100 / 10 + x % 10;
	return temp;
}

int main()
{
	cin.tie(nullptr);
	ios::sync_with_stdio(false);

	vector <int> v;

	for (int i = 1; i < 10001; i++)
	{
		auto isself = find(v.begin(), v.end(), i);
		
		if(isself == v.end())
			cout << i << "\n";

		if (i <= 9)
		{
			v.push_back(d(i));
		}
		else if (i > 9)
		{
			v.push_back(d(i));
		}
		else if (i > 99)
		{
			v.push_back(d(i));
		}
		else if (i > 999)
		{
			v.push_back(d(i));
		}
		else if (i > 9999)
		{
			v.push_back(d(i));
		}
		
	}
}

