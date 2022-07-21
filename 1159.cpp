#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int num;
	cin >> num;
	vector<char>v;
	vector<char>v2;
	for (int i = 0; i < num; i++)
	{
		string str;
		cin >> str;
		v.push_back(str[0]);
		if (4 < count(v.begin(), v.end(), v[i]) && find(v2.begin(), v2.end(),v2[v2.size() - 1]) == v2.end())
		{
			v2.push_back(v[i]);
		}
	}

	if (v2.empty())
		cout << "PREDAJA\n";
	else
		for (auto i : v2)
			cout << v2[i] << "\n";
}