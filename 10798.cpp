#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<string> v(5);
	for(auto i = 0; i < 5; ++i){
		cin >> v[i];
	}

	for (auto i = 0; i < 15; ++i){
		for (auto j = 0; j < 5; ++j) {
			if (v[j].size() > i)
				cout << v[j][i];
		}
	}
}