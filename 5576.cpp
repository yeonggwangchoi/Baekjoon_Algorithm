#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	vector<int> v1;
	vector<int> v2;
	for (int i = 0; i < 10; i++) {
		int num;
		cin >> num;
		v1.push_back(num);
	}
	sort(v1.begin(), v1.end(), greater<int>());
	for (int i = 0; i < 10; i++) {
		int num;
		cin >> num;
		v2.push_back(num);
	}
	sort(v2.begin(), v2.end(), greater<int>());
	
	int sum1 = 0;
	int sum2 = 0;
	for (auto i = 0; i < 3; i++) {
		sum1 += v1[i];
		sum2 += v2[i];
	}
	
	cout << sum1 << " " << sum2;
}