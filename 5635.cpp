#include <iostream>
#include <vector>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int n;
	cin >> n;

	string young_name, old_name;
	vector<int> young{ 1990,1,1 }, old{ 2010,12,31 };
	//vector<int> young = { 1990,1,1 }, old = { 2010,12,31 };

	for (int i = 0; i < n; i++) {
		string name;
		vector<int> temp(3);
		cin >> name;
		for (int j = 2; j >= 0; --j)
			cin >> temp[j];

		if (temp > young) {
			young = temp;
			young_name = name;
		}

		if (temp < old) {
			old = temp;
			old_name = name;
		}
	}
	cout << young_name << '\n' << old_name;
}