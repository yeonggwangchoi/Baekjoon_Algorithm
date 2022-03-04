#include<iostream>
#include <vector>
using namespace std;
long long sum(vector<int>& a) {
	long long ans = 0;
	int i;
	for (i = 0; i < a.size(); i++)//a.size()
	{
		ans += a[i];
	}
	return ans;
}