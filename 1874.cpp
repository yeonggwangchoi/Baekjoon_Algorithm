#include <iostream>
#include <stack>
#include <vector>
using namespace std;

int main()
{
	cin.tie(nullptr);
	cout.tie(nullptr);
	ios::sync_with_stdio(false);

	int n, cnt = 1;
	cin >> n;

	stack<int> st;
	vector<char> v(n);
	
	for (auto i = 0; i < n; ++i) {
		int num;
		cin >> num;

		while (cnt<=num)
		{
			v.push_back('+');
			st.push(cnt);
			cnt++;
		}

		if (num == st.top()) {
			v.push_back('-');
			st.pop();
		}
		else {
			cout << "No" << endl;
			return 0;
		}
	}

	for (auto i : v)
		cout << i << endl;
	
}