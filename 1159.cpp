#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int num;
	cin >> num;
	vector<char>vec;
	int coutnum = 1;
	for (int i = 0; i < num; i++)
	{
		string str;
		cin >> str;
		char a = str[0];
		if (find(vec.begin(), vec.end(), a) != vec.end() && coutnum++ == 5)
		{
			vec.push_back(a);
		}
		cout << a;
	}

	if (vec.size())
		for (int i = 0; i < vec.size(); i++)
			cout << vec[i];
	else
		cout << "PREDAJA";
}