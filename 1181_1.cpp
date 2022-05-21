#include <iostream>
#include <queue>
using namespace std;

struct compare {
	bool operator()(string a, string b) {
		if (a.length() == b.length())
			return a < b;
		else {

		}
	}
};

int main()
{
	string str;

	int N;
	cin >> N;

	priority_queue<string, vector<string>, greater<string>> pq;

	for (int i = 0; i < N; i++)
	{
		cin >> str;
		
		pq.push(str);
	}
	
	while (!pq.empty())
	{
		cout << pq.top() << "\n";
		pq.pop();
	}
}