#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int sum = 0;
	vector<int> v;
	int max = 0;
	int maxint = -1;
	for (int i = 0; i < 10; i++) {
		int num;
		cin >> num;
		v.push_back(num);
		sum += num;
		if (max < count(v.begin(), v.end(), num)) {
			max = count(v.begin(), v.end(), num);
			maxint = num;
		}
	}
	cout << sum / 10 << "\n";
	cout << maxint;

}