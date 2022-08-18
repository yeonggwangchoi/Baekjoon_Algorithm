#include <iostream>
#include <queue>
using namespace std;

int main()
{
	int N;
	cin >> N;
	
	queue<int> q;
	for (int i = 0; i < N; i++) {
		int num;
		cin >> num;
		q.push(num);
	}

	while (!q.empty())
	{
		cout << q.front() << " ";
		q.pop();
	}
}