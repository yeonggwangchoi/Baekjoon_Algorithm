#include <iostream>
using namespace std;

int main()
{
	cin.tie(nullptr);
	cout.tie(nullptr);
	ios::sync_with_stdio(false);

	int stnum[30]={0, };

	for (int i = 0; i < 28; i++) {
		int num;
		cin >> num;
		stnum[num-1] = 1;
	}
	for (int i = 0; i < 30; i++) {
		
		if (stnum[i] == 0)
			cout << i + 1 << "\n";
	}
}