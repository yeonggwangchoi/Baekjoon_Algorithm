#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int t;
	while (cin>>t && t != -1)
	{
		int sum = 0;
		for (auto i = 1; i < t; i++) {
			if (t % i == 0)
				sum += i;
		}

		if (sum ==t) {
			cout << t << " = 1";
			for (auto i = 2; i < t; i++) {
				if (t % i == 0)
					cout << " + " << i;
			}
			cout << endl;
		}
		else {
			cout << t << " is NOT perfect." << endl;
		}
	}
}